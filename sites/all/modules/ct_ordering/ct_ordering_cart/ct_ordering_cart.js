(function ($, Drupal, window, document, undefined) {
  function num_add(num) {
    num = parseInt(num);
    num += 1;
    return num;
  }
  function num_minus(num) {
    num = parseInt(num);
    num -= 1;
    return num;
  }
  function AddToShoppingCart(id, name, num, price) {
    var _num = 1;
    if (num != undefined) {
      _num = num;
    }
    var cookieSet = { expires: 7, path: '/'};
    var jsonStr = "[{'FoodID':'" + id + "','Name':'" + name + "','Num':'" + _num + "','Price':'" + price + "'}]";
    if ($.cookie('cookieFoodID') == null) {
      $.cookie('cookieFoodID', jsonStr, cookieSet);
    }
    else {
      var jsonObj = eval('(' + $.cookie('cookieFoodID') + ')'); //将json字符串转换成数组
      var findFood = false;
      for (var food in jsonObj) {
        if (jsonObj[food].FoodID == id) {
          findFood = true;
          break;
        }
      }
      if (findFood == false) {
        jsonObj[jsonObj.length] = new Object();
        jsonObj[jsonObj.length-1].FoodID = id;
        jsonObj[jsonObj.length-1].Name = name;
        jsonObj[jsonObj.length-1].Num = _num;
        jsonObj[jsonObj.length-1].Price = price;
      }
      $.cookie('cookieFoodID', JSON.stringify(jsonObj), cookieSet); //需要json2.js支持
    }
  }
  
  function RefreshShoppingCart(id, name, num, price) {
    var cookieSet = { expires: 7, path: '/'};
    var jsonObj = eval('(' + $.cookie('cookieFoodID') + ')'); //将json字符串转换成数组
    for (var food in jsonObj) {
      if (jsonObj[food].FoodID == id) {
        jsonObj[food].Name = name;
        jsonObj[food].Num = num;
        jsonObj[food].Price = price;
      }
    $.cookie('cookieFoodID', JSON.stringify(jsonObj), cookieSet); //需要json2.js支持
    }
  }
  
  function RemoveFood(id) {
    var cookieSet = { expires: 7, path: '/'};
    var jsonObj = eval('(' + $.cookie('cookieFoodID') + ')'); //将json字符串转换成数组
    for (var food in jsonObj) {
      if (jsonObj[food].FoodID == id) {
        jsonObj.splice(food);
      }
    $.cookie('cookieFoodID', JSON.stringify(jsonObj), cookieSet); //需要json2.js支持
    }
  }
  
  function LoadFoods() {
    if ($.cookie('cookieFoodID') != null) {
      var jsonObj = eval('(' + $.cookie('cookieFoodID') + ')'); //将json字符串转换成数组
      var $foods = '';
      for (var food in jsonObj) {
        $foods += '<div class="food-item"><span class="food-name" fid="' + jsonObj[food].FoodID + '" price="' + jsonObj[food].Price + '">' + jsonObj[food].Name + '</span>';
        $foods += '<span class="num-minus">-</span><span class="food-order">' + jsonObj[food].Num + '</span><span class="num-plus">+</span>';
        $foods += '<span class="food-price">' + jsonObj[food].Price * jsonObj[food].Num + '</span>';
        $foods += '<span class="food-remove">删除</span></div>';
      }
      $('#block-ct-ordering-cart-info .content').html($foods);
    }
  }
  
  $(function () {
    LoadFoods();
    
    $('.num-plus').live('click', function () {
      $food_order = $(this).siblings('.food-order');
      $num = $food_order.html();
      $num = num_add($num);
      $food_order.html($num);
    });
    
    $('.num-minus').live('click', function () {
      $food_order = $(this).siblings('.food-order');
      $num = $food_order.html();
      if ($num > 1) {
        $num = num_minus($num);
        $food_order.html($num);
      }
      else {
        alert("订餐数最小为1");
      }
    });
    
    $('.food-item .num-plus, .food-item .num-minus').live('click', function () {
      $num = $(this).siblings('.food-order').html();
      $id = $(this).siblings('.food-name').attr('fid');
      $name = $(this).siblings('.food-name').html();
      $price = $(this).siblings('.food-name').attr('price');
      RefreshShoppingCart($id, $name, $num, $price);
      $(this).siblings('.food-price').html($price * $num);
    });
    
    $('.food-remove').live('click', function () {
      $id = $(this).siblings('.food-name').attr('fid');
      RemoveFood($id);
      $(this).parent().remove();
    });
    
    $('.add-to-cart').click(function () {
      $food_info = $(this).siblings().children('.food-order');
      $food_check = $food_info.parent();
      var fid = $food_info.attr('fid');
      var fname = $food_info.attr('name');
      var fprice = $food_info.attr('price');
      var fnum = $food_info.html();
      AddToShoppingCart(fid, fname, fnum, fprice);
      
      LoadFoods();
    });
    
    $('#ct-restaurant-order-form .form-submit').live('click', function () {
      $('#content').append($.cookie('cookieFoodID'));
      $.cookie('cookieFoodID', null, { path: '/' });
    });
  });
})(jQuery, Drupal, this, this.document);