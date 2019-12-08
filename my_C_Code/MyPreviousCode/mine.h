#ifndef __MINE__
#define __MINE__
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>

#pragma warning (disable:4996)

#define ROW 12
#define COL 12
#define MINES 20
void Set_mine(char board[][COL], int row, int col, int *x_p, int *y_p);
void Show_Board(char board[][COL], int row, int col);
int GetCount(char board[][COL], int x, int y);

#endif