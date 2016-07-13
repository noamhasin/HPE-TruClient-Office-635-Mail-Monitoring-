//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://outlook.office.com/owa/'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on User account emailbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type noam.hasin@hpe.com in User account emailbox", "snapshot=Action_3.inf");
	truclient_step("4", "Log on", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Click on Use your email address... textbox", "snapshot=Action_4.1.inf");
		truclient_step("4.2", "Type noam.hasin@hpe.com in Use your email address... textbox", "snapshot=Action_4.2.inf");
		truclient_step("4.4", "Click on Log on button", "snapshot=Action_4.4.inf");
	}
	truclient_step("5", "Click on ??? button", "snapshot=Action_5.inf");
	truclient_step("6", "Activate browser window #2", "snapshot=Action_6.inf");
	truclient_step("7", "Click on ???? ????? textbox", "snapshot=Action_7.inf");
	truclient_step("8", "Type noam.hasin@hpe.com in ???? ????? textbox", "snapshot=Action_8.inf");
	truclient_step("11", "Click on ???? ???? textbox", "snapshot=Action_11.inf");
	truclient_step("12", "Click on ???? ???? textbox", "snapshot=Action_12.inf");
	truclient_step("13", "Type OutLook Monitoring Test in ???? ???? textbox", "snapshot=Action_13.inf");
	truclient_step("14", "Click on ???? ????? ?? ???? ????... textbox", "snapshot=Action_14.inf");
	truclient_step("15", "Click on ???? ????? ?? ???? ????... textbox", "snapshot=Action_15.inf");
	truclient_step("16", "Type My Test Message in ???? ????? ?? ???? ????... textbox", "snapshot=Action_16.inf");
	truclient_step("17", "Click on ??? button", "snapshot=Action_17.inf");
	truclient_step("18", "Activate browser window #1", "snapshot=Action_18.inf");
	truclient_step("20", "Click on Hasin, Noam", "snapshot=Action_20.inf");
	truclient_step("23", "Click on ??? button", "snapshot=Action_23.inf");
	truclient_step("25", "Click on ?????? ?????? heading", "snapshot=Action_25.inf");
	truclient_step("26", "Click on button (1) button", "snapshot=Action_26.inf");
	truclient_step("27", "Click on ??? button", "snapshot=Action_27.inf");
	truclient_step("28", "Mouse Over", "snapshot=Action_28.inf");
	{
		truclient_step("28.2", "Move mouse over ??? ?????? ????? ???????...", "snapshot=Action_28.2.inf");
	}
	truclient_step("29", "Mouse down on ????? button", "snapshot=Action_29.inf");
	truclient_step("30", "Mouse Over", "snapshot=Action_30.inf");
	{
		truclient_step("30.2", "Move mouse over ??? ?????? ????? ???????...", "snapshot=Action_30.2.inf");
	}
	truclient_step("31", "Click on ????? button", "snapshot=Action_31.inf");
	truclient_step("33", "Click on button (2) button", "snapshot=Action_33.inf");
	truclient_step("34", "Click on ?? menuitem", "snapshot=Action_34.inf");

	return 0;
}
