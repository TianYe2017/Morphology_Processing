#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "convert_data_brutal.h"
#include "hw2_p3_qd.h"
#include "border.h"
#include "stk_matrix.h"
#include "bit_quad_matrix.h"

int Find_min(int a, int b, int c, int d) 
{
	int temp = a;
	if (b < temp) 
	{
		temp = b;
	}
	if (c < temp) 
	{
		temp = c;
	}
	if (d < temp) 
	{
		temp = d;
	}
	if (temp > 15) 
	{
		temp = 15;
	}
	return temp;
}


void Fill_the_holes(void) 
{
	unsigned char board[480 * 480];
	FILE *fp_read = fopen("D:\\EE569image_hw2_p3\\input\\board.raw", "rb");
	if (fp_read == NULL)
	{
		printf("\nFail to find the file.");
	}
	else
	{
		printf("\nSucess to find the file:board.raw.");
	}
	fread(board, sizeof(unsigned char), 480 * 480, fp_read);
	fclose(fp_read);
	printf("\nboard.raw in memeory.");
	// 切换成可计算版本
	int bd[480 * 480];
	for (int i = 0; i < 480 * 480; i++)
	{
		bd[i] = U8_to_0_255(board[i]);
		if (bd[i] > 128)
		{
			bd[i] = 1;
		}
		else
		{
			bd[i] = 0;
		}
	}
	int bd_m[480][480];
	for (int y = 0; y < 480; y++)
	{
		for (int x = 0; x < 480; x++)
		{
			bd_m[y][x] = bd[480 * y + x];
		}
	}
//开始循环填充
	int black_hole[480][480] = {0};
	for (int y = 0; y < 480; y++) 
	{
		for (int x = 0; x < 480; x++) 
		{   
			//只对0区处理
			if (bd_m[y][x] == 0) 
			{   
				//printf("\nin");
				for (int i = 1; i < Find_min(y, x, 479 - x, 479 - y); i++)
				{
					bool dierction_x = true;
					bool dierction_y = true;
					int paint_size = 0;
					//x方向：			
					for (int x1 = x - i; x1 <= x + i; x1++)
					{
						if (bd_m[y + i][x1] == 0)
						{
							dierction_x = false;
						}
						if (bd_m[y - i][x1] == 0)
						{
							dierction_x = false;
						}
					}
					//y方向				
					for (int y1 = y - i; y1 <= y + i; y1++)
					{
						if (bd_m[y1][x - i] == 0)
						{
							dierction_y = false;
						}
						if (bd_m[y1][x + i] == 0)
						{
							dierction_y = false;
						}
					}
					//如果是false，说明不是hole；反之说明是hole	
					if (dierction_x == true & dierction_y == true)
					{
						//printf("in");
						for (int y2 = y - i; y2 <= y + i; y2++)
						{
							for (int x2 = x - i; x2 <= x + i; x2++)
							{
								bd_m[y2][x2] = 1;
							}//把内部区域弄成1
						}//把内部区域弄成1
						black_hole[y][x] = 255;
						black_hole[y + 1][x] = 255;
						black_hole[y + 2][x] = 255;
						black_hole[y + 3][x] = 255;
						black_hole[y + 4][x] = 255;
						black_hole[y - 1][x] = 255;
						black_hole[y - 2][x] = 255;
						black_hole[y - 3][x] = 255;
						black_hole[y - 4][x] = 255;
						black_hole[y][x - 1] = 255;
						black_hole[y][x - 2] = 255;	
						black_hole[y][x - 3] = 255;
						black_hole[y][x - 4] = 255;
						black_hole[y][x + 1] = 255;
						black_hole[y][x + 2] = 255;
						black_hole[y][x + 3] = 255;
						black_hole[y][x + 4] = 255;
						break;//一个区域理论上完成，跳出区域
					}//一个内部区域完成				
				}//可能从break直接跳出			
			}//if	
		}//外部循环遍历全部点	
	}//外部循环遍历全部点

    //输出中间图像
	int temp_out[480][480];
	unsigned char result[480 * 480];
	for (int y = 0; y < 480; y++) 
	{
		for (int x = 0; x < 480; x++) 
		{
			if (bd_m[y][x] == 0) 
			{
				temp_out[y][x] = 0;
			}
			else 
			{   
				//printf("\n 255");
				temp_out[y][x] = 255;
			}
		}
	}
	for (int y = 0; y < 480; y++)
	{
		for (int x = 0; x < 480; x++)
		{
			result[480 * y + x] = Zero_255_to_U8(temp_out[y][x]);
			//printf("\n %d", temp_out[y][x]);
		}
	}
	FILE *fp_write = fopen("D:\\EE569image_hw2_p3\\output\\board_no_holes.raw", "wb");
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
	printf("\n\nboard_no_holes...done...\n.");

	for (int y = 0; y < 480; y++)
	{
		for (int x = 0; x < 480; x++)
		{
			result[480 * y + x] = Zero_255_to_U8(black_hole[y][x]);			
		}
	}
	fp_write = fopen("D:\\EE569image_hw2_p3\\output\\position of holes.raw", "wb");
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
	printf("\n\nposition of holes...done...\n.");

}


void Count_white_objects(void) 
{
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//第一部分，预处理board_no_holes图像，读取，转换
	unsigned char board_no_holes[480 * 480];
	FILE *fp_read = fopen("D:\\EE569image_hw2_p3\\output\\board_no_holes.raw", "rb");
	if (fp_read == NULL)
	{
		printf("\nFail to find the file.");
	}
	else
	{
		printf("\nSucess to find the file:board_no_holes.raw.");
	}
	fread(board_no_holes, sizeof(unsigned char), 480 * 480, fp_read);
	fclose(fp_read);
	printf("\nboard_no_holes.raw in memeory.");
	// 切换成可计算版本
	int bd[480 * 480];
	for (int i = 0; i < 480 * 480; i++)
	{
		bd[i] = U8_to_0_255(board_no_holes[i]);
		if (bd[i] > 128)
		{
			bd[i] = 1;
		}
		else
		{
			bd[i] = 0;
		}
	}
	//扩边
	int bd1[482 * 482];
	Border_extend(bd, bd1, 480, 480);
	//将数组换成矩阵
	int bd_m[482][482];
	for (int y = 0; y < 482; y++)
	{
		for (int x = 0; x < 482; x++)
		{
			bd_m[y][x] = bd1[482 * y + x];
		}
	}
	//准备中间矩阵,结果矩阵
	int temp_m[482][482];
	int output_m[480][480];
	Generate_stage_1_filter();
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
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
				if (bd_m[y][x] != 0)
				{
					stack_array[0] = bd_m[y - 1][x - 1];
					stack_array[1] = bd_m[y - 1][x];
					stack_array[2] = bd_m[y - 1][x + 1];
					stack_array[3] = bd_m[y][x - 1];
					stack_array[4] = bd_m[y][x];
					stack_array[5] = bd_m[y][x + 1];
					stack_array[6] = bd_m[y + 1][x - 1];
					stack_array[7] = bd_m[y + 1][x];
					stack_array[8] = bd_m[y + 1][x + 1];
					int bond = stack_array[0] + 2 * stack_array[1] + stack_array[2] + 2 * stack_array[3] + 2 * stack_array[5] + stack_array[6] + 2 * stack_array[7] + stack_array[8];
					//printf("\n %d", bond);
					if (Check_stage_1_s(stack_array, bond) == true)
					{
						temp_m[y][x] = 1;
						//printf("\n hit");
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
					if (Check_stage_2_st(stack_array) == false)
					{
						bd_m[y][x] = 0;
						//printf("\n hit");						
					}
				}
			}
		}//到此一次收缩完成
	}//for k
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//第三部分，输出
//转化成图像标准
	int num_of_white_objects = 0;
	for (int y = 1; y < 481; y++)
	{
		for (int x = 1; x < 481; x++)
		{
			if (bd_m[y][x] == 1)
			{
				output_m[y - 1][x - 1] = 255;
				num_of_white_objects++;
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
	FILE *fp_write = fopen("D:\\EE569image_hw2_p3\\output\\shrink_board_no_holes.raw", "wb");
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
	printf("\n\nshrink_board_no_holes...done...\n.");
	printf("\n\nThe number of white objects is %d.", num_of_white_objects);

}


void Count_black_holes(void) 
{   
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//第一部分，预处理board图像，读取，转换
	unsigned char board[480 * 480];
	FILE *fp_read = fopen("D:\\EE569image_hw2_p3\\input\\board.raw", "rb");
	if (fp_read == NULL)
	{
		printf("\nFail to find the file.");
	}
	else
	{
		printf("\nSucess to find the file:board.raw.");
	}
	fread(board, sizeof(unsigned char), 480 * 480, fp_read);
	fclose(fp_read);
	printf("\nboard.raw in memeory.");
	// 切换成可计算版本
	int bd[480 * 480];
	for (int i = 0; i < 480 * 480; i++)
	{
		bd[i] = U8_to_0_255(board[i]);
		if (bd[i] > 128)
		{
			bd[i] = 1;
		}
		else
		{
			bd[i] = 0;
		}
	}
	int bd_m[480][480];
	for (int y = 0; y < 480; y++)
	{
		for (int x = 0; x < 480; x++)
		{
			bd_m[y][x] = bd[480 * y + x];
		}
	}
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//第二部分，bit quad
	int num_of_Q1 = 0;
	int num_of_Q2 = 0;
	int num_of_Q3 = 0;
	int num_of_Q4 = 0;
	int num_of_QD = 0;
	for (int y = 0; y < 479; y++) 
	{
		for (int x = 0; x < 479; x++) 
		{
			int stack[4];
			stack[0] = bd_m[y][x];
			stack[1] = bd_m[y][x + 1];
			stack[2] = bd_m[y + 1][x];
			stack[3] = bd_m[y + 1][x + 1];
			if (Is_Q1(stack) == true) 
			{
				num_of_Q1++;
			}
			if (Is_Q2(stack) == true) 
			{
				num_of_Q2++;
			}
			if (Is_Q3(stack) == true) 
			{
				num_of_Q3++;
			}
			if (Is_Q4(stack) == true)
			{
				num_of_Q4++;
			}
			if (Is_QD(stack) == true)
			{
				num_of_QD++;
			}		
		}	
	}
	int E4 = (num_of_Q1 - num_of_Q3 + 2 * num_of_QD) / 4;
	printf("\nThe value of E is %d.", E4);
	printf("\nThe number of holes is %d.", 15 - E4);  // 15来自上一小问的结果
}


void Count_squares_and_circles(void) 
{
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//第一部分，预处理,需要读两张图，一张是board_no-holes;第二张是shrink_board_no_holes
	unsigned char board_no_holes[480 * 480];
	unsigned char shrink_board_no_holes[480 * 480];
	FILE *fp_read = fopen("D:\\EE569image_hw2_p3\\output\\board_no_holes.raw", "rb");
	if (fp_read == NULL)
	{
		printf("\nFail to find the file.");
	}
	else
	{
		printf("\nSucess to find the file:board_no_holes.raw.");
	}
	fread(board_no_holes, sizeof(unsigned char), 480 * 480, fp_read);
	fclose(fp_read);
	printf("\nboard_no_holes.raw in memeory.");
	//
	fp_read = fopen("D:\\EE569image_hw2_p3\\output\\shrink_board_no_holes.raw", "rb");
	if (fp_read == NULL)
	{
		printf("\nFail to find the file.");
	}
	else
	{
		printf("\nSucess to find the file:shrink_board_no_holes.raw.");
	}
	fread(shrink_board_no_holes, sizeof(unsigned char), 480 * 480, fp_read);
	fclose(fp_read);
	printf("\nshrink_board_no_holes.raw in memeory.");
	//把他们转化成可计算的形式
	int bdm[480][480];
	int sbdm[480][480];
	for (int y = 0; y < 480; y++) 
	{
		for (int x = 0; x < 480; x++) 
		{
			bdm[y][x] = U8_to_0_255(board_no_holes[480 * y + x]);
			sbdm[y][x] = U8_to_0_255(shrink_board_no_holes[480 * y + x]);
		}
	}
//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//***//
//第二部分，计算方块和圆的个数
	int num_of_squares = 0;
	int num_of_circles = 0;
	for (int y = 0; y < 480; y++) 
	{
		for (int x = 0; x < 480; x++) 
		{
			if (sbdm[y][x] == 255)
			{
				int left, right, top, bottom = 0;
				int offset = 0;
				//left
				while (bdm[y][x - offset] != 0) 
				{
					offset++;
				}
				left = x - offset + 1;
				offset = 0;
				//right
				while (bdm[y][x + offset] != 0)
				{
					offset++;
				}
				right = x + offset - 1;
				offset = 0;
				//bottom
				while (bdm[y - offset][x] != 0)
				{
					offset++;
				}
				bottom = y - offset + 1;
				offset = 0;
				//top
				while (bdm[y + offset][x] != 0)
				{
					offset++;
				}
				top = y + offset - 1;
				offset = 0;
				//计算ratio
				int area = 0;
				for (int y1 = bottom; y1 <= top; y1++) 
				{
					for (int x1 = left; x1 <= right; x1++) 
					{
						if (bdm[y1][x1] == 255) 
						{
							area++;
						}
					}
				}
				double ratio = (double)area / (double)((top - bottom + 1) * (right - left + 1));
				if (ratio >= 0.95) 
				{
					num_of_squares++;
				}
				else 
				{
					num_of_circles++;
				}
				printf("\nCurrent ratio is: %lf.", ratio);			
			}		
		}
	}
	printf("\n\nThe number of squares is %d.", num_of_squares);
	printf("\n\nThe number of circles is %d.", num_of_circles);

}



void Counting_game(void) 
{   
	Fill_the_holes();//这一步完成以后只要用shrink就可以按照Question_a的办法找出图形个数
	Count_white_objects();
	Count_black_holes();
	Count_squares_and_circles();
}




