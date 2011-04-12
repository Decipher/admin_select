<?php
/**
 * @file
 * Administration menu module integration.
 */

/**
 * Implements hook_admin_select_init() on behalf of admin_menu.module.
 */
function admin_menu_admin_select_init($admin) {
  if ($admin != 'admin_menu') {
    admin_menu_suppress();
  }
}

/**
 * Implements hook_admin_select_module().
 */
function admin_menu_admin_select_module() {
  return array('admin_menu' => t('Administration menu module'));
}
