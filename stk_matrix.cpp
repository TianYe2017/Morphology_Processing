#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "stk_matrix.h"

STAGE1 STAGE_1[14][8];

void Generate_stage_1_filter(void) 
{   
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 1 S
	STAGE_1[0][0].filter_1[0] = 0;
	STAGE_1[0][0].filter_1[1] = 0;
	STAGE_1[0][0].filter_1[2] = 1;
	STAGE_1[0][0].filter_1[3] = 0;
	STAGE_1[0][0].filter_1[4] = 1;
	STAGE_1[0][0].filter_1[5] = 0;
	STAGE_1[0][0].filter_1[6] = 0;
	STAGE_1[0][0].filter_1[7] = 0;
	STAGE_1[0][0].filter_1[8] = 0;
	
	STAGE_1[0][1].filter_1[0] = 1;
	STAGE_1[0][1].filter_1[1] = 0;
	STAGE_1[0][1].filter_1[2] = 0;
	STAGE_1[0][1].filter_1[3] = 0;
	STAGE_1[0][1].filter_1[4] = 1;
	STAGE_1[0][1].filter_1[5] = 0;
	STAGE_1[0][1].filter_1[6] = 0;
	STAGE_1[0][1].filter_1[7] = 0;
	STAGE_1[0][1].filter_1[8] = 0;

	STAGE_1[0][2].filter_1[0] = 0;
	STAGE_1[0][2].filter_1[1] = 0;
	STAGE_1[0][2].filter_1[2] = 0;
	STAGE_1[0][2].filter_1[3] = 0;
	STAGE_1[0][2].filter_1[4] = 1;
	STAGE_1[0][2].filter_1[5] = 0;
	STAGE_1[0][2].filter_1[6] = 1;
	STAGE_1[0][2].filter_1[7] = 0;
	STAGE_1[0][2].filter_1[8] = 0;

	STAGE_1[0][3].filter_1[0] = 0;
	STAGE_1[0][3].filter_1[1] = 0;
	STAGE_1[0][3].filter_1[2] = 0;
	STAGE_1[0][3].filter_1[3] = 0;
	STAGE_1[0][3].filter_1[4] = 1;
	STAGE_1[0][3].filter_1[5] = 0;
	STAGE_1[0][3].filter_1[6] = 0;
	STAGE_1[0][3].filter_1[7] = 0;
	STAGE_1[0][3].filter_1[8] = 1;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 2 S
	STAGE_1[1][0].filter_1[0] = 0;
	STAGE_1[1][0].filter_1[1] = 0;
	STAGE_1[1][0].filter_1[2] = 0;
	STAGE_1[1][0].filter_1[3] = 0;
	STAGE_1[1][0].filter_1[4] = 1;
	STAGE_1[1][0].filter_1[5] = 1;
	STAGE_1[1][0].filter_1[6] = 0;
	STAGE_1[1][0].filter_1[7] = 0;
	STAGE_1[1][0].filter_1[8] = 0;

	STAGE_1[1][1].filter_1[0] = 0;
	STAGE_1[1][1].filter_1[1] = 1;
	STAGE_1[1][1].filter_1[2] = 0;
	STAGE_1[1][1].filter_1[3] = 0;
	STAGE_1[1][1].filter_1[4] = 1;
	STAGE_1[1][1].filter_1[5] = 0;
	STAGE_1[1][1].filter_1[6] = 0;
	STAGE_1[1][1].filter_1[7] = 0;
	STAGE_1[1][1].filter_1[8] = 0;

	STAGE_1[1][2].filter_1[0] = 0;
	STAGE_1[1][2].filter_1[1] = 0;
	STAGE_1[1][2].filter_1[2] = 0;
	STAGE_1[1][2].filter_1[3] = 1;
	STAGE_1[1][2].filter_1[4] = 1;
	STAGE_1[1][2].filter_1[5] = 0;
	STAGE_1[1][2].filter_1[6] = 0;
	STAGE_1[1][2].filter_1[7] = 0;
	STAGE_1[1][2].filter_1[8] = 0;

	STAGE_1[1][3].filter_1[0] = 0;
	STAGE_1[1][3].filter_1[1] = 0;
	STAGE_1[1][3].filter_1[2] = 0;
	STAGE_1[1][3].filter_1[3] = 0;
	STAGE_1[1][3].filter_1[4] = 1;
	STAGE_1[1][3].filter_1[5] = 0;
	STAGE_1[1][3].filter_1[6] = 0;
	STAGE_1[1][3].filter_1[7] = 1;
	STAGE_1[1][3].filter_1[8] = 0;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 3 S
	STAGE_1[2][0].filter_1[0] = 0;
	STAGE_1[2][0].filter_1[1] = 0;
	STAGE_1[2][0].filter_1[2] = 1;
	STAGE_1[2][0].filter_1[3] = 0;
	STAGE_1[2][0].filter_1[4] = 1;
	STAGE_1[2][0].filter_1[5] = 1;
	STAGE_1[2][0].filter_1[6] = 0;
	STAGE_1[2][0].filter_1[7] = 0;
	STAGE_1[2][0].filter_1[8] = 0;

	STAGE_1[2][1].filter_1[0] = 0;
	STAGE_1[2][1].filter_1[1] = 1;
	STAGE_1[2][1].filter_1[2] = 1;
	STAGE_1[2][1].filter_1[3] = 0;
	STAGE_1[2][1].filter_1[4] = 1;
	STAGE_1[2][1].filter_1[5] = 0;
	STAGE_1[2][1].filter_1[6] = 0;
	STAGE_1[2][1].filter_1[7] = 0;
	STAGE_1[2][1].filter_1[8] = 0;

	STAGE_1[2][2].filter_1[0] = 1;
	STAGE_1[2][2].filter_1[1] = 1;
	STAGE_1[2][2].filter_1[2] = 0;
	STAGE_1[2][2].filter_1[3] = 0;
	STAGE_1[2][2].filter_1[4] = 1;
	STAGE_1[2][2].filter_1[5] = 0;
	STAGE_1[2][2].filter_1[6] = 0;
	STAGE_1[2][2].filter_1[7] = 0;
	STAGE_1[2][2].filter_1[8] = 0;

	STAGE_1[2][3].filter_1[0] = 1;
	STAGE_1[2][3].filter_1[1] = 0;
	STAGE_1[2][3].filter_1[2] = 0;
	STAGE_1[2][3].filter_1[3] = 1;
	STAGE_1[2][3].filter_1[4] = 1;
	STAGE_1[2][3].filter_1[5] = 0;
	STAGE_1[2][3].filter_1[6] = 0;
	STAGE_1[2][3].filter_1[7] = 0;
	STAGE_1[2][3].filter_1[8] = 0;

	STAGE_1[2][4].filter_1[0] = 0;
	STAGE_1[2][4].filter_1[1] = 0;
	STAGE_1[2][4].filter_1[2] = 0;
	STAGE_1[2][4].filter_1[3] = 1;
	STAGE_1[2][4].filter_1[4] = 1;
	STAGE_1[2][4].filter_1[5] = 0;
	STAGE_1[2][4].filter_1[6] = 1;
	STAGE_1[2][4].filter_1[7] = 0;
	STAGE_1[2][4].filter_1[8] = 0;

	STAGE_1[2][5].filter_1[0] = 0;
	STAGE_1[2][5].filter_1[1] = 0;
	STAGE_1[2][5].filter_1[2] = 0;
	STAGE_1[2][5].filter_1[3] = 0;
	STAGE_1[2][5].filter_1[4] = 1;
	STAGE_1[2][5].filter_1[5] = 0;
	STAGE_1[2][5].filter_1[6] = 1;
	STAGE_1[2][5].filter_1[7] = 1;
	STAGE_1[2][5].filter_1[8] = 0;

	STAGE_1[2][6].filter_1[0] = 0;
	STAGE_1[2][6].filter_1[1] = 0;
	STAGE_1[2][6].filter_1[2] = 0;
	STAGE_1[2][6].filter_1[3] = 0;
	STAGE_1[2][6].filter_1[4] = 1;
	STAGE_1[2][6].filter_1[5] = 0;
	STAGE_1[2][6].filter_1[6] = 0;
	STAGE_1[2][6].filter_1[7] = 1;
	STAGE_1[2][6].filter_1[8] = 1;

	STAGE_1[2][7].filter_1[0] = 0;
	STAGE_1[2][7].filter_1[1] = 0;
	STAGE_1[2][7].filter_1[2] = 0;
	STAGE_1[2][7].filter_1[3] = 0;
	STAGE_1[2][7].filter_1[4] = 1;
	STAGE_1[2][7].filter_1[5] = 1;
	STAGE_1[2][7].filter_1[6] = 0;
	STAGE_1[2][7].filter_1[7] = 0;
	STAGE_1[2][7].filter_1[8] = 1;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 4 TK
	STAGE_1[3][0].filter_1[0] = 0;
	STAGE_1[3][0].filter_1[1] = 1;
	STAGE_1[3][0].filter_1[2] = 0;
	STAGE_1[3][0].filter_1[3] = 0;
	STAGE_1[3][0].filter_1[4] = 1;
	STAGE_1[3][0].filter_1[5] = 1;
	STAGE_1[3][0].filter_1[6] = 0;
	STAGE_1[3][0].filter_1[7] = 0;
	STAGE_1[3][0].filter_1[8] = 0;

	STAGE_1[3][1].filter_1[0] = 0;
	STAGE_1[3][1].filter_1[1] = 1;
	STAGE_1[3][1].filter_1[2] = 0;
	STAGE_1[3][1].filter_1[3] = 1;
	STAGE_1[3][1].filter_1[4] = 1;
	STAGE_1[3][1].filter_1[5] = 0;
	STAGE_1[3][1].filter_1[6] = 0;
	STAGE_1[3][1].filter_1[7] = 0;
	STAGE_1[3][1].filter_1[8] = 0;

	STAGE_1[3][2].filter_1[0] = 0;
	STAGE_1[3][2].filter_1[1] = 0;
	STAGE_1[3][2].filter_1[2] = 0;
	STAGE_1[3][2].filter_1[3] = 1;
	STAGE_1[3][2].filter_1[4] = 1;
	STAGE_1[3][2].filter_1[5] = 0;
	STAGE_1[3][2].filter_1[6] = 0;
	STAGE_1[3][2].filter_1[7] = 1;
	STAGE_1[3][2].filter_1[8] = 0;

	STAGE_1[3][3].filter_1[0] = 0;
	STAGE_1[3][3].filter_1[1] = 0;
	STAGE_1[3][3].filter_1[2] = 0;
	STAGE_1[3][3].filter_1[3] = 0;
	STAGE_1[3][3].filter_1[4] = 1;
	STAGE_1[3][3].filter_1[5] = 1;
	STAGE_1[3][3].filter_1[6] = 0;
	STAGE_1[3][3].filter_1[7] = 1;
	STAGE_1[3][3].filter_1[8] = 0;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 4 STK
	STAGE_1[4][0].filter_1[0] = 0;
	STAGE_1[4][0].filter_1[1] = 0;
	STAGE_1[4][0].filter_1[2] = 1;
	STAGE_1[4][0].filter_1[3] = 0;
	STAGE_1[4][0].filter_1[4] = 1;
	STAGE_1[4][0].filter_1[5] = 1;
	STAGE_1[4][0].filter_1[6] = 0;
	STAGE_1[4][0].filter_1[7] = 0;
	STAGE_1[4][0].filter_1[8] = 1;

	STAGE_1[4][1].filter_1[0] = 1;
	STAGE_1[4][1].filter_1[1] = 1;
	STAGE_1[4][1].filter_1[2] = 1;
	STAGE_1[4][1].filter_1[3] = 0;
	STAGE_1[4][1].filter_1[4] = 1;
	STAGE_1[4][1].filter_1[5] = 0;
	STAGE_1[4][1].filter_1[6] = 0;
	STAGE_1[4][1].filter_1[7] = 0;
	STAGE_1[4][1].filter_1[8] = 0;

	STAGE_1[4][2].filter_1[0] = 1;
	STAGE_1[4][2].filter_1[1] = 0;
	STAGE_1[4][2].filter_1[2] = 0;
	STAGE_1[4][2].filter_1[3] = 1;
	STAGE_1[4][2].filter_1[4] = 1;
	STAGE_1[4][2].filter_1[5] = 0;
	STAGE_1[4][2].filter_1[6] = 1;
	STAGE_1[4][2].filter_1[7] = 0;
	STAGE_1[4][2].filter_1[8] = 0;

	STAGE_1[4][3].filter_1[0] = 0;
	STAGE_1[4][3].filter_1[1] = 0;
	STAGE_1[4][3].filter_1[2] = 0;
	STAGE_1[4][3].filter_1[3] = 0;
	STAGE_1[4][3].filter_1[4] = 1;
	STAGE_1[4][3].filter_1[5] = 0;
	STAGE_1[4][3].filter_1[6] = 1;
	STAGE_1[4][3].filter_1[7] = 1;
	STAGE_1[4][3].filter_1[8] = 1;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 5 ST_1
	STAGE_1[5][0].filter_1[0] = 1;
	STAGE_1[5][0].filter_1[1] = 1;
	STAGE_1[5][0].filter_1[2] = 0;
	STAGE_1[5][0].filter_1[3] = 0;
	STAGE_1[5][0].filter_1[4] = 1;
	STAGE_1[5][0].filter_1[5] = 1;
	STAGE_1[5][0].filter_1[6] = 0;
	STAGE_1[5][0].filter_1[7] = 0;
	STAGE_1[5][0].filter_1[8] = 0;

	STAGE_1[5][1].filter_1[0] = 0;
	STAGE_1[5][1].filter_1[1] = 1;
	STAGE_1[5][1].filter_1[2] = 0;
	STAGE_1[5][1].filter_1[3] = 0;
	STAGE_1[5][1].filter_1[4] = 1;
	STAGE_1[5][1].filter_1[5] = 1;
	STAGE_1[5][1].filter_1[6] = 0;
	STAGE_1[5][1].filter_1[7] = 0;
	STAGE_1[5][1].filter_1[8] = 1;

	STAGE_1[5][2].filter_1[0] = 0;
	STAGE_1[5][2].filter_1[1] = 1;
	STAGE_1[5][2].filter_1[2] = 1;
	STAGE_1[5][2].filter_1[3] = 0;
	STAGE_1[5][2].filter_1[4] = 1;
	STAGE_1[5][2].filter_1[5] = 1;
	STAGE_1[5][2].filter_1[6] = 0;
	STAGE_1[5][2].filter_1[7] = 0;
	STAGE_1[5][2].filter_1[8] = 0;

	STAGE_1[5][3].filter_1[0] = 0;
	STAGE_1[5][3].filter_1[1] = 0;
	STAGE_1[5][3].filter_1[2] = 1;
	STAGE_1[5][3].filter_1[3] = 0;
	STAGE_1[5][3].filter_1[4] = 1;
	STAGE_1[5][3].filter_1[5] = 1;
	STAGE_1[5][3].filter_1[6] = 0;
	STAGE_1[5][3].filter_1[7] = 1;
	STAGE_1[5][3].filter_1[8] = 0;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 5 ST_2
	STAGE_1[6][0].filter_1[0] = 0;
	STAGE_1[6][0].filter_1[1] = 1;
	STAGE_1[6][0].filter_1[2] = 1;
	STAGE_1[6][0].filter_1[3] = 0;
	STAGE_1[6][0].filter_1[4] = 1;
	STAGE_1[6][0].filter_1[5] = 1;
	STAGE_1[6][0].filter_1[6] = 0;
	STAGE_1[6][0].filter_1[7] = 0;
	STAGE_1[6][0].filter_1[8] = 0;

	STAGE_1[6][1].filter_1[0] = 1;
	STAGE_1[6][1].filter_1[1] = 1;
	STAGE_1[6][1].filter_1[2] = 0;
	STAGE_1[6][1].filter_1[3] = 1;
	STAGE_1[6][1].filter_1[4] = 1;
	STAGE_1[6][1].filter_1[5] = 0;
	STAGE_1[6][1].filter_1[6] = 0;
	STAGE_1[6][1].filter_1[7] = 0;
	STAGE_1[6][1].filter_1[8] = 0;

	STAGE_1[6][2].filter_1[0] = 0;
	STAGE_1[6][2].filter_1[1] = 0;
	STAGE_1[6][2].filter_1[2] = 0;
	STAGE_1[6][2].filter_1[3] = 1;
	STAGE_1[6][2].filter_1[4] = 1;
	STAGE_1[6][2].filter_1[5] = 0;
	STAGE_1[6][2].filter_1[6] = 1;
	STAGE_1[6][2].filter_1[7] = 1;
	STAGE_1[6][2].filter_1[8] = 0;

	STAGE_1[6][3].filter_1[0] = 0;
	STAGE_1[6][3].filter_1[1] = 0;
	STAGE_1[6][3].filter_1[2] = 0;
	STAGE_1[6][3].filter_1[3] = 0;
	STAGE_1[6][3].filter_1[4] = 1;
	STAGE_1[6][3].filter_1[5] = 1;
	STAGE_1[6][3].filter_1[6] = 0;
	STAGE_1[6][3].filter_1[7] = 1;
	STAGE_1[6][3].filter_1[8] = 1;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 6 ST
	STAGE_1[7][0].filter_1[0] = 1;
	STAGE_1[7][0].filter_1[1] = 1;
	STAGE_1[7][0].filter_1[2] = 0;
	STAGE_1[7][0].filter_1[3] = 0;
	STAGE_1[7][0].filter_1[4] = 1;
	STAGE_1[7][0].filter_1[5] = 1;
	STAGE_1[7][0].filter_1[6] = 0;
	STAGE_1[7][0].filter_1[7] = 0;
	STAGE_1[7][0].filter_1[8] = 1;

	STAGE_1[7][1].filter_1[0] = 0;
	STAGE_1[7][1].filter_1[1] = 1;
	STAGE_1[7][1].filter_1[2] = 1;
	STAGE_1[7][1].filter_1[3] = 1;
	STAGE_1[7][1].filter_1[4] = 1;
	STAGE_1[7][1].filter_1[5] = 0;
	STAGE_1[7][1].filter_1[6] = 1;
	STAGE_1[7][1].filter_1[7] = 0;
	STAGE_1[7][1].filter_1[8] = 0;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 6 STK
	STAGE_1[8][0].filter_1[0] = 1;
	STAGE_1[8][0].filter_1[1] = 1;
	STAGE_1[8][0].filter_1[2] = 1;
	STAGE_1[8][0].filter_1[3] = 0;
	STAGE_1[8][0].filter_1[4] = 1;
	STAGE_1[8][0].filter_1[5] = 1;
	STAGE_1[8][0].filter_1[6] = 0;
	STAGE_1[8][0].filter_1[7] = 0;
	STAGE_1[8][0].filter_1[8] = 0;

	STAGE_1[8][1].filter_1[0] = 0;
	STAGE_1[8][1].filter_1[1] = 1;
	STAGE_1[8][1].filter_1[2] = 1;
	STAGE_1[8][1].filter_1[3] = 0;
	STAGE_1[8][1].filter_1[4] = 1;
	STAGE_1[8][1].filter_1[5] = 1;
	STAGE_1[8][1].filter_1[6] = 0;
	STAGE_1[8][1].filter_1[7] = 0;
	STAGE_1[8][1].filter_1[8] = 1;

	STAGE_1[8][2].filter_1[0] = 1;
	STAGE_1[8][2].filter_1[1] = 1;
	STAGE_1[8][2].filter_1[2] = 1;
	STAGE_1[8][2].filter_1[3] = 1;
	STAGE_1[8][2].filter_1[4] = 1;
	STAGE_1[8][2].filter_1[5] = 0;
	STAGE_1[8][2].filter_1[6] = 0;
	STAGE_1[8][2].filter_1[7] = 0;
	STAGE_1[8][2].filter_1[8] = 0;

	STAGE_1[8][3].filter_1[0] = 1;
	STAGE_1[8][3].filter_1[1] = 1;
	STAGE_1[8][3].filter_1[2] = 0;
	STAGE_1[8][3].filter_1[3] = 1;
	STAGE_1[8][3].filter_1[4] = 1;
	STAGE_1[8][3].filter_1[5] = 0;
	STAGE_1[8][3].filter_1[6] = 1;
	STAGE_1[8][3].filter_1[7] = 0;
	STAGE_1[8][3].filter_1[8] = 0;

	STAGE_1[8][4].filter_1[0] = 1;
	STAGE_1[8][4].filter_1[1] = 0;
	STAGE_1[8][4].filter_1[2] = 0;
	STAGE_1[8][4].filter_1[3] = 1;
	STAGE_1[8][4].filter_1[4] = 1;
	STAGE_1[8][4].filter_1[5] = 0;
	STAGE_1[8][4].filter_1[6] = 1;
	STAGE_1[8][4].filter_1[7] = 1;
	STAGE_1[8][4].filter_1[8] = 0;

	STAGE_1[8][5].filter_1[0] = 0;
	STAGE_1[8][5].filter_1[1] = 0;
	STAGE_1[8][5].filter_1[2] = 0;
	STAGE_1[8][5].filter_1[3] = 1;
	STAGE_1[8][5].filter_1[4] = 1;
	STAGE_1[8][5].filter_1[5] = 0;
	STAGE_1[8][5].filter_1[6] = 1;
	STAGE_1[8][5].filter_1[7] = 1;
	STAGE_1[8][5].filter_1[8] = 1;

	STAGE_1[8][6].filter_1[0] = 0;
	STAGE_1[8][6].filter_1[1] = 0;
	STAGE_1[8][6].filter_1[2] = 0;
	STAGE_1[8][6].filter_1[3] = 0;
	STAGE_1[8][6].filter_1[4] = 1;
	STAGE_1[8][6].filter_1[5] = 1;
	STAGE_1[8][6].filter_1[6] = 1;
	STAGE_1[8][6].filter_1[7] = 1;
	STAGE_1[8][6].filter_1[8] = 1;

	STAGE_1[8][7].filter_1[0] = 0;
	STAGE_1[8][7].filter_1[1] = 0;
	STAGE_1[8][7].filter_1[2] = 1;
	STAGE_1[8][7].filter_1[3] = 0;
	STAGE_1[8][7].filter_1[4] = 1;
	STAGE_1[8][7].filter_1[5] = 1;
	STAGE_1[8][7].filter_1[6] = 0;
	STAGE_1[8][7].filter_1[7] = 1;
	STAGE_1[8][7].filter_1[8] = 1;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 7 STK
	STAGE_1[9][0].filter_1[0] = 1;
	STAGE_1[9][0].filter_1[1] = 1;
	STAGE_1[9][0].filter_1[2] = 1;
	STAGE_1[9][0].filter_1[3] = 0;
	STAGE_1[9][0].filter_1[4] = 1;
	STAGE_1[9][0].filter_1[5] = 1;
	STAGE_1[9][0].filter_1[6] = 0;
	STAGE_1[9][0].filter_1[7] = 0;
	STAGE_1[9][0].filter_1[8] = 1;

	STAGE_1[9][1].filter_1[0] = 1;
	STAGE_1[9][1].filter_1[1] = 1;
	STAGE_1[9][1].filter_1[2] = 1;
	STAGE_1[9][1].filter_1[3] = 1;
	STAGE_1[9][1].filter_1[4] = 1;
	STAGE_1[9][1].filter_1[5] = 0;
	STAGE_1[9][1].filter_1[6] = 1;
	STAGE_1[9][1].filter_1[7] = 0;
	STAGE_1[9][1].filter_1[8] = 0;

	STAGE_1[9][2].filter_1[0] = 1;
	STAGE_1[9][2].filter_1[1] = 0;
	STAGE_1[9][2].filter_1[2] = 0;
	STAGE_1[9][2].filter_1[3] = 1;
	STAGE_1[9][2].filter_1[4] = 1;
	STAGE_1[9][2].filter_1[5] = 0;
	STAGE_1[9][2].filter_1[6] = 1;
	STAGE_1[9][2].filter_1[7] = 1;
	STAGE_1[9][2].filter_1[8] = 1;

	STAGE_1[9][3].filter_1[0] = 0;
	STAGE_1[9][3].filter_1[1] = 0;
	STAGE_1[9][3].filter_1[2] = 1;
	STAGE_1[9][3].filter_1[3] = 0;
	STAGE_1[9][3].filter_1[4] = 1;
	STAGE_1[9][3].filter_1[5] = 1;
	STAGE_1[9][3].filter_1[6] = 1;
	STAGE_1[9][3].filter_1[7] = 1;
	STAGE_1[9][3].filter_1[8] = 1;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 8 STK
	STAGE_1[10][0].filter_1[0] = 0;
	STAGE_1[10][0].filter_1[1] = 1;
	STAGE_1[10][0].filter_1[2] = 1;
	STAGE_1[10][0].filter_1[3] = 0;
	STAGE_1[10][0].filter_1[4] = 1;
	STAGE_1[10][0].filter_1[5] = 1;
	STAGE_1[10][0].filter_1[6] = 0;
	STAGE_1[10][0].filter_1[7] = 1;
	STAGE_1[10][0].filter_1[8] = 1;

	STAGE_1[10][1].filter_1[0] = 1;
	STAGE_1[10][1].filter_1[1] = 1;
	STAGE_1[10][1].filter_1[2] = 1;
	STAGE_1[10][1].filter_1[3] = 1;
	STAGE_1[10][1].filter_1[4] = 1;
	STAGE_1[10][1].filter_1[5] = 1;
	STAGE_1[10][1].filter_1[6] = 0;
	STAGE_1[10][1].filter_1[7] = 0;
	STAGE_1[10][1].filter_1[8] = 0;

	STAGE_1[10][2].filter_1[0] = 1;
	STAGE_1[10][2].filter_1[1] = 1;
	STAGE_1[10][2].filter_1[2] = 0;
	STAGE_1[10][2].filter_1[3] = 1;
	STAGE_1[10][2].filter_1[4] = 1;
	STAGE_1[10][2].filter_1[5] = 0;
	STAGE_1[10][2].filter_1[6] = 1;
	STAGE_1[10][2].filter_1[7] = 1;
	STAGE_1[10][2].filter_1[8] = 0;

	STAGE_1[10][3].filter_1[0] = 0;
	STAGE_1[10][3].filter_1[1] = 0;
	STAGE_1[10][3].filter_1[2] = 0;
	STAGE_1[10][3].filter_1[3] = 1;
	STAGE_1[10][3].filter_1[4] = 1;
	STAGE_1[10][3].filter_1[5] = 1;
	STAGE_1[10][3].filter_1[6] = 1;
	STAGE_1[10][3].filter_1[7] = 1;
	STAGE_1[10][3].filter_1[8] = 1;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 9 STK
	STAGE_1[11][0].filter_1[0] = 1;
	STAGE_1[11][0].filter_1[1] = 1;
	STAGE_1[11][0].filter_1[2] = 1;
	STAGE_1[11][0].filter_1[3] = 0;
	STAGE_1[11][0].filter_1[4] = 1;
	STAGE_1[11][0].filter_1[5] = 1;
	STAGE_1[11][0].filter_1[6] = 0;
	STAGE_1[11][0].filter_1[7] = 1;
	STAGE_1[11][0].filter_1[8] = 1;

	STAGE_1[11][1].filter_1[0] = 0;
	STAGE_1[11][1].filter_1[1] = 1;
	STAGE_1[11][1].filter_1[2] = 1;
	STAGE_1[11][1].filter_1[3] = 0;
	STAGE_1[11][1].filter_1[4] = 1;
	STAGE_1[11][1].filter_1[5] = 1;
	STAGE_1[11][1].filter_1[6] = 1;
	STAGE_1[11][1].filter_1[7] = 1;
	STAGE_1[11][1].filter_1[8] = 1;

	STAGE_1[11][2].filter_1[0] = 1;
	STAGE_1[11][2].filter_1[1] = 1;
	STAGE_1[11][2].filter_1[2] = 1;
	STAGE_1[11][2].filter_1[3] = 1;
	STAGE_1[11][2].filter_1[4] = 1;
	STAGE_1[11][2].filter_1[5] = 1;
	STAGE_1[11][2].filter_1[6] = 1;
	STAGE_1[11][2].filter_1[7] = 0;
	STAGE_1[11][2].filter_1[8] = 0;

	STAGE_1[11][3].filter_1[0] = 1;
	STAGE_1[11][3].filter_1[1] = 1;
	STAGE_1[11][3].filter_1[2] = 1;
	STAGE_1[11][3].filter_1[3] = 1;
	STAGE_1[11][3].filter_1[4] = 1;
	STAGE_1[11][3].filter_1[5] = 1;
	STAGE_1[11][3].filter_1[6] = 0;
	STAGE_1[11][3].filter_1[7] = 0;
	STAGE_1[11][3].filter_1[8] = 1;

	STAGE_1[11][4].filter_1[0] = 1;
	STAGE_1[11][4].filter_1[1] = 1;
	STAGE_1[11][4].filter_1[2] = 1;
	STAGE_1[11][4].filter_1[3] = 1;
	STAGE_1[11][4].filter_1[4] = 1;
	STAGE_1[11][4].filter_1[5] = 0;
	STAGE_1[11][4].filter_1[6] = 1;
	STAGE_1[11][4].filter_1[7] = 1;
	STAGE_1[11][4].filter_1[8] = 0;

	STAGE_1[11][5].filter_1[0] = 1;
	STAGE_1[11][5].filter_1[1] = 1;
	STAGE_1[11][5].filter_1[2] = 0;
	STAGE_1[11][5].filter_1[3] = 1;
	STAGE_1[11][5].filter_1[4] = 1;
	STAGE_1[11][5].filter_1[5] = 0;
	STAGE_1[11][5].filter_1[6] = 1;
	STAGE_1[11][5].filter_1[7] = 1;
	STAGE_1[11][5].filter_1[8] = 1;

	STAGE_1[11][6].filter_1[0] = 1;
	STAGE_1[11][6].filter_1[1] = 0;
	STAGE_1[11][6].filter_1[2] = 0;
	STAGE_1[11][6].filter_1[3] = 1;
	STAGE_1[11][6].filter_1[4] = 1;
	STAGE_1[11][6].filter_1[5] = 1;
	STAGE_1[11][6].filter_1[6] = 1;
	STAGE_1[11][6].filter_1[7] = 1;
	STAGE_1[11][6].filter_1[8] = 1;

	STAGE_1[11][7].filter_1[0] = 0;
	STAGE_1[11][7].filter_1[1] = 0;
	STAGE_1[11][7].filter_1[2] = 1;
	STAGE_1[11][7].filter_1[3] = 1;
	STAGE_1[11][7].filter_1[4] = 1;
	STAGE_1[11][7].filter_1[5] = 1;
	STAGE_1[11][7].filter_1[6] = 1;
	STAGE_1[11][7].filter_1[7] = 1;
	STAGE_1[11][7].filter_1[8] = 1;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 10 STK
	STAGE_1[12][0].filter_1[0] = 1;
	STAGE_1[12][0].filter_1[1] = 1;
	STAGE_1[12][0].filter_1[2] = 1;
	STAGE_1[12][0].filter_1[3] = 0;
	STAGE_1[12][0].filter_1[4] = 1;
	STAGE_1[12][0].filter_1[5] = 1;
	STAGE_1[12][0].filter_1[6] = 1;
	STAGE_1[12][0].filter_1[7] = 1;
	STAGE_1[12][0].filter_1[8] = 1;

	STAGE_1[12][1].filter_1[0] = 1;
	STAGE_1[12][1].filter_1[1] = 1;
	STAGE_1[12][1].filter_1[2] = 1;
	STAGE_1[12][1].filter_1[3] = 1;
	STAGE_1[12][1].filter_1[4] = 1;
	STAGE_1[12][1].filter_1[5] = 1;
	STAGE_1[12][1].filter_1[6] = 1;
	STAGE_1[12][1].filter_1[7] = 0;
	STAGE_1[12][1].filter_1[8] = 1;

	STAGE_1[12][2].filter_1[0] = 1;
	STAGE_1[12][2].filter_1[1] = 1;
	STAGE_1[12][2].filter_1[2] = 1;
	STAGE_1[12][2].filter_1[3] = 1;
	STAGE_1[12][2].filter_1[4] = 1;
	STAGE_1[12][2].filter_1[5] = 0;
	STAGE_1[12][2].filter_1[6] = 1;
	STAGE_1[12][2].filter_1[7] = 1;
	STAGE_1[12][2].filter_1[8] = 1;

	STAGE_1[12][3].filter_1[0] = 1;
	STAGE_1[12][3].filter_1[1] = 0;
	STAGE_1[12][3].filter_1[2] = 1;
	STAGE_1[12][3].filter_1[3] = 1;
	STAGE_1[12][3].filter_1[4] = 1;
	STAGE_1[12][3].filter_1[5] = 1;
	STAGE_1[12][3].filter_1[6] = 1;
	STAGE_1[12][3].filter_1[7] = 1;
	STAGE_1[12][3].filter_1[8] = 1;
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//bond = 11 K
	STAGE_1[13][0].filter_1[0] = 1;
	STAGE_1[13][0].filter_1[1] = 1;
	STAGE_1[13][0].filter_1[2] = 1;
	STAGE_1[13][0].filter_1[3] = 1;
	STAGE_1[13][0].filter_1[4] = 1;
	STAGE_1[13][0].filter_1[5] = 1;
	STAGE_1[13][0].filter_1[6] = 0;
	STAGE_1[13][0].filter_1[7] = 1;
	STAGE_1[13][0].filter_1[8] = 1;

	STAGE_1[13][1].filter_1[0] = 1;
	STAGE_1[13][1].filter_1[1] = 1;
	STAGE_1[13][1].filter_1[2] = 1;
	STAGE_1[13][1].filter_1[3] = 1;
	STAGE_1[13][1].filter_1[4] = 1;
	STAGE_1[13][1].filter_1[5] = 1;
	STAGE_1[13][1].filter_1[6] = 1;
	STAGE_1[13][1].filter_1[7] = 1;
	STAGE_1[13][1].filter_1[8] = 0;

	STAGE_1[13][2].filter_1[0] = 1;
	STAGE_1[13][2].filter_1[1] = 1;
	STAGE_1[13][2].filter_1[2] = 0;
	STAGE_1[13][2].filter_1[3] = 1;
	STAGE_1[13][2].filter_1[4] = 1;
	STAGE_1[13][2].filter_1[5] = 1;
	STAGE_1[13][2].filter_1[6] = 1;
	STAGE_1[13][2].filter_1[7] = 1;
	STAGE_1[13][2].filter_1[8] = 1;

	STAGE_1[13][3].filter_1[0] = 0;
	STAGE_1[13][3].filter_1[1] = 1;
	STAGE_1[13][3].filter_1[2] = 1;
	STAGE_1[13][3].filter_1[3] = 1;
	STAGE_1[13][3].filter_1[4] = 1;
	STAGE_1[13][3].filter_1[5] = 1;
	STAGE_1[13][3].filter_1[6] = 1;
	STAGE_1[13][3].filter_1[7] = 1;
	STAGE_1[13][3].filter_1[8] = 1;

	/*int sum = 0;

	for (int i = 0; i <= 13; i++) 
	{
		for (int j = 0; j <= 7; j++) 
		{
			sum = STAGE_1[i][j].filter_1[0] + 2 * STAGE_1[i][j].filter_1[1] + STAGE_1[i][j].filter_1[2] + 2 * STAGE_1[i][j].filter_1[3] + 2 * STAGE_1[i][j].filter_1[5] + STAGE_1[i][j].filter_1[6] + 2 * STAGE_1[i][j].filter_1[7] + STAGE_1[i][j].filter_1[8];
			printf("  %d", sum);
			sum = 0;
		}
		printf("\n");
	}*/
}


bool Is_spur_st(int array_in[]) 
{    
	bool out = false;
	if (array_in[2] == 1 & array_in[4] == 1) 
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
		  if (array_in[i] == 0)
		  {
			num_of_zero++;
	      }
		}
		if (num_of_zero == 7) 
		{
			out = true;
			//printf("\n hit");
		}
	}
    if (array_in[0] == 1 & array_in[4] == 1) 
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 7)
		{
			out = true;
			//printf("\n hit");
		}	
	}
	return out;

}


bool Is_4_connection_st(int array_in[]) 
{
	bool out = false;
	if (array_in[4] == 1 & array_in[7] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 7)
		{
			out = true;
			//printf("\n hit");
		}
	}
	if (array_in[4] == 1 & array_in[5] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 7)
		{
			out = true;
			//printf("\n hit");
		}
	}
	return out;
}


bool Is_l_cluster_st(int array_in[]) 
{
	bool out = false;
	if (array_in[2] == 1 &array_in[4] == 1 & array_in[5] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
			//printf("\n hit");
		}
	}
	if (array_in[1] == 1 & array_in[2] == 1 & array_in[4] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
			//printf("\n hit");
		}
	}
	if (array_in[0] == 1 & array_in[1] == 1 & array_in[4] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
			//printf("\n hit");
		}
	}
	if (array_in[0] == 1 & array_in[3] == 1 & array_in[4] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
			//printf("\n hit");
		}
	}
	if (array_in[3] == 1 & array_in[4] == 1 & array_in[6] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
			//printf("\n hit");
		}
	}
	if (array_in[4] == 1 & array_in[6] == 1 & array_in[7] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
		}
	}
	if (array_in[4] == 1 & array_in[7] == 1 & array_in[8] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
		}
	}
	if (array_in[4] == 1 & array_in[5] == 1 & array_in[8] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
		}
	}
	return out;

}


bool Is_4_connected_offset_st(int array_in[]) 
{
	bool out = false;
	if (array_in[1] == 1 & array_in[2] == 1 & array_in[3] == 1 & array_in[4] == 1) 
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 5)
		{
			out = true;
		}	
	}
	if (array_in[0] == 1 & array_in[1] == 1 & array_in[4] == 1 & array_in[5] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 5)
		{
			out = true;
		}
	}
	if (array_in[1] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[8] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 5)
		{
			out = true;
		}
	}
	if (array_in[2] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 5)
		{
			out = true;
		}
	}
	return out;

}


bool Is_spur_corner_cluster_st(int array_in[]) 
{   
	bool out = false;
	if (array_in[2] == 1 & array_in[4] == 1 & array_in[6] == 1 & array_in[0] == 0 & array_in[3] == 0 & array_in[7] == 0 & array_in[8] == 0)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 5)
		{
			out = true;
		}
	}
	if (array_in[0] == 1 & array_in[4] == 1 & array_in[8] == 1 & array_in[2] == 0 & array_in[5] == 0 & array_in[6] == 0 & array_in[7] == 0)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 5)
		{
			out = true;
		}
	}
	if (array_in[2] == 1 & array_in[4] == 1 & array_in[6] == 1 & array_in[0] == 0 & array_in[1] == 0 & array_in[5] == 0 & array_in[8] == 0)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 5)
		{
			out = true;
		}
	}
	if (array_in[0] == 1 & array_in[4] == 1 & array_in[8] == 1 & array_in[1] == 0 & array_in[2] == 0 & array_in[3] == 0 & array_in[6] == 0)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 5)
		{
			out = true;
		}
	}
	return out;

}


bool Is_corner_cluster_st(int array_in[]) 
{   
	bool out = false;
	if (array_in[0] == 1 & array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1) 
	{
		out = true;	
	}
	return out;

}


bool Is_tee_branch_st(int array_in[]) 
{   
	bool out = false;
	if (array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[2] == 0 & array_in[7] == 0 & array_in[8] == 0) 
	{
		out = true;
	}
	if (array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[0] == 0 & array_in[6] == 0 & array_in[7] == 0)
	{
		out = true;
	}
	if (array_in[3] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1 & array_in[0] == 0 & array_in[1] == 0 & array_in[6] == 0)
	{
		out = true;
	}
	if (array_in[3] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1 & array_in[1] == 0 & array_in[2] == 0 & array_in[8] == 0)
	{
		out = true;
	}
	if (array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[7] == 1 & array_in[5] == 0 & array_in[6] == 0 & array_in[8] == 0)
	{
		out = true;
	}
	if (array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[7] == 1 & array_in[0] == 0 & array_in[2] == 0 & array_in[5] == 0)
	{
		out = true;
	}
	if (array_in[1] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1 & array_in[0] == 0 & array_in[2] == 0 & array_in[3] == 0)
	{
		out = true;
	}
	if (array_in[1] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1 & array_in[3] == 0 & array_in[6] == 0 & array_in[8] == 0)
	{
		out = true;
	}
	return out;

}


bool Is_vee_branch_st(int array_in[]) 
{
	bool out = false;
	if (array_in[0] == 1 & array_in[2] == 1 & array_in[4] == 1)
	{
		if (array_in[6] == 1 & array_in[7] == 0 & array_in [8] == 0) 
		{
		    out = true;						
		}
		if (array_in[6] == 0 & array_in[7] == 1 & array_in[8] == 0) 
		{
		    out = true;					
		}
		if (array_in[6] == 0 & array_in[7] == 0 & array_in[8] == 1) 
		{
			out = true;
	    }				
	}
	if (array_in[0] == 1 & array_in[4] == 1 & array_in[6] == 1)
	{
		if (array_in[2] == 1 & array_in[5] == 0 & array_in[8] == 0)
		{
			out = true;
		}
		if (array_in[2] == 0 & array_in[5] == 1 & array_in[8] == 0)
		{
			out = true;
		}
		if (array_in[2] == 0 & array_in[5] == 0 & array_in[8] == 1)
		{
			out = true;
		}
	}
	if (array_in[4] == 1 & array_in[6] == 1 & array_in[8] == 1)
	{
		if (array_in[0] == 1 & array_in[1] == 0 & array_in[2] == 0) 
		{
		    out = true;						
		}
		if (array_in[0] == 0 & array_in[1] == 1 & array_in[2] == 0) 
		{
		    out = true;					
		}
		if (array_in[0] == 0 & array_in[1] == 0 & array_in[2] == 1) 
		{
			out = true;
	    }				
	}
	if (array_in[2] == 1 & array_in[4] == 1 & array_in[8] == 1)
	{
		if (array_in[0] == 1 & array_in[3] == 0 & array_in[6] == 0)
		{
			out = true;
		}
		if (array_in[0] == 0 & array_in[3] == 1 & array_in[6] == 0)
		{
			out = true;
		}
		if (array_in[0] == 0 & array_in[3] == 0 & array_in[6] == 1)
		{
			out = true;
		}
	}
	return out;

}


bool Is_diagonal_st(int array_in[])
{   
	bool out = false;
	if (array_in[1] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[6] == 1 & array_in[2] == 0 & array_in[3] == 0 & array_in[7] == 0) 
	{
		out = true;
	}
	if (array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[8] == 1 & array_in[0] == 0 & array_in[5] == 0 & array_in[7] == 0)
	{
		out = true;
	}
	if (array_in[2] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[7] == 1 & array_in[1] == 0 & array_in[5] == 0 & array_in[6] == 0)
	{
		out = true;
	}
	if (array_in[0] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1 & array_in[1] == 0 & array_in[3] == 0 & array_in[8] == 0)
	{
		out = true;
	}
	return out;

}


bool Is_spur_k(int array_in[]) 
{   
	bool out = false;
	if (array_in[4] == 1 & array_in[8] == 1) 
	{
		if (array_in[2] == 1 & array_in[4] == 1)
		{
			int num_of_zero = 0;
			for (int i = 0; i < 9; i++)
			{
				if (array_in[i] == 0)
				{
					num_of_zero++;
				}
			}
			if (num_of_zero == 7)
			{
				out = true;
			}
		}	
	}
	if (array_in[4] == 1 & array_in[6] == 1)
	{
		if (array_in[2] == 1 & array_in[4] == 1)
		{
			int num_of_zero = 0;
			for (int i = 0; i < 9; i++)
			{
				if (array_in[i] == 0)
				{
					num_of_zero++;
				}
			}
			if (num_of_zero == 7)
			{
				out = true;
			}
		}
	}
	if (array_in[4] == 1 & array_in[2] == 1)
	{
		if (array_in[2] == 1 & array_in[4] == 1)
		{
			int num_of_zero = 0;
			for (int i = 0; i < 9; i++)
			{
				if (array_in[i] == 0)
				{
					num_of_zero++;
				}
			}
			if (num_of_zero == 7)
			{
				out = true;
			}
		}
	}
	if (array_in[4] == 1 & array_in[0] == 1)
	{
		if (array_in[2] == 1 & array_in[4] == 1)
		{
			int num_of_zero = 0;
			for (int i = 0; i < 9; i++)
			{
				if (array_in[i] == 0)
				{
					num_of_zero++;
				}
			}
			if (num_of_zero == 7)
			{
				out = true;
			}
		}
	}
	return out;

}


bool Is_4_connection_k(int array_in[]) 
{
	bool out = false;
	if (array_in[4] == 1 & array_in[7] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 7)
		{
			out = true;
		}
	}
	if (array_in[4] == 1 & array_in[5] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 7)
		{
			out = true;
		}
	}
	if (array_in[4] == 1 & array_in[3] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 7)
		{
			out = true;
		}
	}
	if (array_in[4] == 1 & array_in[1] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 7)
		{
			out = true;
		}
	}
	return out;

}


bool Is_l_corner_k(int array_in[]) 
{   
	bool out = false;
	if (array_in[1] == 1 & array_in[4] == 1 & array_in[5] == 1) 
	{   
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
		}	
	}
	if (array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
		}
	}
	if (array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
		}
	}
	if (array_in[3] == 1 & array_in[4] == 1 & array_in[7] == 1)
	{
		int num_of_zero = 0;
		for (int i = 0; i < 9; i++)
		{
			if (array_in[i] == 0)
			{
				num_of_zero++;
			}
		}
		if (num_of_zero == 6)
		{
			out = true;
		}
	}
	return out;

}


bool Is_corner_cluster(int array_in[]) 
{    
	bool out = false;
	if (array_in[0] == 1 & array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1) 
	{
		out = true;	
	}
	if (array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1 & array_in[8] == 1)
	{
		out = true;
	}
	return out;

}


bool Is_tee_branch_k(int array_in[]) 
{
	bool out = false;
	if (array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[5] == 1) 
	{
		out = true;
	}
	if (array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[7] == 1)
	{
		out = true;
	}
	if (array_in[3] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1)
	{
		out = true;
	}
	if (array_in[1] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1)
	{
		out = true;
	}
	return out;
}


bool Is_vee_branch_k(int array_in[]) 
{
	bool out = false;
	if (array_in[0] == 1 & array_in[2] == 1 & array_in[4] == 1)
	{
		if (array_in[6] == 1 & array_in[7] == 0 & array_in[8] == 0)
		{
			out = true;
		}
		if (array_in[6] == 0 & array_in[7] == 1 & array_in[8] == 0)
		{
			out = true;
		}
		if (array_in[6] == 0 & array_in[7] == 0 & array_in[8] == 1)
		{
			out = true;
		}
	}
	if (array_in[0] == 1 & array_in[4] == 1 & array_in[6] == 1)
	{
		if (array_in[2] == 1 & array_in[5] == 0 & array_in[8] == 0)
		{
			out = true;
		}
		if (array_in[2] == 0 & array_in[5] == 1 & array_in[8] == 0)
		{
			out = true;
		}
		if (array_in[2] == 0 & array_in[5] == 0 & array_in[8] == 1)
		{
			out = true;
		}
	}
	if (array_in[4] == 1 & array_in[6] == 1 & array_in[8] == 1)
	{
		if (array_in[0] == 1 & array_in[1] == 0 & array_in[2] == 0)
		{
			out = true;
		}
		if (array_in[0] == 0 & array_in[1] == 1 & array_in[2] == 0)
		{
			out = true;
		}
		if (array_in[0] == 0 & array_in[1] == 0 & array_in[2] == 1)
		{
			out = true;
		}
	}
	if (array_in[2] == 1 & array_in[4] == 1 & array_in[8] == 1)
	{
		if (array_in[0] == 1 & array_in[3] == 0 & array_in[6] == 0)
		{
			out = true;
		}
		if (array_in[0] == 0 & array_in[3] == 1 & array_in[6] == 0)
		{
			out = true;
		}
		if (array_in[0] == 0 & array_in[3] == 0 & array_in[6] == 1)
		{
			out = true;
		}
	}
	return out;

}


bool Is_diagonal_k(int array_in[])
{
	bool out = false;
	if (array_in[1] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[6] == 1 & array_in[2] == 0 & array_in[3] == 0 & array_in[7] == 0)
	{
		out = true;
	}
	if (array_in[1] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[8] == 1 & array_in[0] == 0 & array_in[5] == 0 & array_in[7] == 0)
	{
		out = true;
	}
	if (array_in[2] == 1 & array_in[3] == 1 & array_in[4] == 1 & array_in[7] == 1 & array_in[1] == 0 & array_in[5] == 0 & array_in[6] == 0)
	{
		out = true;
	}
	if (array_in[0] == 1 & array_in[4] == 1 & array_in[5] == 1 & array_in[7] == 1 & array_in[1] == 0 & array_in[3] == 0 & array_in[8] == 0)
	{
		out = true;
	}
	return out;

}


bool Compare_3x3(int array_1[], int array_2[]) 
{
	bool out = true;
	for (int i = 0; i < 9; i++) 
	{
		if (array_1[i] != array_2[i]) 
		{
			out = false;
			
			break;
		}	
	
	}

	if (out == true) 
	{
		//printf("\n hit");
	}
	return out;

}


bool Check_stage_1_s(int array_in[], int bond) 
{   
	bool out = false;
	switch (bond) 
	{
	case 1: 
	{
		for (int i = 0; i < 4; i++) 
		{
			if (Compare_3x3(STAGE_1[0][i].filter_1, array_in) == true) 
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 2: 
	{
		for (int i = 0; i < 4; i++) 
		{
			if (Compare_3x3(STAGE_1[1][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 3:
	{
		for (int i = 0; i < 8; i++)
		{
			if (Compare_3x3(STAGE_1[2][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 4: 
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[4][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 5: 
	{
		for (int i = 0; i < 4; i++) 
		{
			if (Compare_3x3(STAGE_1[5][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}

		}
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[6][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 6: 
	{
		for (int i = 0; i < 2; i++)
		{
			if (Compare_3x3(STAGE_1[7][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		for (int i = 0; i < 8; i++)
		{
			if (Compare_3x3(STAGE_1[8][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 7: 
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[9][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 8: 
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[10][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}		
		}
		break;
	}
	case 9: 
	{
		for (int i = 0; i < 8; i++)
		{
			if (Compare_3x3(STAGE_1[11][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 10:
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[12][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	default: 
	{
		out = false;
		break;
	}

	}//end of switch

	if (out == true) 
	{
	
		//printf("\n hit");
	}
	return out;

}


bool Check_stage_1_t(int array_in[], int bond) 
{
	bool out = false;
	switch (bond) 
	{
	case 4:
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[3][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[4][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 5: 
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[5][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}

		}
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[6][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 6: 
	{
		for (int i = 0; i < 2; i++)
		{
			if (Compare_3x3(STAGE_1[7][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		for (int i = 0; i < 8; i++)
		{
			if (Compare_3x3(STAGE_1[8][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;	
	}
	case 7:
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[9][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;	
	}
	case 8: 
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[10][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 9:
	{
		for (int i = 0; i < 8; i++)
		{
			if (Compare_3x3(STAGE_1[11][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 10:
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[12][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	default: 
	{
		out = false;
		break;
	}	
	}//end of switch

	return out;
}


bool Check_stage_1_k(int array_in[], int bond) 
{
	bool out = false;
	switch (bond) 
	{
	case 4: 
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[3][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[4][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 6: 
	{
		for (int i = 0; i < 8; i++)
		{
			if (Compare_3x3(STAGE_1[8][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 7:
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[9][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 8:
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[10][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 9:
	{
		for (int i = 0; i < 8; i++)
		{
			if (Compare_3x3(STAGE_1[11][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 10:
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[12][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;
	}
	case 11: 
	{
		for (int i = 0; i < 4; i++)
		{
			if (Compare_3x3(STAGE_1[13][i].filter_1, array_in) == true)
			{
				out = true;
				break;
			}
		}
		break;	
	}
	default: 
	{
		out = false;
		break;
	}	
	}//end of case	
	return out;

}




bool Check_stage_2_st(int array_in[]) 
{
	bool temp1 = Is_spur_st(array_in) | Is_4_connection_st(array_in) | Is_l_cluster_st(array_in);
	bool temp2 = Is_4_connected_offset_st(array_in) | Is_spur_corner_cluster_st(array_in) | Is_diagonal_st(array_in);
	bool temp3 = Is_corner_cluster_st(array_in) | Is_tee_branch_st(array_in) | Is_vee_branch_st(array_in);
	bool out = temp1 | temp2 |temp3;
	return out;
}

bool Check_stage_2_k(int array_in[]) 
{
	bool temp1 = Is_spur_k(array_in) | Is_4_connection_k(array_in) | Is_l_corner_k(array_in);
	bool temp2 = Is_corner_cluster(array_in) | Is_tee_branch_k(array_in) | Is_vee_branch_k(array_in);
	bool out = temp1 | temp2 | Is_diagonal_k(array_in);
	return out;
}







