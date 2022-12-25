#ifndef CONSOLE_H
#define CONSOLE_H
//색, 커서 이동 등 콘솔 조작 관련

#include "includes.h"

#define COL_BLACK 0
#define COL_BLUE 1
#define COL_GREEN 2
#define COL_CYAN 3
#define COL_RED 4
#define COL_MAGENTA 5
#define COL_BROWN 6
#define COL_LIGHTGRAY 7
#define COL_DARKGRAY 8
#define COL_LIGHTBLUE 9
#define COL_LIGHTGREEN 10
#define COL_LIGHTCYAN 11
#define COL_LIGHTRED 12
#define COL_LIGHTMAGENTA 13
#define COL_YELLOW 14
#define COL_WHITE 15

void gotoxy(short x,short y); //콘솔 커서 이동시키는 함수
void setcolor(short c,short b); //콘솔 색 변경하는 함수
void setcursor(short size,short visible); //콘솔 커서 모양 변경

#endif
