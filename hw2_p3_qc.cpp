#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "convert_data_brutal.h"
#include "hw2_p3_qc.h"
#include "border.h"
#include "stk_matrix.h"

void Skeletonize_letter_E(void) 
{
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//第一部分，预处理letter图像，读取，转换
	unsigned char letter[480 * 480];
	FILE *fp_read = fopen("D:\\EE569image_hw2_p3\\input\\letterE.raw", "rb");
	if (fp_read == NULL)
	{
		printf("\nFail to find the file.");
	}
	else
	{
		printf("\nSucess to find the file:squares.raw.");
	}
	fread(letter, sizeof(unsigned char), 480 * 480, fp_read);
	fclose(fp_read);
	printf("\nletterE.raw in memeory.");
	// 切换成可计算版本
	int le[480 * 480];
	for (int i = 0; i < 480 * 480; i++)
	{
		le[i] = U8_to_0_255(letter[i]);
		if (le[i] > 128)
		{
			le[i] = 1;
		}
		else
		{
			le[i] = 0;
		}
	}
	//扩边
	int le1[482 * 482];
	Border_extend(le, le1, 480, 480);
	//将数组换成矩阵
	int le_m[482][482];
	for (int y = 0; y < 482; y++)
	{
		for (int x = 0; x < 482; x++)
		{
			le_m[y][x] = le1[482 * y + x];
		}
	}
	//准备中间矩阵,结果矩阵
	int temp_m[482][482];
	int output_m[480][480];
	Generate_stage_1_filter();
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//第二部分，Skeletonize
	int stack_array[9] = { 0,0,0,0,0,0,0,0,0 };
	//先生成中间矩阵
	for (int k = 0; k < 300; k++)
	{
		//清零
		for (int y = 0; y < 482; y++)
		{
			for (int x = 0; x < 482; x++)
			{
				temp_m[y][x] = 0;
			}
		}
		for (int y = 1; y < 481; y++)
		{
			for (int x = 1; x < 481; x++)
			{
				if (le_m[y][x] != 0)
				{
					stack_array[0] = le_m[y - 1][x - 1];
					stack_array[1] = le_m[y - 1][x];
					stack_array[2] = le_m[y - 1][x + 1];
					stack_array[3] = le_m[y][x - 1];
					stack_array[4] = le_m[y][x];
					stack_array[5] = le_m[y][x + 1];
					stack_array[6] = le_m[y + 1][x - 1];
					stack_array[7] = le_m[y + 1][x];
					stack_array[8] = le_m[y + 1][x + 1];
					int bond = stack_array[0] + 2 * stack_array[1] + stack_array[2] + 2 * stack_array[3] + 2 * stack_array[5] + stack_array[6] + 2 * stack_array[7] + stack_array[8];
					//printf("\n %d", bond);
					if (Check_stage_1_k(stack_array, bond) == true)
					{
						temp_m[y][x] = 1;
						//	printf("\n hit");
					}
				}
			}
		}
		//对中间矩阵进行stage2处理
		for (int y = 1; y < 481; y++)
		{
			for (int x = 1; x < 481; x++)
			{
				if (temp_m[y][x] != 0)
				{
					stack_array[0] = temp_m[y - 1][x - 1];
					stack_array[1] = temp_m[y - 1][x];
					stack_array[2] = temp_m[y - 1][x + 1];
					stack_array[3] = temp_m[y][x - 1];
					stack_array[4] = temp_m[y][x];
					stack_array[5] = temp_m[y][x + 1];
					stack_array[6] = temp_m[y + 1][x - 1];
					stack_array[7] = temp_m[y + 1][x];
					stack_array[8] = temp_m[y + 1][x + 1];
					if (Check_stage_2_k(stack_array) == false)
					{
						le_m[y][x] = 0;
						//printf("\n hit");						
					}
				}
			}
		}//到此一次收缩完成
	}//for k
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//第三部分，输出
	//转化成图像标准
	for (int y = 1; y < 481; y++)
	{
		for (int x = 1; x < 481; x++)
		{
			if (le_m[y][x] == 1)
			{
				output_m[y - 1][x - 1] = 255;
			}
			else
			{
				output_m[y - 1][x - 1] = 0;
			}
		}
	}
	unsigned char result[480 * 480];
	for (int y = 0; y < 480; y++)
	{
		for (int x = 0; x < 480; x++)
		{
			result[480 * y + x] = Zero_255_to_U8(output_m[y][x]);
		}
	}
	//输出图像
	FILE *fp_write = fopen("D:\\EE569image_hw2_p3\\output\\skeletonize_out.raw", "wb");
	if (fp_write == NULL)
	{
		printf("\nFail to create the file.");
	}
	else
	{
		printf("\nScuess to create the file.");
	}
	fwrite(result, sizeof(unsigned char), 480 * 480, fp_write);
	fclose(fp_write);
	printf("\n\nskeletonize_out...done...\n.");



}
