<?php
/**
 * @file
 * ct_ordering_features.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function ct_ordering_features_locale_default_languages() {
  $languages = array();

  // Exported language: zh-hans.
  $languages['zh-hans'] = array(
    'language' => 'zh-hans',
    'name' => 'Chinese, Simplified',
    'native' => '简体中文',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'zh-hans',
    'weight' => '0',
  );
  return $languages;
}
