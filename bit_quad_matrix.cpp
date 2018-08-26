#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "bit_quad_matrix.h"

//BIT_QUAD BQM[6][4];
//
////TM写完发现这个毫无软用
//void Generate_BQM_mask(void) 
//{  
//	//Q0
//	BQM[0][0].quad_mask[0] = 0;
//	BQM[0][0].quad_mask[1] = 0;
//	BQM[0][0].quad_mask[2] = 0;
//	BQM[0][0].quad_mask[3] = 0;
//	//Q1
//	BQM[1][0].quad_mask[0] = 0;
//	BQM[1][0].quad_mask[1] = 0;
//	BQM[1][0].quad_mask[2] = 0;
//	BQM[1][0].quad_mask[3] = 1;
//
//	BQM[1][1].quad_mask[0] = 0;
//	BQM[1][1].quad_mask[1] = 0;
//	BQM[1][1].quad_mask[2] = 1;
//	BQM[1][1].quad_mask[3] = 0;
//
//	BQM[1][2].quad_mask[0] = 0;
//	BQM[1][2].quad_mask[1] = 1;
//	BQM[1][2].quad_mask[2] = 0;
//	BQM[1][2].quad_mask[3] = 0;
//
//	BQM[1][3].quad_mask[0] = 1;
//	BQM[1][3].quad_mask[1] = 0;
//	BQM[1][3].quad_mask[2] = 0;
//	BQM[1][3].quad_mask[3] = 0;
//	//Q2
//	BQM[2][0].quad_mask[0] = 1;
//	BQM[2][0].quad_mask[1] = 1;
//	BQM[2][0].quad_mask[2] = 0;
//	BQM[2][0].quad_mask[3] = 0;
//
//	BQM[2][1].quad_mask[0] = 1;
//	BQM[2][1].quad_mask[1] = 0;
//	BQM[2][1].quad_mask[2] = 1;
//	BQM[2][1].quad_mask[3] = 0;
//
//	BQM[2][2].quad_mask[0] = 0;
//	BQM[2][2].quad_mask[1] = 1;
//	BQM[2][2].quad_mask[2] = 0;
//	BQM[2][2].quad_mask[3] = 1;
//
//	BQM[2][3].quad_mask[0] = 0;
//	BQM[2][3].quad_mask[1] = 0;
//	BQM[2][3].quad_mask[2] = 1;
//	BQM[2][3].quad_mask[3] = 1;
//	//Q3
//	BQM[3][0].quad_mask[0] = 1;
//	BQM[3][0].quad_mask[1] = 1;
//	BQM[3][0].quad_mask[2] = 1;
//	BQM[3][0].quad_mask[3] = 0;
//
//	BQM[3][1].quad_mask[0] = 1;
//	BQM[3][1].quad_mask[1] = 1;
//	BQM[3][1].quad_mask[2] = 0;
//	BQM[3][1].quad_mask[3] = 1;
//
//	BQM[3][2].quad_mask[0] = 0;
//	BQM[3][2].quad_mask[1] = 1;
//	BQM[3][2].quad_mask[2] = 1;
//	BQM[3][2].quad_mask[3] = 1;
//
//	BQM[3][3].quad_mask[0] = 1;
//	BQM[3][3].quad_mask[1] = 0;
//	BQM[3][3].quad_mask[2] = 1;
//	BQM[3][3].quad_mask[3] = 1;
//	//Q4
//	BQM[4][0].quad_mask[0] = 1;
//	BQM[4][0].quad_mask[1] = 1;
//	BQM[4][0].quad_mask[2] = 1;
//	BQM[4][0].quad_mask[3] = 1;
//	//QD
//	BQM[5][0].quad_mask[0] = 1;
//	BQM[5][0].quad_mask[1] = 0;
//	BQM[5][0].quad_mask[2] = 0;
//	BQM[5][0].quad_mask[3] = 1;
//
//	BQM[5][1].quad_mask[0] = 0;
//	BQM[5][1].quad_mask[1] = 1;
//	BQM[5][1].quad_mask[2] = 1;
//	BQM[5][1].quad_mask[3] = 0;
//
//}



bool Is_Q1(int array_in[]) 
{
	bool out = false;
	if (array_in[0] == 0 & array_in[1] == 0 & array_in[2] == 0 & array_in[3] == 1) 
	{
		out = true;
	}
	if (array_in[0] == 0 & array_in[1] == 0 & array_in[2] == 1 & array_in[3] == 0)
	{
		out = true;
	}
	if (array_in[0] == 0 & array_in[1] == 1 & array_in[2] == 0 & array_in[3] == 0)
	{
		out = true;
	}
	if (array_in[0] == 1 & array_in[1] == 0 & array_in[2] == 0 & array_in[3] == 0)
	{
		out = true;
	}
	return out;
}

bool Is_Q2(int array_in[]) 
{
	bool out = false;
	if (array_in[0] == 1 & array_in[1] == 1 & array_in[2] == 0 & array_in[3] == 0)
	{
		out = true;
	}
	if (array_in[0] == 1 & array_in[1] == 0 & array_in[2] == 1 & array_in[3] == 0)
	{
		out = true;
	}
	if (array_in[0] == 0 & array_in[1] == 1 & array_in[2] == 0 & array_in[3] == 1)
	{
		out = true;
	}
	if (array_in[0] == 0 & array_in[1] == 0 & array_in[2] == 1 & array_in[3] == 1)
	{
		out = true;
	}
	return out;
}

bool Is_Q3(int array_in[]) 
{
	bool out = false;
	if (array_in[0] == 1 & array_in[1] == 1 & array_in[2] == 1 & array_in[3] == 0)
	{
		out = true;
	}
	if (array_in[0] == 1 & array_in[1] == 1 & array_in[2] == 0 & array_in[3] == 1)
	{
		out = true;
	}
	if (array_in[0] == 0 & array_in[1] == 1 & array_in[2] == 1 & array_in[3] == 1)
	{
		out = true;
	}
	if (array_in[0] == 1 & array_in[1] == 0 & array_in[2] == 1 & array_in[3] == 1)
	{
		out = true;
	}
	return out;
}

bool Is_Q4(int array_in[]) 
{
	bool out = false;
	if (array_in[0] == 1 & array_in[1] == 1 & array_in[2] == 1 & array_in[3] == 1)
	{
		out = true;
	}
	return out;
}


bool Is_QD(int array_in[]) 
{
	bool out = false;
	if (array_in[0] == 1 & array_in[1] == 0 & array_in[2] == 0 & array_in[3] == 1)
	{
		out = true;
	}
	if (array_in[0] == 0 & array_in[1] == 1 & array_in[2] == 1 & array_in[3] == 0)
	{
		out = true;
	}
	return out;
}

