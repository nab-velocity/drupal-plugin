<?php

function uc_velocity_settings_form($form, &$form_state) {

    // create admin configuartion form
    $form['velocity_protocol'] = array(
        '#type' => 'fieldset',
        '#title' => t('Save velocity credential for live payment'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
      );
      $form['velocity_protocol']['uc_velocity_identitytoken'] = array(
        '#type' => 'textarea',
        '#title' => t('IdentityToken'),
        '#description' => t('The merchant account IdentityToken for payment via velocity gateway.'),
        '#default_value' => variable_get('uc_velocity_identitytoken', ''),
        '#size' => 16,
      );
      $form['velocity_protocol']['uc_velocity_workflowid'] = array(
        '#type' => 'textfield',
        '#title' => t('Workflowid/ServiceId'),
        '#description' => t('The merchant account workflowid for payment via velocity gateway.'),
        '#default_value' => variable_get('uc_velocity_workflowid', ''),
        '#size' => 16,
      );
      $form['velocity_protocol']['uc_velocity_applicationprofileid'] = array(
        '#type' => 'textfield',
        '#title' => t('ApplicationProfileId'),
        '#description' => t('The merchant account applicationprofileid for payment via velocity gateway.'),
        '#default_value' => variable_get('uc_velocity_applicationprofileid', ''),
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

}