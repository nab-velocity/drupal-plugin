<?php

function uc_velocity_settings_form($form, &$form_state) {
//echo '<pre>'; print_r($form_state); echo '</pre>'; die;
//  switch ($form) {
//    case 'settings':
//      // help text
//      global $base_url;
      $form['velocity_protocol'] = array(
        '#type' => 'fieldset',
        '#title' => t('Save velocity credential for live payment'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
      );
      $form['velocity_protocol']['uc_velocity_workflowid'] = array(
        '#type' => 'textfield',
        '#title' => t('Workflowid/ServiceId'),
        '#description' => t('The merchant account credential for payment via velocity gateway.'),
        '#default_value' => variable_get('uc_velocity_workflowid', ''),
        '#size' => 16,
      );
      $form['velocity_protocol']['uc_velocity_merchantprofileid'] = array(
        '#type' => 'textfield',
        '#title' => t('MerchantProfileId'),
        '#description' => t('The merchant account profile id for payment via velocity gateway.'),
        '#default_value' => variable_get('uc_velocity_merchantprofileid', ''),
        '#size' => 16,
      );
      $form['velocity_protocol']['uc_velocity_test'] = array(
        '#type' => 'checkbox',
        '#title' => t('<b>Enable test mode</b>'),
        '#description' => t('Only send transactions to the test server.'),
        '#default_value' => variable_get('uc_velocity_test', TRUE),
      );
      return $form;
 // }
}