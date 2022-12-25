#include "screen.h"
#include "console.h"

//화면에 그리는 함수
void Screen::printScreen(int width,int height){
    int screenSize=min(scrollY+height,static_cast<int>(content.size())); //출력할 길이 얻기
    for(int i=scrollY;i<screenSize;i++){
        gotoxy(left,top+i-scrollY); //출력할 줄로 이동
        string buff=content.at(i);
        if(buff.length()>left){ //만약 화면에 보이면
            cout<<buff.substr(scrollX,min(width,static_cast<int>(buff.length())-scrollX))<<endl; //그 줄 출력
        }
    }
}
