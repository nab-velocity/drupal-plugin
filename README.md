Velocity Drupal Module Installation Documentation 

1.	Configuration Requirement: Drupal site Version 7.3 or above version must be required for our velocity payment module installation.

2.	Download velocity Drupal Module by clicking on Download zip button on the right bottom of this page.

3.  Extract the zip and re-zip the folder 'uc_velocity' (inside the extracted folder). 

4.	Installation & Configuration of Module from Admin Panel:
	  Login Drupal admin panel and click on Modules Menu option then then click on 'Install new module'.

Show two option for add the module one for online by url and other one is upload maudule zipped file and all installed module listed bellow.

Click on “Browse” option and select 'uc_velocity' zipped module file from system then Click on “Install” button for upload the module in Drupal module section and listed in “MODULES LIST” below.

After Successful installation, show module enable option click on that otherwise select module and click on 'save configuration' button.

For configuration click on 'store' menu and then click on 'Payment methods' our payment module listed there then click on 'settings' show 'Save velocity credential for live payment' click on that then display configuration form put velocity credential and save.

VELOCITY CREDENTIAL DETAILS
1.	IdentityToken - This is security Token provided by velocity to merchant.
2.	WorkFlowId/ServiceId: - This is service id provided by velocity to merchant.
3.	ApplicationProfileId: - This is application id provided by velocity to merchant.
4.	MerchantProfileId: - This is merchant id provided by velocity to merchant.
5.	Test Mode :- This is for test the module, if select checkbox for test mode enable and no need to save “WorkFlowId/ServiceId & MerchantProfileId” otherwise unchecked the checkbox and save “WorkFlowId/ServiceId & MerchantProfileId” for live payment.

For Refund option at admin side first open 'Store' and then 'View Orders' and click on perticular order refund is process after change the order status to 'canceled' or 'Velocity Refund' shows the refund form with refund shipping checkbox then put amount and 'Process Refund' or 'Not Now'.

For uninstall the velocity module of Drupal goto Modules Menu option then uncheck the module and save configuration our module listed in uninstall tab then select and uninstall the module.

5. We have saved the raw request and response objects in &lt;prefix&gt;_velocity_transactions table.