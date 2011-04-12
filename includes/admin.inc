<?php
/**
 * @file
 * Admin module integration.
 */

/**
 * Implements hook_admin_select_init() on behalf of admin.module.
 */
function admin_admin_select_init($admin) {
  if ($admin != 'admin') {
    admin_suppress();
  }
}

/**
 * Implements hook_admin_select_module().
 */
function admin_admin_select_module() {
  if (user_access('use admin toolbar')) {
    return array('admin' => t('Admin module'));
  }
}
