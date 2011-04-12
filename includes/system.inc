<?php
/**
 * @file
 * System module integration.
 */

/**
 * Implements hook_init().
 */
function admin_select_init() {
  $admin_modules = module_invoke_all('admin_select_module');
  if (count($admin_modules) > 1) {
    global $user;
    $data = unserialize($user->data);
    $admin = isset($data['admin_select']) ? $data['admin_select'] : current(array_keys($admin_modules));

    // Invokes hook_admin_select_init().
    module_invoke_all('admin_select_init', $admin);
  }
}
