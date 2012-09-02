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
        jsonObj[jsonObj.length-1].Num = num;
        jsonObj[jsonObj.length-1].Price = price;
      }
      $.cookie('cookieFoodID', JSON.stringify(jsonObj), cookieSet); //需要json2.js支持
    }
  }
  $(function () {
    $('.num-plus').click(function () {
      $food_order = $(this).siblings('.food-order');
      $num = $food_order.html();
      $num = num_add($num);
      $food_order.html($num);
    });
    
    $('.num-minus').click(function () {
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
    
    $('.add-to-cart').click(function () {
      $food_info = $(this).siblings().children('.food-order');
      $food_check = $food_info.parent();
      //$('#block-ct-ordering-cart-info .content').append($food_check.clone(), $food_info.attr('name'), $food_info.attr('price')*$food_info.html());
      var fid = $food_info.attr('fid');
      var fname = $food_info.attr('name');
      var fprice = $food_info.attr('price');
      var fnum = $food_info.html();
      AddToShoppingCart(fid, fname, fnum, fprice);
      
      var jsonObj = eval('(' + $.cookie('cookieFoodID') + ')'); //将json字符串转换成数组
      var $foods = '';
      for (var food in jsonObj) {
        //alert(jsonObj[food].Price);
        $foods += jsonObj[food].Name;
        $foods += jsonObj[food].Num;
        $foods += jsonObj[food].Price * jsonObj[food].Num;
      }
      $('#block-ct-ordering-cart-info .content').html($foods);
    });
  });
})(jQuery, Drupal, this, this.document);