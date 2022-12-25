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

//콘솔 커서 숨기기
void cursorHide(){
    CONSOLE_CURSOR_INFO cursor={0,};
    cursor.bVisible=FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor);
}

//콘솔 커서 보이기
void cursorShow(){
    CONSOLE_CURSOR_INFO cursor={0,};
    cursor.bVisible=TRUE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor);
}

//콘솔 커서 사이즈 변경
void setCurSize(short size){
    CONSOLE_CURSOR_INFO cursor={0,};
    cursor.dwSize=size;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor);
}
