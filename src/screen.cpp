#include "screen.h"
#include "console.h"

//화면에 그리는 함수
void Screen::printScreen(int width,int height){
    int screenSize=min(scrollY+height,static_cast<int>(content.size()));
    for(int i=scrollY;i<screenSize;i++){
        gotoxy(left,top+i-scrollY);
        string buff=content.at(i);
        if(buff.length()>left){
            cout<<buff.substr(scrollX,min(width,static_cast<int>(buff.length())-scrollX))<<endl;
        }
    }
}
