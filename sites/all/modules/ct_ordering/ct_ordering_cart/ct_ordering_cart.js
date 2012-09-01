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
  $(function () {
    $('.view-views-of-foods .views-field-nid .num-plus').click(function () {
      $food_order = $(this).siblings('.food-order');
      $num = $food_order.html();
      $num = num_add($num);
      $food_order.html($num);
    });
    
    $('.view-views-of-foods .views-field-nid .num-minus').click(function () {
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
  });
})(jQuery, Drupal, this, this.document);