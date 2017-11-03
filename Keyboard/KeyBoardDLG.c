# include "KeyBoard.h"


WM_HWIN hKeyBoard_En;
WM_HWIN hKeyBoard_Num;
static unsigned char KEY_CAP_FLAG = 0;

const char *KeyTitle[][41] =
{
	{ "tab", "Chinese", "English", "Left", "Right", "Close",
	"q", "w", "e", "r", "t", "y", "u", "i", "o", "p",
	"a", "s", "d", "f", "g", "h", "j", "k", "l",
	"shift", "z", "x", "c", "v", "b", "n", "m", "del",
	"123", "abc", ",", "  ", ".", "sym", "enter" },

	{ "tab", "Chinese", "English", "Left", "Right", "Close",
	"Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P",
	"A", "S", "D", "F", "G", "H", "J", "K", "L",
	"SHIFT", "Z", "X", "C", "V", "B", "N", "M", "DEL",
	"123", "ABC", ",", "  ", ".", "SYM", "ENTER" },

	{ "tab", "Chinese", "English", "Left", "Right", "Close",
	"!", "\"", "#", "$", "%", "^", "&", "*", "(", ")",
	"_", "=", "~", "!", "@", ":", ";", "<", ">",
	"shift", "?", "/", "{", "}", "|", "\\", "'", "del",
	"123", "abc", ",", "  ", ".", "sym", "enter" },

	{ "tab", "Chinese", "English", "Left", "Right", "Close",
	"1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
	"~", "@", "#", "$", "%", "&", "*", "(", ")",
	"shift", "'", "/", "-", "_", ":", ";", "`", "del",
	"123", "abc", ",", "  ", ".", "sym", "enter" }
};


const unsigned char KeyValue[][42] = {
	/* ??????ASCII??  */
	{ KEY_TABLE_CODE, KEY_METHON_CH_CODE, KEY_METHON_EN_CODE, KEY_LEFT_CODE, KEY_RIGHT_CODE, KEY_CLOSE_CODE,
	KEY_Q_LOW_CODE, KEY_W_LOW_CODE, KEY_E_LOW_CODE, KEY_R_LOW_CODE, KEY_T_LOW_CODE, KEY_Y_LOW_CODE, KEY_U_LOW_CODE, KEY_I_LOW_CODE, KEY_O_LOW_CODE, KEY_P_LOW_CODE,
	KEY_A_LOW_CODE, KEY_S_LOW_CODE, KEY_D_LOW_CODE, KEY_F_LOW_CODE, KEY_G_LOW_CODE, KEY_H_LOW_CODE, KEY_J_LOW_CODE, KEY_K_LOW_CODE, KEY_L_LOW_CODE,
	KEY_SHIFT_CODE, KEY_Z_LOW_CODE, KEY_X_LOW_CODE, KEY_C_LOW_CODE, KEY_V_LOW_CODE, KEY_B_LOW_CODE, KEY_N_LOW_CODE, KEY_M_LOW_CODE, KEY_DEL_CODE,
	KEY_NUM_CODE, KEY_CE_CODE, KEY_COMMA_CODE, KEY_SPACE_CODE, KEY_DOT_CODE, KEY_SYMBOL_CODE, KEY_ENTER_CODE },

	/* ??????ASCII??  */
	{ KEY_TABLE_CODE, KEY_METHON_CH_CODE, KEY_METHON_EN_CODE, KEY_LEFT_CODE, KEY_RIGHT_CODE, KEY_CLOSE_CODE,
	KEY_Q_CAP_CODE, KEY_W_CAP_CODE, KEY_E_CAP_CODE, KEY_R_CAP_CODE, KEY_T_CAP_CODE, KEY_Y_CAP_CODE, KEY_U_CAP_CODE, KEY_I_CAP_CODE, KEY_O_CAP_CODE, KEY_P_CAP_CODE,
	KEY_A_CAP_CODE, KEY_S_CAP_CODE, KEY_D_CAP_CODE, KEY_F_CAP_CODE, KEY_G_CAP_CODE, KEY_H_CAP_CODE, KEY_J_CAP_CODE, KEY_K_CAP_CODE, KEY_L_CAP_CODE,
	KEY_SHIFT_CODE, KEY_Z_CAP_CODE, KEY_C_CAP_CODE, KEY_X_CAP_CODE, KEY_V_CAP_CODE, KEY_B_CAP_CODE, KEY_N_CAP_CODE, KEY_M_CAP_CODE, KEY_DEL_CODE,
	KEY_NUM_CODE, KEY_CE_CODE, KEY_COMMA_CODE, KEY_SPACE_CODE, KEY_DOT_CODE, KEY_SYMBOL_CODE, KEY_ENTER_CODE },

	/* ??????ASCII??  */
	{ KEY_TABLE_CODE, KEY_METHON_CH_CODE, KEY_METHON_EN_CODE, KEY_LEFT_CODE, KEY_RIGHT_CODE, KEY_CLOSE_CODE,
	KEY_SIGH, KEY_D_QUOTES, KEY_LEAD, KEY_DOLLAR, KEY_PER_SIGH, KEY_POW, KEY_AND, KEY_MULT, KEY_L_BRAC, KEY_R_BRAC,
	KEY_LINE, KEY_EQUAL, KEY_WAVY_LINE, KEY_SIGH, KEY_AT, KEY_COLON, KEY_SEMICOLON, KEY_LOW_SIGH, KEY_BIG_SIGH,
	KEY_SHIFT_CODE, KEY_QUE_SIGH, KEY_EXCEPT, KEY_L_L_BRAC, KEY_L_R_BRAC, KEY_V_LINE, KEY_R_SLASH, KEY_PERIOD, KEY_DEL_CODE,
	KEY_NUM_CODE, KEY_CE_CODE, KEY_COMMA_CODE, KEY_SPACE_CODE, KEY_DOT_CODE, KEY_SYMBOL_CODE, KEY_ENTER_CODE },

	/* ??????ASCII??  */
	{ KEY_TABLE_CODE, KEY_METHON_CH_CODE, KEY_METHON_EN_CODE, KEY_LEFT_CODE, KEY_RIGHT_CODE, KEY_CLOSE_CODE,
	KEY_1, KEY_2, KEY_3, KEY_4, KEY_5, KEY_6, KEY_7, KEY_8, KEY_9, KEY_0,
	KEY_WAVY_LINE, KEY_AT, KEY_LEAD, KEY_DOLLAR, KEY_PER_SIGH, KEY_AND, KEY_MULT, KEY_L_BRAC, KEY_R_BRAC,
	KEY_SHIFT_CODE, KEY_PERIOD, KEY_EXCEPT, KEY_MINES, KEY_LINE, KEY_COLON, KEY_SEMICOLON, KEY_DAYTON, KEY_DEL_CODE,
	KEY_NUM_CODE, KEY_CE_CODE, KEY_COMMA_CODE, KEY_SPACE_CODE, KEY_DOT_CODE, KEY_SYMBOL_CODE, KEY_ENTER_CODE },
};


/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate_En[] = {
	{ WINDOW_CreateIndirect, "KeyBoard", WINDOW_IME, 0, 230, 800, 250, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "Table", KEY_TABLE, KEY_TABLE_POS_X, KEY_TABLE_POS_Y, KEY_TABLE_LENGTH, KEY_TABLE_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "Chinese", KEY_METHON_CH, KEY_METHON_CH_POS_X, KEY_METHON_CH_POS_Y, KEY_METHON_CH_LENGTH, KEY_METHON_CH_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "English", KEY_METHON_EN, KEY_METHON_EN_POS_X, KEY_METHON_EN_POS_Y, KEY_METHON_EN_LENGTH, KEY_METHON_EN_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "Left", KEY_LEFT, KEY_LEFT_POS_X, KEY_LEFT_POS_Y, KEY_LEFT_LENGHT, KEY_LEFT_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "Right", KEY_RIGHT, KEY_RIGHT_POS_X, KEY_RIGHT_POS_Y, KEY_RIGHT_LENGHT, KEY_RIGHT_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "Colse", KEY_CLOSE, KEY_CLOSE_POS_X, KEY_CLOSE_POS_Y, KEY_CLOSE_LENGTH, KEY_CLOSE_WIDTH, 0, 0x0, 0 },

	{ BUTTON_CreateIndirect, "Q", KEY_Q, KEY_Q_POS_X, KEY_Q_POS_Y, KEY_Q_LENGTH, KEY_Q_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "W", KEY_W, KEY_W_POS_X, KEY_W_POS_Y, KEY_W_LENGTH, KEY_W_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "E", KEY_E, KEY_E_POS_X, KEY_E_POS_Y, KEY_E_LENGTH, KEY_E_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "R", KEY_R, KEY_R_POS_X, KEY_R_POS_Y, KEY_R_LENGTH, KEY_R_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "T", KEY_T, KEY_T_POS_X, KEY_T_POS_Y, KEY_T_LENGTH, KEY_T_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "Y", KEY_Y, KEY_Y_POS_X, KEY_Y_POS_Y, KEY_Y_LENGTH, KEY_Y_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "U", KEY_U, KEY_U_POS_X, KEY_U_POS_Y, KEY_U_LENGTH, KEY_U_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "I", KEY_I, KEY_I_POS_X, KEY_I_POS_Y, KEY_I_LENGTH, KEY_I_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "O", KEY_O, KEY_O_POS_X, KEY_O_POS_Y, KEY_O_LENGTH, KEY_O_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "P", KEY_P, KEY_P_POS_X, KEY_P_POS_Y, KEY_P_LENGTH, KEY_P_WIDTH, 0, 0x0, 0 },


	{ BUTTON_CreateIndirect, "A", KEY_A, KEY_A_POS_X, KEY_A_POS_Y, KEY_A_LENGTH, KEY_A_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "S", KEY_S, KEY_S_POS_X, KEY_S_POS_Y, KEY_S_LENGTH, KEY_S_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "D", KEY_D, KEY_D_POS_X, KEY_D_POS_Y, KEY_D_LENGTH, KEY_D_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "F", KEY_F, KEY_F_POS_X, KEY_F_POS_Y, KEY_F_LENGTH, KEY_F_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "G", KEY_G, KEY_G_POS_X, KEY_G_POS_Y, KEY_G_LENGTH, KEY_G_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "H", KEY_H, KEY_H_POS_X, KEY_H_POS_Y, KEY_H_LENGTH, KEY_H_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "J", KEY_J, KEY_J_POS_X, KEY_J_POS_Y, KEY_J_LENGTH, KEY_J_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "K", KEY_K, KEY_K_POS_X, KEY_K_POS_Y, KEY_K_LENGTH, KEY_K_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "L", KEY_L, KEY_L_POS_X, KEY_L_POS_Y, KEY_L_LENGTH, KEY_L_WIDTH, 0, 0x0, 0 },

	{ BUTTON_CreateIndirect, "Z", KEY_Z, KEY_Z_POS_X, KEY_Z_POS_Y, KEY_Z_LENGTH, KEY_Z_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "X", KEY_X, KEY_X_POS_X, KEY_X_POS_Y, KEY_X_LENGTH, KEY_X_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "C", KEY_C, KEY_C_POS_X, KEY_C_POS_Y, KEY_C_LENGTH, KEY_C_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "V", KEY_V, KEY_V_POS_X, KEY_V_POS_Y, KEY_V_LENGTH, KEY_V_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "B", KEY_B, KEY_B_POS_X, KEY_B_POS_Y, KEY_B_LENGTH, KEY_B_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "N", KEY_N, KEY_N_POS_X, KEY_N_POS_Y, KEY_N_LENGTH, KEY_N_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "M", KEY_M, KEY_M_POS_X, KEY_M_POS_Y, KEY_M_LENGTH, KEY_M_WIDTH, 0, 0x0, 0 },


	{ BUTTON_CreateIndirect, "shift", KEY_SHIFT, KEY_SHIFT_POS_X, KEY_SHIFT_POS_Y, KEY_SHIFT_LENGTH, KEY_SHIFT_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "del", KEY_DEL, KEY_DEL_POS_X, KEY_DEL_POS_Y, KEY_DEL_LENGTH, KEY_DEL_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, " ", KEY_SPACE, KEY_SPACE_POS_X, KEY_SPACE_POS_Y, KEY_SPACE_LENGTH, KEY_SPACE_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "123", KEY_NUM, KEY_NUM_POS_X, KEY_NUM_POS_Y, KEY_NUM_LENGTH, KEY_NUM_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "sym", KEY_SYMBOL, KEY_SYMBOL_POS_X, KEY_SYMBOL_POS_Y, KEY_SYMBOL_LENGTH, KEY_SYMBOL_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, ",", KEY_COMMA, KEY_COMMA_POS_X, KEY_COMMA_POS_Y, KEY_COMMA_LENGTH, KEY_COMMA_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, ".", KEY_DOT, KEY_DOT_POS_X, KEY_DOT_POS_Y, KEY_DOT_LENGTH, KEY_DOT_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "symbol", KEY_CE, KEY_CE_POS_X, KEY_CE_POS_Y, KEY_CE_LENGTH, KEY_CE_WIDTH, 0, 0x0, 0 },
	{ BUTTON_CreateIndirect, "Enter", KEY_ENTER, KEY_ENTER_POS_X, KEY_ENTER_POS_Y, KEY_ENTER_LENGTH, KEY_ENTER_WIDTH, 0, 0x0, 0 },
	// USER START (Optionally insert additional widgets)
	// USER END
};

static void _cbButtonEnglish(WM_MESSAGE * pMsg)
{
	WM_HWIN hWin;
	GUI_RECT CilentRect;
	long ID = 0;
	switch (pMsg->MsgId)
	{
	case WM_PAINT:
		ID = WM_GetId(pMsg->hWin);
		WM_GetInsideRectEx(pMsg->hWin, &CilentRect);
		GUI_DrawRoundedRect(CilentRect.x0 + 2, CilentRect.y0 + 2, CilentRect.x1 - 2, CilentRect.y1 - 2, 4);

		GUI_SetFont(&GUI_Font24B_ASCII);
		GUI_SetTextAlign(GUI_TA_VCENTER | GUI_TA_HCENTER);
		GUI_SetTextMode(GUI_TEXTMODE_TRANS);
		GUI_DispStringAt(KeyTitle[KEY_CAP_FLAG][ID - 1 - GUI_ID_USER], (CilentRect.x1 - CilentRect.x0) / 2, 25);
		GUI_SetAlpha(200);
		if (BUTTON_IsPressed(pMsg->hWin))
		{
			GUI_SetColor(0X00716854);
			GUI_FillRoundedRect(CilentRect.x0 + 2, CilentRect.y0 + 2, CilentRect.x1 - 2, CilentRect.y1 - 2, 4);
		}
		GUI_SetAlpha(0);
		break;
	default:BUTTON_Callback(pMsg);
		break;
	}
}

void _InitKeyBoardWindow(WM_MESSAGE * pMsg)
{
	BUTTON_Handle hButton;
	unsigned char i = 0;
	for (i = 0; i < 41; i++)
	{
		hButton = WM_GetDialogItem(pMsg->hWin, KEY_TABLE + i);
		WM_SetHasTrans(hButton);
		WM_SetCallback(hButton, _cbButtonEnglish);
		BUTTON_SetFocussable(hButton, 0);
	}

}
void _PaintKeyBoardWin(void)
{
	GUI_SetBkColor(0X00464237);
	GUI_Clear();
}

static void _cbKeyBoard_En(WM_MESSAGE * pMsg) {
	int NCode;
	int Id;
	WM_HWIN hWin;
	int i = 0;

	switch (pMsg->MsgId) {
	case WM_PAINT:_PaintKeyBoardWin();
		break;
	case WM_INIT_DIALOG:_InitKeyBoardWindow(pMsg); break;

	case WM_NOTIFY_PARENT:
		Id = WM_GetId(pMsg->hWinSrc);
		NCode = pMsg->Data.v;

		if (WM_NOTIFICATION_RELEASED == NCode)
		{
			if (KEY_NUM != Id && KEY_TABLE != Id && KEY_METHON_CH != Id
				&& KEY_METHON_EN != Id && KEY_CLOSE != Id && KEY_LEFT != Id
				&& KEY_RIGHT != Id && KEY_SHIFT != Id && KEY_CE != Id)
				GUI_SendKeyMsg(KeyValue[KEY_CAP_FLAG][Id - 1 - GUI_ID_USER], 1);
			switch (Id)
			{
			case KEY_SHIFT:
				if (KEY_CAP_FLAG == 0)KEY_CAP_FLAG = 1;
				else  KEY_CAP_FLAG = 0;
				WM_InvalidateWindow(pMsg->hWin);
				break;
			case KEY_SYMBOL:
			{
							   if (KEY_CAP_FLAG != 2) KEY_CAP_FLAG = 2;
							   else KEY_CAP_FLAG = 0;
							   WM_InvalidateWindow(pMsg->hWin);
			}break;
			case KEY_NUM:
			{
							if (KEY_CAP_FLAG != 3)	KEY_CAP_FLAG = 3;
							else KEY_CAP_FLAG = 0;
							WM_InvalidateWindow(pMsg->hWin);
			}break;
			//case KEY_CE:
			//{
			//	if (KEY_CAP_FLAG == 0)KEY_CAP_FLAG = 1;
			//	else  KEY_CAP_FLAG = 0;
			//	WM_InvalidateWindow(pMsg->hWin);
			//	break;
			//}break;
			}
		}
	default:
		WM_DefaultProc(pMsg);
		break;
	}
}


void GUI_SetSkin(void)
{
	BUTTON_SetDefaultSkin(BUTTON_SKIN_FLEX);
	CHECKBOX_SetDefaultSkin(CHECKBOX_SKIN_FLEX);
	DROPDOWN_SetDefaultSkin(DROPDOWN_SKIN_FLEX);
	FRAMEWIN_SetDefaultSkin(FRAMEWIN_SKIN_FLEX);
	HEADER_SetDefaultSkin(HEADER_SKIN_FLEX);
	MENU_SetDefaultSkin(MENU_SKIN_FLEX);
	MULTIPAGE_SetDefaultSkin(MULTIPAGE_SKIN_FLEX);
	PROGBAR_SetDefaultSkin(PROGBAR_SKIN_FLEX);
	RADIO_SetDefaultSkin(RADIO_SKIN_FLEX);
	SCROLLBAR_SetDefaultSkin(SCROLLBAR_SKIN_FLEX);
	SLIDER_SetDefaultSkin(SLIDER_SKIN_FLEX);
	SPINBOX_SetDefaultSkin(SPINBOX_SKIN_FLEX);
}


static void _cbEditEindow(WM_MESSAGE* pMsg)
{
	int Id;
	int NCode;
	char  String[512] = { 0 };
	switch (pMsg->MsgId)
	{
	case WM_PAINT:GUI_Clear(); break;
	case WM_NOTIFICATION_CLICKED:
		if (hKeyBoard_En != 0)
		{
			WM_DeleteWindow(hKeyBoard_En);
			hKeyBoard_En = 0;
		}break;
	case WM_NOTIFY_PARENT:
		Id = WM_GetId(pMsg->hWinSrc);
		NCode = pMsg->Data.v;
		switch (Id)
		{
		case GUI_ID_EDIT0:
			switch (NCode)
			{
			case WM_NOTIFICATION_GOT_FOCUS:
				if (hKeyBoard_En == 0) CreateKeyBoard();
				//	break;
				break;

			}break;

		}break;

	default:WM_DefaultProc(pMsg); break;
	}
}


void CreateKeyBoard(void) {
	hKeyBoard_En = GUI_CreateDialogBox(_aDialogCreate_En, GUI_COUNTOF(_aDialogCreate_En), _cbKeyBoard_En, WM_HBKWIN, 0, 0);
}

void MainTask(void) {
	WM_HWIN hWin;
	GUI_Init();
	WM_SetCreateFlags(WM_CF_MEMDEV);  // Use memory devices on all windows to avoid flicker
	GUI_SetSkin();
	hWin = EDIT_CreateEx(20, 20, 100, 40, 0, WM_CF_SHOW, 0x00, GUI_ID_EDIT0, 512);
	EDIT_SetText(hWin, "sdfads");
	//	EDIT_CreateEx(200, 20, 100, 40, 0, WM_CF_SHOW, 0x00, GUI_ID_EDIT1, 512);
	MULTIEDIT_CreateEx(600, 100, 300, 100, WM_HBKWIN, WM_CF_SHOW, 0x0, GUI_ID_MULTIEDIT0, 1024, "Test");
	//	BUTTON_CreateEx(300, 200, 80, 40, WM_HBKWIN, WM_CF_SHOW, 0x0, GUI_ID_BUTTON9);
	WM_SetCallback(WM_HBKWIN, _cbEditEindow);
	//	CreateKeyBoard();
	while (1)
	{
		GUI_Delay(100);
	}
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
