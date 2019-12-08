#ifndef __GAME_H__
#define __GAMR_H__

#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#pragma warning(disable:4996)
void game();
#define ROW 3
#define COL 3
#define P_COLOR 'X'
#define C_COLOR 'O'
#define INIT ' '
int Guess();
void Initboard(char board[][COL], int row, int col);
void Showboard(char board[][COL], int row, int col);
char Judge(char board[][COL], int row, int col);
void ComputerMove(char board[][COL], int row, int col);

#endif