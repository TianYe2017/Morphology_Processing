#pragma once
#ifndef STK_MATRIX_H
#define STK_MATRIX_H
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

struct STAGE1 {
	int filter_1[9] = { 0,0,0,0,0,0,0,0,0 };	
};

extern STAGE1 STAGE_1[14][8]; 

void Generate_stage_1_filter(void);
bool Check_stage_1_s(int array_in[], int bond);
bool Check_stage_1_t(int array_in[], int bond);
bool Check_stage_1_k(int array_in[], int bond);
bool Check_stage_2_st(int array_in[]);
bool Check_stage_2_k(int array_in[]);




#endif