# ifndef __KEY_BOARD_H
# define __KEY_BOARD_H
# include "GUI.h"
# include "WM.h"
# include "DIALOG.h" 

# define ID_WINDOW_0 (GUI_ID_USER + 0x25)

# define ID_BUTTON_Q (GUI_ID_USER + 1)
# define ID_BUTTON_W (GUI_ID_USER + 2)
# define ID_BUTTON_E (GUI_ID_USER + 3)
# define ID_BUTTON_R (GUI_ID_USER + 4)
# define ID_BUTTON_T (GUI_ID_USER + 5)
# define ID_BUTTON_Y (GUI_ID_USER + 6)
# define ID_BUTTON_U (GUI_ID_USER + 7)
# define ID_BUTTON_I (GUI_ID_USER + 8)
# define ID_BUTTON_O (GUI_ID_USER + 9)
# define ID_BUTTON_P (GUI_ID_USER + 10)
# define ID_BUTTON_A (GUI_ID_USER + 11)
# define ID_BUTTON_S (GUI_ID_USER + 12)
# define ID_BUTTON_D (GUI_ID_USER + 13)
# define ID_BUTTON_F (GUI_ID_USER + 14)
# define ID_BUTTON_G (GUI_ID_USER + 15)
# define ID_BUTTON_H (GUI_ID_USER + 16)
# define ID_BUTTON_J (GUI_ID_USER + 17)
# define ID_BUTTON_K (GUI_ID_USER + 18)
# define ID_BUTTON_L (GUI_ID_USER + 19)

# define ID_BUTTON_SHIFT (GUI_ID_USER + 20)
# define ID_BUTTON_Z (GUI_ID_USER + 21)
# define ID_BUTTON_X (GUI_ID_USER + 22)
# define ID_BUTTON_C (GUI_ID_USER + 23)
# define ID_BUTTON_V (GUI_ID_USER + 24)
# define ID_BUTTON_B (GUI_ID_USER + 25)
# define ID_BUTTON_N (GUI_ID_USER + 26)
# define ID_BUTTON_M (GUI_ID_USER + 27)
# define ID_BUTTON_DEL (GUI_ID_USER + 28)

# define ID_BUTTON_123 (GUI_ID_USER + 29)
# define ID_BUTTON_CH (GUI_ID_USER + 30)
# define ID_BUTTON_PERIOD (GUI_ID_USER + 31)
# define ID_BUTTON_SPACE (GUI_ID_USER + 32)
# define ID_BUTTON_COMMA (GUI_ID_USER + 33)
# define ID_BUTTON_SYMBOL (GUI_ID_USER + 34)
# define ID_BUTTON_ENTER (GUI_ID_USER + 35)







# define KEY_SHIFT		16		//shift
# define KEY_ENTER		13		//enter
# define KEY_DEL		8		//backspace


# define KEY_123		201		//
# define KEY_SYM		202		//
# define KEY_CH			203		//
# define KEY_SYMBOL		204		//

# define KEY_SPACE		32		//space
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
# define KEY_DOT		46		//.
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

# define KEY_A_CAP		65    //A
# define KEY_B_CAP		66		//B
# define KEY_C_CAP		67		//C
# define KEY_D_CAP		68		//D
# define KEY_E_CAP		69		//E
# define KEY_F_CAP		70		//F
# define KEY_G_CAP		71		//G
# define KEY_H_CAP		72		//H
# define KEY_I_CAP		73		//I
# define KEY_J_CAP		74		//J
# define KEY_K_CAP		75		//K
# define KEY_L_CAP		76		//L
# define KEY_M_CAP		77		//M
# define KEY_N_CAP		78		//N
# define KEY_O_CAP		79		//O
# define KEY_P_CAP		80		//P
# define KEY_Q_CAP		81		//Q
# define KEY_R_CAP		82		//R
# define KEY_S_CAP		83		//S
# define KEY_T_CAP		84		//T
# define KEY_U_CAP		85		//U
# define KEY_V_CAP		86		//V
# define KEY_W_CAP		87		//W
# define KEY_X_CAP		88		//X
# define KEY_Y_CAP		89		//Y
# define KEY_Z_CAP		90		//Z


# define KEY_M_L_BRAC	91		//[
# define KEY_R_SLASH	92		// \  
# define KEY_M_R_BRAC	93		// ]
# define KEY_POW		94		//^
# define KEY_LINE		95      //-
# define KEY_DAYTON		96		//¡¢

# define KEY_A_LOW		97		//a
# define KEY_B_LOW		98		//b
# define KEY_C_LOW		99		//c
# define KEY_D_LOW		100		//d
# define KEY_E_LOW		101		//e
# define KEY_F_LOW		102		//f
# define KEY_G_LOW		103		//g
# define KEY_H_LOW		104		//h
# define KEY_I_LOW		105		//i
# define KEY_J_LOW		106		//j
# define KEY_K_LOW		107		//k
# define KEY_L_LOW		108		//l
# define KEY_M_LOW		109		//m
# define KEY_N_LOW		110		//n
# define KEY_O_LOW		111		//o
# define KEY_P_LOW		112		//p
# define KEY_Q_LOW		113		//q
# define KEY_R_LOW		114		//r
# define KEY_S_LOW		115		//s
# define KEY_T_LOW		116		//t
# define KEY_U_LOW		117		//u
# define KEY_V_LOW		118		//v
# define KEY_W_LOW		119		//w
# define KEY_X_LOW		120		//x
# define KEY_Y_LOW		121		//y
# define KEY_Z_LOW		122		//z


# define KEY_L_L_BRAC	123     //{
# define KEY_V_LINE		124		//|
# define KEY_L_R_BRAC	125		//}
# define KEY_WAVY_LINE	126		//~



#define ID_BUTTON_PLUS (GUI_ID_USER + 36)
#define ID_BUTTON_1 (GUI_ID_USER + 37)
#define ID_BUTTON_2 (GUI_ID_USER + 38)
#define ID_BUTTON_3 (GUI_ID_USER + 39)
#define ID_BUTTON_DEL_NUM (GUI_ID_USER + 40)

#define ID_BUTTON_MINES (GUI_ID_USER + 41)
#define ID_BUTTON_4 (GUI_ID_USER + 42)
#define ID_BUTTON_5 (GUI_ID_USER + 43)
#define ID_BUTTON_6 (GUI_ID_USER + 44)
#define ID_BUTTON_SEARCH (GUI_ID_USER + 45)

#define ID_BUTTON_MULT (GUI_ID_USER + 46)
#define ID_BUTTON_7 (GUI_ID_USER + 47)
#define ID_BUTTON_8 (GUI_ID_USER + 48)
#define ID_BUTTON_9 (GUI_ID_USER + 49)
#define ID_BUTTON_SPACE_NUM (GUI_ID_USER + 50)

#define ID_BUTTON_EXCEPT (GUI_ID_USER + 51)
#define ID_BUTTON_DOT (GUI_ID_USER + 52)
#define ID_BUTTON_0 (GUI_ID_USER + 53)
#define ID_BUTTON_SYM_NUM (GUI_ID_USER + 54)
#define ID_BUTTON_BACK (GUI_ID_USER + 55)

#define ID_WINDOW_1 (GUI_ID_USER + 56)


extern WM_HWIN hKeyBoard_En;
extern WM_HWIN hKeyBoard_Num;

typedef (*pCallBackFun)(WM_MESSAGE *pMsg);

void CreateNumBoard(void);
void CreateKeyBoard(void);
# endif
