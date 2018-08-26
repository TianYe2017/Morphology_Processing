#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "convert_data_brutal.h"
#include "hw2_p3_qa.h"
#include "border.h"
#include "stk_matrix.h"



void Shrink_and_count(void) 
{
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//��һ���֣�Ԥ����squaresͼ�񣬶�ȡ��ת��
	unsigned char squares[480 * 480];
	FILE *fp_read = fopen("D:\\EE569image_hw2_p3\\input\\squares.raw", "rb");
	if (fp_read == NULL)
	{
		printf("\nFail to find the file.");
	}
	else
	{
		printf("\nSucess to find the file:squares.raw.");
	}
	fread(squares, sizeof(unsigned char), 480 * 480, fp_read);
	fclose(fp_read);
	printf("\nman.raw in memeory.");
// �л��ɿɼ���汾
	int sq[480 * 480];
	for(int i = 0; i < 480*480;i++)
	{
		sq[i] = U8_to_0_255(squares[i]);
		if (sq[i] > 128) 
		{
			sq[i] = 1;
		}
		else 
		{
			sq[i] = 0;
		}
	}
//����
	int sq1[482 * 482];
	Border_extend(sq, sq1, 480, 480);
//�����黻�ɾ���
	int sq_m[482][482];
	for (int y = 0; y < 482; y++) 
	{
		for (int x = 0; x < 482; x++) 
		{
			sq_m[y][x] = sq1[482 * y + x];
		}
	}
//׼���м����,�������
	int temp_m[482][482];
	int output_m[480][480];
	Generate_stage_1_filter();
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//�ڶ����֣�Shrink
	int stack_array[9] = { 0,0,0,0,0,0,0,0,0 };
//�������м����
	for (int k = 0; k < 300; k++) 
	{   
		//����
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
				if (sq_m[y][x] != 0)
				{
					stack_array[0] = sq_m[y - 1][x - 1];
					stack_array[1] = sq_m[y - 1][x];
					stack_array[2] = sq_m[y - 1][x + 1];
					stack_array[3] = sq_m[y][x - 1];
					stack_array[4] = sq_m[y][x];
					stack_array[5] = sq_m[y][x + 1];
					stack_array[6] = sq_m[y + 1][x - 1];
					stack_array[7] = sq_m[y + 1][x];
					stack_array[8] = sq_m[y + 1][x + 1];
					int bond = stack_array[0] + 2 * stack_array[1] + stack_array[2] + 2 * stack_array[3] + 2 * stack_array[5] + stack_array[6] + 2 * stack_array[7] + stack_array[8];
					//printf("\n %d", bond);
					if (Check_stage_1_s(stack_array, bond) == true)
					{
						temp_m[y][x] = 1;
					//	printf("\n hit");
					}
				}
			}
		}
		//���м�������stage2����
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
					if (Check_stage_2_st(stack_array) == false)
					{
						sq_m[y][x] = 0;
						//printf("\n hit");						
					}			
				}				
			}
		}//����һ���������
	}//for k
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//�������֣����
	//ת����ͼ���׼������������
	int num_of_light_spots = 0;
	for (int y = 1; y < 481; y++)
	{
		for (int x = 1; x < 481; x++)
		{
			if (sq_m[y][x] == 1) 
			{
				output_m[y - 1][x - 1] = 255;
				num_of_light_spots++;
			}
			else 
			{
				output_m[y - 1][x - 1] = 0;
			}
		}
	}
	printf("\nThe number of squares is %d. \n", num_of_light_spots);
	//ת��������
	unsigned char result[480 * 480];
	for (int y = 0; y < 480; y++)
	{
		for (int x = 0; x < 480; x++)
		{
			result[480 * y + x] = Zero_255_to_U8(output_m[y][x]);
		}
	}
	//���ͼ��
	FILE *fp_write = fopen("D:\\EE569image_hw2_p3\\output\\shrink_out.raw", "wb");
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
	printf("\n\nshrink_out...done...\n.");
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//���Ĳ��֣�Ѱ��ÿ��square�ĳߴ�
	int original[480][480];
	for (int y = 0; y < 480; y++) 
	{
		for (int x = 0; x < 480; x++) 
		{		
			original[y][x] = sq[480 * y + x];
		}
	}


	int index = 0,size = 0;
	int left, right;
	for (int y = 1; y < 481; y++)
	{
		for (int x = 1; x < 481; x++)
		{
			if (sq_m[y][x] == 1)
			{   
				int temp = x;
				while (original[y-1][temp-1] != 0)
				{
					temp++;
				}
				right = temp - 1;
				temp = x;
				while (original[y-1][temp-1] != 0)
				{
					temp--;
				}
				left = temp + 1;
				size = right - left + 1;	
				index++;
				printf("\nThe size of %d th square is:", index);
				printf("%d", size);
			}			
		}
	}
}