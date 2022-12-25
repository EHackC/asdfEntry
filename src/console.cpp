#include "console.h"

//콘솔 커서 이동시키는 함수
void gotoxy(short x,short y){
    COORD posXY={x,y};  
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),posXY);
}

//콘솔 색 변경하는 함수
void setcolor(short text,short background){
    short col=text+background*16;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),col);
}

//콘솔 커서 모양 변경
void setcursor(short size,short visible){
    CONSOLE_CURSOR_INFO cursor={0,};
    cursor.dwSize=size;
    cursor.bVisible=visible;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor);
}
