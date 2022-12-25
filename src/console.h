//색, 커서 이동 등 콘솔 조작 관련
#ifndef CONSOLE_H
#define CONSOLE_H

#include "includes.h"

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15

void gotoxy(short x,short y); //콘솔 커서 이동시키는 함수
void setcolor(short c,short b); //콘솔 색 변경하는 함수
void setcursor(short size,short visible); //콘솔 커서 모양 변경

#endif
