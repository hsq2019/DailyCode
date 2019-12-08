#ifndef __GAME_H__
#define  __GAME_H__
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#pragma warning(disable:4996)
#define Row 3
#define Col 3
#define P_Color  'X'
#define C_Color  'O'
#define Init  ' '
void InitBoard(char board[][Col], int row, int col);
void ShowBoard(char board[][Col], int row, int col);
void ComputerMove(char board[][Col], int row, int col);
char Judge(char board[][Col], int row, int col);
void Game();
int Guess();
#endif