# ifndef __KEY_BOARD_H
# define __KEY_BOARD_H
# include "GUI.h"
# include "WM.h"
# include "DIALOG.h" 




# define KEY_FIRST_LINE_POS_Y	0
# define KEY_SECOND_LINE_POS_Y	(KEY_FIRST_LINE_POS_Y + 50)
# define KEY_THIRD_LINE_POS_Y	(KEY_SECOND_LINE_POS_Y + 50)
# define KEY_FOURTH_LINE_POS_Y	(KEY_THIRD_LINE_POS_Y + 50)
# define KEY_FIFTH_LINE_POS_Y	(KEY_FOURTH_LINE_POS_Y + 50)

# define KEY_X_INTERVAL			0
# define KEY_Y_INTERVAL			0


# define WINDOW_IME					(GUI_ID_USER + 42)

# define KEY_TABLE					(GUI_ID_USER + 1)
# define KEY_TABLE_CODE				9
# define KEY_TABLE_LENGTH			130
# define KEY_TABLE_WIDTH				50
# define KEY_TABLE_POS_X				0
# define KEY_TABLE_POS_Y				KEY_FIRST_LINE_POS_Y


# define KEY_METHON_CH				(GUI_ID_USER + 2)
# define KEY_METHON_CH_CODE			255
# define KEY_METHON_CH_LENGTH		130
# define KEY_METHON_CH_WIDTH			50
# define KEY_METHON_CH_POS_X			(KEY_TABLE_POS_X + KEY_TABLE_LENGTH + 4)
# define KEY_METHON_CH_POS_Y			KEY_FIRST_LINE_POS_Y


# define KEY_METHON_EN				(GUI_ID_USER + 3)
# define KEY_METHON_EN_CODE			255
# define KEY_METHON_EN_LENGTH		130
# define KEY_METHON_EN_WIDTH			50
# define KEY_METHON_EN_POS_X			(KEY_METHON_CH_POS_X + KEY_METHON_CH_LENGTH + 4)
# define KEY_METHON_EN_POS_Y			KEY_FIRST_LINE_POS_Y


# define KEY_LEFT					(GUI_ID_USER + 4)
# define KEY_LEFT_CODE				37
# define KEY_LEFT_LENGHT				130
# define KEY_LEFT_WIDTH				50
# define KEY_LEFT_POS_X				(KEY_METHON_EN_POS_X + KEY_METHON_EN_LENGTH + 4)
# define KEY_LEFT_POS_Y				KEY_FIRST_LINE_POS_Y

# define KEY_RIGHT					(GUI_ID_USER + 5)
# define KEY_RIGHT_CODE				39
# define KEY_RIGHT_LENGHT			130
# define KEY_RIGHT_WIDTH				50
# define KEY_RIGHT_POS_X				(KEY_LEFT_POS_X + KEY_LEFT_LENGHT + 4)
# define KEY_RIGHT_POS_Y				KEY_FIRST_LINE_POS_Y

# define KEY_CLOSE					(GUI_ID_USER + 6)
# define KEY_CLOSE_CODE				255
# define KEY_CLOSE_LENGTH			130
# define KEY_CLOSE_WIDTH				50
# define KEY_CLOSE_POS_X				(KEY_RIGHT_POS_X + KEY_RIGHT_LENGHT + 4)
# define KEY_CLOSE_POS_Y				KEY_FIRST_LINE_POS_Y


# define KEY_Q						(GUI_ID_USER + 7)
# define KEY_Q_CAP_CODE				81
# define KEY_Q_LOW_CODE				(KEY_Q_CAP_CODE + 32)
# define KEY_Q_LENGTH				80
# define KEY_Q_WIDTH					50
# define KEY_Q_POS_X					0
# define KEY_Q_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_W						(GUI_ID_USER + 8)
# define KEY_W_CAP_CODE				87
# define KEY_W_LOW_CODE				(KEY_W_CAP_CODE + 32)
# define KEY_W_LENGTH				80
# define KEY_W_WIDTH					50
# define KEY_W_POS_X					(KEY_Q_POS_X + KEY_Q_LENGTH)
# define KEY_W_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_E						(GUI_ID_USER + 9)
# define KEY_E_CAP_CODE				69
# define KEY_E_LOW_CODE				(KEY_E_CAP_CODE + 32)
# define KEY_E_LENGTH				80
# define KEY_E_WIDTH					50
# define KEY_E_POS_X					(KEY_W_POS_X + KEY_W_LENGTH)
# define KEY_E_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_R						(GUI_ID_USER + 10)
# define KEY_R_CAP_CODE				82
# define KEY_R_LOW_CODE				(KEY_R_CAP_CODE + 32)				
# define KEY_R_LENGTH				80
# define KEY_R_WIDTH					50
# define KEY_R_POS_X					(KEY_E_POS_X + KEY_E_LENGTH)
# define KEY_R_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_T						(GUI_ID_USER + 11)
# define KEY_T_CAP_CODE				84
# define KEY_T_LOW_CODE				(KEY_T_CAP_CODE + 32)
# define KEY_T_LENGTH				80
# define KEY_T_WIDTH					50
# define KEY_T_POS_X					(KEY_R_POS_X + KEY_R_LENGTH)
# define KEY_T_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_Y						(GUI_ID_USER + 12)
# define KEY_Y_CAP_CODE				89
# define KEY_Y_LOW_CODE				(KEY_Y_CAP_CODE + 32)
# define KEY_Y_LENGTH				80
# define KEY_Y_WIDTH					50
# define KEY_Y_POS_X					(KEY_T_POS_X + KEY_T_LENGTH)
# define KEY_Y_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_U						(GUI_ID_USER + 13)
# define KEY_U_CAP_CODE				85
# define KEY_U_LOW_CODE				(KEY_U_CAP_CODE + 32)
# define KEY_U_LENGTH				80
# define KEY_U_WIDTH					50
# define KEY_U_POS_X					(KEY_Y_POS_X + KEY_Y_LENGTH)
# define KEY_U_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_I						(GUI_ID_USER + 14)
# define KEY_I_CAP_CODE				73
# define KEY_I_LOW_CODE				(KEY_I_CAP_CODE + 32)
# define KEY_I_LENGTH				80
# define KEY_I_WIDTH					50
# define KEY_I_POS_X					(KEY_U_POS_X + KEY_U_LENGTH)
# define KEY_I_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_O						(GUI_ID_USER + 15)
# define KEY_O_CAP_CODE				79
# define KEY_O_LOW_CODE				(KEY_O_CAP_CODE + 32)
# define KEY_O_LENGTH				80
# define KEY_O_WIDTH					50
# define KEY_O_POS_X					(KEY_I_POS_X + KEY_I_LENGTH)
# define KEY_O_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_P						(GUI_ID_USER + 16)
# define KEY_P_CAP_CODE				80
# define KEY_P_LOW_CODE				(KEY_P_CAP_CODE + 32)
# define KEY_P_LENGTH				80
# define KEY_P_WIDTH					50
# define KEY_P_POS_X					(KEY_O_POS_X + KEY_P_LENGTH)
# define KEY_P_POS_Y					KEY_SECOND_LINE_POS_Y

# define KEY_A						(GUI_ID_USER + 17)
# define KEY_A_CAP_CODE				65
# define KEY_A_LOW_CODE				(KEY_A_CAP_CODE + 32)
# define KEY_A_LENGTH				80
# define KEY_A_WIDTH					50
# define KEY_A_POS_X					(40)
# define KEY_A_POS_Y					KEY_THIRD_LINE_POS_Y

# define KEY_S						(GUI_ID_USER + 18)
# define KEY_S_CAP_CODE				83
# define KEY_S_LOW_CODE				(KEY_S_CAP_CODE + 32)
# define KEY_S_LENGTH				80
# define KEY_S_WIDTH					50
# define KEY_S_POS_X					(KEY_A_POS_X + KEY_A_LENGTH)
# define KEY_S_POS_Y					KEY_THIRD_LINE_POS_Y

# define KEY_D						(GUI_ID_USER + 19)
# define KEY_D_CAP_CODE				68
# define KEY_D_LOW_CODE				(KEY_D_CAP_CODE + 32)
# define KEY_D_LENGTH				80
# define KEY_D_WIDTH					50
# define KEY_D_POS_X					(KEY_S_POS_X + KEY_S_LENGTH)
# define KEY_D_POS_Y					KEY_THIRD_LINE_POS_Y

# define KEY_F						(GUI_ID_USER + 20)
# define KEY_F_CAP_CODE				70
# define KEY_F_LOW_CODE				(KEY_F_CAP_CODE + 32)
# define KEY_F_LENGTH				80
# define KEY_F_WIDTH					50
# define KEY_F_POS_X					(KEY_D_POS_X + KEY_Q_LENGTH)
# define KEY_F_POS_Y					KEY_THIRD_LINE_POS_Y

# define KEY_G						(GUI_ID_USER + 21)
# define KEY_G_CAP_CODE				71
# define KEY_G_LOW_CODE				(KEY_G_CAP_CODE + 32)
# define KEY_G_LENGTH				80
# define KEY_G_WIDTH					50
# define KEY_G_POS_X					(KEY_F_POS_X + KEY_F_LENGTH)
# define KEY_G_POS_Y					KEY_THIRD_LINE_POS_Y

# define KEY_H						(GUI_ID_USER + 22)
# define KEY_H_CAP_CODE				72
# define KEY_H_LOW_CODE				(KEY_H_CAP_CODE + 32)
# define KEY_H_LENGTH				80
# define KEY_H_WIDTH					50
# define KEY_H_POS_X					(KEY_G_POS_X + KEY_G_LENGTH)
# define KEY_H_POS_Y					KEY_THIRD_LINE_POS_Y

# define KEY_J						(GUI_ID_USER + 23)
# define KEY_J_CAP_CODE				74
# define KEY_J_LOW_CODE				(KEY_J_CAP_CODE + 32)
# define KEY_J_LENGTH				80
# define KEY_J_WIDTH					50
# define KEY_J_POS_X					(KEY_H_POS_X + KEY_H_LENGTH)
# define KEY_J_POS_Y					KEY_THIRD_LINE_POS_Y

# define KEY_K						(GUI_ID_USER + 24)
# define KEY_K_CAP_CODE				75
# define KEY_K_LOW_CODE				(KEY_K_CAP_CODE + 32)
# define KEY_K_LENGTH				80
# define KEY_K_WIDTH					50
# define KEY_K_POS_X					(KEY_J_POS_X + KEY_J_LENGTH)
# define KEY_K_POS_Y					KEY_THIRD_LINE_POS_Y

# define KEY_L						(GUI_ID_USER + 25)
# define KEY_L_CAP_CODE				76
# define KEY_L_LOW_CODE				(KEY_L_CAP_CODE + 32)
# define KEY_L_LENGTH				80
# define KEY_L_WIDTH					50
# define KEY_L_POS_X					(KEY_K_POS_X + KEY_K_LENGTH)
# define KEY_L_POS_Y					KEY_THIRD_LINE_POS_Y

# define KEY_SHIFT					(GUI_ID_USER + 26)
# define KEY_SHIFT_CODE				255
# define KEY_SHIFT_LENGTH			120
# define KEY_SHIFT_WIDTH				50
# define KEY_SHIFT_POS_X				0
# define KEY_SHIFT_POS_Y				KEY_FOURTH_LINE_POS_Y

# define KEY_Z						(GUI_ID_USER + 27)
# define KEY_Z_CAP_CODE				90
# define KEY_Z_LOW_CODE				(KEY_Z_CAP_CODE + 32)
# define KEY_Z_LENGTH				80
# define KEY_Z_WIDTH					50
# define KEY_Z_POS_X					(KEY_SHIFT_POS_X + KEY_SHIFT_LENGTH)
# define KEY_Z_POS_Y					KEY_FOURTH_LINE_POS_Y

# define KEY_X						(GUI_ID_USER + 28)
# define KEY_X_CAP_CODE				88
# define KEY_X_LOW_CODE				(KEY_X_CAP_CODE + 32)
# define KEY_X_LENGTH				80
# define KEY_X_WIDTH					50
# define KEY_X_POS_X					(KEY_Z_POS_X + KEY_Z_LENGTH)
# define KEY_X_POS_Y					KEY_FOURTH_LINE_POS_Y

# define KEY_C						(GUI_ID_USER + 29)
# define KEY_C_CAP_CODE				67
# define KEY_C_LOW_CODE				(KEY_C_CAP_CODE + 32)
# define KEY_C_LENGTH				80
# define KEY_C_WIDTH					50
# define KEY_C_POS_X					(KEY_X_POS_X + KEY_X_LENGTH)
# define KEY_C_POS_Y					KEY_FOURTH_LINE_POS_Y

# define KEY_V						(GUI_ID_USER + 30)
# define KEY_V_CAP_CODE				86
# define KEY_V_LOW_CODE				(KEY_V_CAP_CODE + 32)
# define KEY_V_LENGTH				80
# define KEY_V_WIDTH					50
# define KEY_V_POS_X					(KEY_C_POS_X + KEY_C_LENGTH)
# define KEY_V_POS_Y					KEY_FOURTH_LINE_POS_Y

# define KEY_B						(GUI_ID_USER + 31)
# define KEY_B_CAP_CODE				66
# define KEY_B_LOW_CODE				(KEY_B_CAP_CODE + 32)
# define KEY_B_LENGTH				80
# define KEY_B_WIDTH					50
# define KEY_B_POS_X					(KEY_V_POS_X + KEY_V_LENGTH)
# define KEY_B_POS_Y					KEY_FOURTH_LINE_POS_Y

# define KEY_N						(GUI_ID_USER + 32)
# define KEY_N_CAP_CODE				78
# define KEY_N_LOW_CODE				(KEY_N_CAP_CODE + 32)
# define KEY_N_LENGTH				80
# define KEY_N_WIDTH					50
# define KEY_N_POS_X					(KEY_B_POS_X + KEY_B_LENGTH)
# define KEY_N_POS_Y					KEY_FOURTH_LINE_POS_Y

# define KEY_M						(GUI_ID_USER + 33)
# define KEY_M_CAP_CODE				77
# define KEY_M_LOW_CODE				(KEY_M_CAP_CODE + 32)
# define KEY_M_LENGTH				80
# define KEY_M_WIDTH					50
# define KEY_M_POS_X					(KEY_N_POS_X + KEY_N_LENGTH)
# define KEY_M_POS_Y					KEY_FOURTH_LINE_POS_Y

# define KEY_DEL						(GUI_ID_USER + 34)
# define KEY_DEL_CODE				8
# define KEY_DEL_LENGTH				120
# define KEY_DEL_WIDTH				50
# define KEY_DEL_POS_X				(KEY_M_POS_X + KEY_M_LENGTH)
# define KEY_DEL_POS_Y				KEY_FOURTH_LINE_POS_Y


# define KEY_NUM						(GUI_ID_USER + 35)
# define KEY_NUM_CODE				255
# define KEY_NUM_LENGTH				90
# define KEY_NUM_WIDTH				50
# define KEY_NUM_POS_X				0
# define KEY_NUM_POS_Y				KEY_FIFTH_LINE_POS_Y

# define KEY_CE					(GUI_ID_USER + 36)
# define KEY_CE_CODE				255
# define KEY_CE_LENGTH			90
# define KEY_CE_WIDTH			50
# define KEY_CE_POS_X			(KEY_NUM_POS_X + KEY_NUM_LENGTH + 4)
# define KEY_CE_POS_Y			KEY_FIFTH_LINE_POS_Y

# define KEY_COMMA					(GUI_ID_USER + 37)
# define KEY_COMMA_CODE				44
# define KEY_COMMA_LENGTH			90
# define KEY_COMMA_WIDTH				50
# define KEY_COMMA_POS_X				(KEY_CE_POS_X + KEY_CE_LENGTH + 4)
# define KEY_COMMA_POS_Y				KEY_FIFTH_LINE_POS_Y

# define KEY_SPACE					(GUI_ID_USER + 38)
# define KEY_SPACE_CODE				32
# define KEY_SPACE_LENGTH			240
# define KEY_SPACE_WIDTH				50
# define KEY_SPACE_POS_X				(KEY_COMMA_POS_X + KEY_COMMA_LENGTH + 4)
# define KEY_SPACE_POS_Y				KEY_FIFTH_LINE_POS_Y

# define KEY_DOT						(GUI_ID_USER + 39)
# define KEY_DOT_CODE				46
# define KEY_DOT_LENGTH				90
# define KEY_DOT_WIDTH				50
# define KEY_DOT_POS_X				(KEY_SPACE_POS_X + KEY_SPACE_LENGTH + 4)
# define KEY_DOT_POS_Y				KEY_FIFTH_LINE_POS_Y

# define KEY_SYMBOL					(GUI_ID_USER + 40)
# define KEY_SYMBOL_CODE				0
# define KEY_SYMBOL_LENGTH			90
# define KEY_SYMBOL_WIDTH			50
# define KEY_SYMBOL_POS_X			(KEY_DOT_POS_X + KEY_CE_LENGTH + 4)
# define KEY_SYMBOL_POS_Y			KEY_FIFTH_LINE_POS_Y

# define KEY_ENTER					(GUI_ID_USER + 41)
# define KEY_ENTER_CODE				13
# define KEY_ENTER_LENGTH			90
# define KEY_ENTER_WIDTH				50
# define KEY_ENTER_POS_X				(KEY_SYMBOL_POS_X + KEY_SYMBOL_LENGTH + 4)
# define KEY_ENTER_POS_Y				KEY_FIFTH_LINE_POS_Y




# define KEY_123		201		//
# define KEY_SYM		202		//
# define KEY_CH			203		//
# define KEY_SIGH		33		//!
# define KEY_D_QUOTES	34		//"
# define KEY_LEAD		35		//#
# define KEY_DOLLAR		36      //$
# define KEY_PER_SIGH	37		//%
# define KEY_AND		38     //&
# define KEY_S_QUOTES	39		//'
# define KEY_L_BRAC		40		//(
# define KEY_R_BRAC		41		//)
# define KEY_MULT		42		//*
# define KEY_PLUS		43		//+
# define KEY_PERIOD		44		//,
# define KEY_MINES		45		//-
# define KEY_EXCEPT		47		///

# define KEY_0			48			//0
# define KEY_1			49			//1
# define KEY_2			50			//2
# define KEY_3			51			//3
# define KEY_4			52			//4
# define KEY_5			53			//5
# define KEY_6			54			//6
# define KEY_7			55			//7
# define KEY_8			56			//8
# define KEY_9			57			//9

# define KEY_COLON		58			//:
# define KEY_SEMICOLON	59			//;
# define KEY_LOW_SIGH	60			//<
# define KEY_EQUAL		61			//=
# define KEY_BIG_SIGH	62			//>
# define KEY_QUE_SIGH	63			//?
# define KEY_AT			64		//@


# define KEY_M_L_BRAC	91		//[
# define KEY_R_SLASH	92		//\  
# define KEY_M_R_BRAC	93		// ]
# define KEY_POW		94		//^
# define KEY_LINE		95      //-
# define KEY_DAYTON		96		//?

# define KEY_L_L_BRAC	123     //{
# define KEY_V_LINE		124		//|
# define KEY_L_R_BRAC	125		//}
# define KEY_WAVY_LINE	126		//~



#define ID_KEY_PLUS (GUI_ID_USER + 42)
#define ID_BUTTON_1 (GUI_ID_USER + 43)
#define ID_BUTTON_2 (GUI_ID_USER + 44)
#define ID_BUTTON_3 (GUI_ID_USER + 45)
#define ID_BUTTON_DEL_NUM (GUI_ID_USER + 45)

#define ID_BUTTON_MINES (GUI_ID_USER + 47)
#define ID_BUTTON_4 (GUI_ID_USER + 48)
#define ID_BUTTON_5 (GUI_ID_USER + 49)
#define ID_BUTTON_6 (GUI_ID_USER + 50)
#define ID_BUTTON_SEARCH (GUI_ID_USER + 51)

#define ID_BUTTON_MULT (GUI_ID_USER + 52)
#define ID_BUTTON_7 (GUI_ID_USER + 53)
#define ID_BUTTON_8 (GUI_ID_USER + 54)
#define ID_BUTTON_9 (GUI_ID_USER + 55)
#define ID_BUTTON_SPACE_NUM (GUI_ID_USER + 56)

#define ID_BUTTON_EXCEPT (GUI_ID_USER + 57)
#define ID_BUTTON_DOT (GUI_ID_USER + 58)
#define ID_BUTTON_0 (GUI_ID_USER + 59)
#define ID_BUTTON_SYM_NUM (GUI_ID_USER + 60)
#define ID_BUTTON_BACK (GUI_ID_USER + 61)
#define ID_WINDOW_1 (GUI_ID_USER + 62)


extern WM_HWIN hKeyBoard_En;
extern WM_HWIN hKeyBoard_Num;

typedef void(*pCallBackFun)(WM_MESSAGE *pMsg);

void CreateNumBoard(void);
void CreateKeyBoard(void);
# endif
