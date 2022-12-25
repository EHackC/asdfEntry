#ifndef SCREEN_H
#define SCREEN_H

#include "includes.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

class Screen{
protected:
    int scrollX; //x좌표로 화면이 얼마나 스크롤돼었는지
    int scrollY; //y좌표로 화면이 얼마나 스크롤돼었는지
    int left; //화면 x좌표
    int top; //화면 y좌표
    int cursorPos; //화면 커서 위치(터미널 커서와는 별개임)
    vector<string> content; //내용물
public:
    void key(stack<Screen> *screenStack,char key); //입력 받는 함수
    void updateScreen(){}; //화면 업대이트
    void printScreen(int width,int height); //화면 그리는 함수

    int getLeft(){return this->left;} //화면 x좌표 얻기
    int getTop(){return this->top;} //화면 y좌표 얻기

    void setLeft(int left){this->left=left;} //화면 x좌표 변경
    void setTop(int top){this->top=top;} //화면 y좌표 변경
};

#endif
