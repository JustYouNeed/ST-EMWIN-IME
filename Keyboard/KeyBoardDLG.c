# include "KeyBoard.h"


WM_HWIN hKeyBoard_En;
WM_HWIN hKeyBoard_Num;
static unsigned char KEY_CAP_FLAG = 0;

const char *KeyTitle[][35] = 
{
	{ "q", "w", "e", "r", "t", "y", "u", "i", "o", "p",
	"a", "s", "d", "f", "g", "h", "j", "k", "l",
	"shift", "z", "x", "c", "v", "b", "n", "m", "del",
	"123", "c/e", ",", "  ", ".", "sym", "enter" },

	{ "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P",
	"A", "S", "D", "F", "G", "H", "J", "K", "L",
	"SHIFT", "Z", "X", "C", "V", "B", "N", "M", "DEL",
	"123", "C/E", ",", "  ", ".", "SYM", "ENTER" },

	{ "!", "\"", "#", "$", "%", "^", "&", "*", "(", ")",
	"_", "=", "~", "!", "@", ":", ";", "<", ">",
	"shift", "?", "/", "{", "}", "|", "\\", "'", "del",
	"123", "c/e", ",", "  ", ".", "sym", "enter" },

	{ "1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
	"~", "@", "#", "$", "%", "&", "*", "(", ")",
	"shift", "'", "/", "-", "_", ":", ";", "`", "del",
	"123", "c/e", ",", "  ", ".", "sym", "enter" }
};


const unsigned char KeyValue[][35] = {
	{ KEY_Q_LOW, KEY_W_LOW, KEY_E_LOW, KEY_R_LOW, KEY_T_LOW, KEY_Y_LOW, KEY_U_LOW, KEY_I_LOW, KEY_O_LOW, KEY_P_LOW,
	KEY_A_LOW, KEY_S_LOW, KEY_D_LOW, KEY_F_LOW, KEY_G_LOW, KEY_H_LOW, KEY_J_LOW, KEY_K_LOW, KEY_L_LOW,
	KEY_SHIFT, KEY_Z_LOW, KEY_X_LOW, KEY_C_LOW, KEY_V_LOW, KEY_B_LOW, KEY_N_LOW, KEY_M_LOW, KEY_DEL,
	KEY_123, KEY_SYMBOL, KEY_PERIOD, KEY_SPACE, KEY_DOT, KEY_CH, KEY_ENTER },

	{ KEY_Q_CAP, KEY_W_CAP, KEY_E_CAP, KEY_R_CAP, KEY_T_CAP, KEY_Y_CAP, KEY_U_CAP, KEY_I_CAP, KEY_O_CAP, KEY_P_CAP,
	KEY_A_CAP, KEY_S_CAP, KEY_D_CAP, KEY_F_CAP, KEY_G_CAP, KEY_H_CAP, KEY_J_CAP, KEY_K_CAP, KEY_L_CAP,
	KEY_SHIFT, KEY_Z_CAP, KEY_X_CAP, KEY_C_CAP, KEY_V_CAP, KEY_B_CAP, KEY_N_CAP, KEY_M_CAP, KEY_DEL,
	KEY_123, KEY_SYMBOL, KEY_PERIOD, KEY_SPACE, KEY_DOT, KEY_CH, KEY_ENTER },

	{ KEY_SIGH, KEY_D_QUOTES, KEY_LEAD, KEY_DOLLAR, KEY_PER_SIGH, KEY_POW, KEY_AND, KEY_MULT, KEY_L_BRAC, KEY_R_BRAC ,
	KEY_LINE, KEY_EQUAL, KEY_WAVY_LINE, KEY_SIGH, KEY_AT, KEY_COLON, KEY_SEMICOLON, KEY_LOW_SIGH, KEY_BIG_SIGH,
	KEY_SHIFT, KEY_QUE_SIGH, KEY_EXCEPT, KEY_L_L_BRAC, KEY_L_R_BRAC, KEY_V_LINE, KEY_R_SLASH, KEY_PERIOD, KEY_DEL,
	KEY_123, KEY_SYMBOL, KEY_PERIOD, KEY_SPACE, KEY_DOT, KEY_CH, KEY_ENTER },

	{ KEY_1, KEY_2, KEY_3, KEY_4, KEY_5, KEY_6, KEY_7, KEY_8, KEY_9, KEY_0,
	KEY_WAVY_LINE, KEY_AT, KEY_LEAD, KEY_DOLLAR, KEY_PER_SIGH, KEY_AND, KEY_MULT, KEY_L_BRAC, KEY_R_BRAC ,
	KEY_SHIFT, KEY_PERIOD, KEY_EXCEPT, KEY_MINES, KEY_LINE, KEY_COLON, KEY_SEMICOLON, KEY_DAYTON, KEY_DEL ,
	KEY_123, KEY_SYMBOL, KEY_PERIOD, KEY_SPACE, KEY_DOT, KEY_CH, KEY_ENTER }
};

const static GUI_POINT Narrow[7] = { { 0, 0 }, { 15, 20 }, { 5, 20 }, { 5, 30 }, { -5, 30 }, { -5, 20 }, {-15,20} };

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate_En[] = {
  { WINDOW_CreateIndirect, "KeyBoard", ID_WINDOW_0, 0, 280, 800, 200, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Q", ID_BUTTON_Q, 0, 0, 80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "V", ID_BUTTON_V, 360, 100, 80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "C", ID_BUTTON_C, 280, 100, 80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Z", ID_BUTTON_Z, 120, 100, 80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "K", ID_BUTTON_K, 600, 50,  80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "L", ID_BUTTON_L, 680, 50,  80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "X", ID_BUTTON_X, 200, 100, 80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "J", ID_BUTTON_J, 520, 50,  80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "B", ID_BUTTON_B, 440, 100, 80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "P", ID_BUTTON_P, 720, 0,   80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "I", ID_BUTTON_I, 560, 0,   80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Y", ID_BUTTON_Y, 400, 0,   80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "R", ID_BUTTON_R, 240, 0,   80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "E", ID_BUTTON_E, 160, 0,   80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "W", ID_BUTTON_W, 80,  0,   80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "T", ID_BUTTON_T, 320, 0,   80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "D", ID_BUTTON_D, 200, 50,  80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "H", ID_BUTTON_H, 440, 50,  80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "G", ID_BUTTON_G, 360, 50,  80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "F", ID_BUTTON_F, 280, 50,  80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "A", ID_BUTTON_A, 40,  50,  80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "S", ID_BUTTON_S, 120, 50,  80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "U", ID_BUTTON_U, 480, 0,   80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "O", ID_BUTTON_O, 640, 0,   80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "N", ID_BUTTON_N, 520, 100, 80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "M", ID_BUTTON_M, 600, 100, 80, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "shift", ID_BUTTON_SHIFT, 0,   100, 120, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "del", ID_BUTTON_DEL,     680, 100, 120, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, " ", ID_BUTTON_SPACE, 280, 150, 240, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "123", ID_BUTTON_123,     0,   150, 90,  50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "sym", ID_BUTTON_SYMBOL,    94,  150, 90,  50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, ",", ID_BUTTON_PERIOD,    188, 150, 90,  50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, ".", ID_BUTTON_COMMA,     522, 150, 90,  50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "symbol", ID_BUTTON_CH, 616, 150, 90, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Enter", ID_BUTTON_ENTER,   710, 150, 90, 50, 0, 0x0, 0 },
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
		//if (ID == ID_BUTTON_SHIFT)
		//{
		//	GUI_FillPolygon(Narrow, GUI_COUNTOF(Narrow), 60, 10);
		//}
		//else
			GUI_DispStringAt(KeyTitle[KEY_CAP_FLAG][ID - 1 - GUI_ID_USER], (CilentRect.x1 - CilentRect.x0)/2, 25);
		GUI_SetAlpha(200);
		if (BUTTON_IsPressed(pMsg->hWin))
		{
			GUI_SetColor(0X00716854);
		//	GUI_FillRect(CilentRect.x0, CilentRect.y0, CilentRect.x1, CilentRect.y1);
			
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
	for ( i = 0; i < 35; i++)
	{
		hButton = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_Q + i);
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
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_PAINT:_PaintKeyBoardWin();
	  break;
  case WM_INIT_DIALOG:_InitKeyBoardWindow(pMsg);break;

  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;

	if (WM_NOTIFICATION_RELEASED == NCode)
	{
		GUI_SendKeyMsg(KeyValue[KEY_CAP_FLAG][Id - 1 - GUI_ID_USER], 1);
		switch (Id)
		{
			case ID_BUTTON_SHIFT:
				if (KEY_CAP_FLAG == 0)KEY_CAP_FLAG = 1;
				else  KEY_CAP_FLAG = 0;
				WM_InvalidateWindow(pMsg->hWin);
				break;
			case ID_BUTTON_SYMBOL:
			{
				if (KEY_CAP_FLAG != 2) KEY_CAP_FLAG = 2;
				else KEY_CAP_FLAG = 0;
				WM_InvalidateWindow(pMsg->hWin);
			}break;
			case ID_BUTTON_123:
			{
				if (KEY_CAP_FLAG != 3)	KEY_CAP_FLAG = 3;
				else KEY_CAP_FLAG = 0;
				WM_InvalidateWindow(pMsg->hWin);
			}break;
			case ID_BUTTON_CH:
			{
			   WM_DeleteWindow(pMsg->hWin);
			   hKeyBoard_En = 0;
			}break;
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
	char  String[512] = {0};
	switch (pMsg->MsgId)
	{
	//case WM_PAINT:GUI_SetBkColor(GUI_WHITE);
	//	GUI_Clear();
	//	break;
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
				if(hKeyBoard_En == 0) CreateKeyBoard();
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
