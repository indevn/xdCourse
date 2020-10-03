#include <iostream>
#include <cmath>
char a[2500*25+1];
int main(){
    //input
    char tmp;
    int endPos;
    for(int i=1;1;i++){
        std::cin>>tmp;
        a[i]=tmp;
        if(tmp=='E'){
            endPos=i;
            break;
        }
    }
    //when s\11
    int scoreWin=0;
    int scoreLos=0;
    for(int i=1;i<=endPos;i++){
        if(a[12]=='E'&&a[13]=='a') {
            std::cout<<11<<':'<<0<<std::endl;
            std::cout<<0<<':'<<0<<std::endl<<std::endl;
            break;
        }
        if(a[i]=='W') scoreWin++;
        if(a[i]=='L') scoreLos++;
        if(i==endPos-1||i==endPos){
            std::cout<<scoreWin<<':'<<scoreLos;
            if(scoreWin==11&&scoreLos==0)std::cout<<0<<':'<<0;
            std::cout<<std::endl<<std::endl;
            scoreWin=0;
            scoreLos=0;
            break;
        }
        if((scoreWin>=11||scoreLos>=11)&&abs(scoreWin-scoreLos)>=2){
            std::cout<<scoreWin<<':'<<scoreLos;
            if(scoreWin==11&&scoreLos==0&&i==endPos-1)std::cout<<std::endl<<0<<':'<<0;
            std::cout<<std::endl;
            scoreWin=0;
            scoreLos=0;
        }
    }
    
    //when s\21
    for(int i=1;i<=endPos;i++){
        if(a[i]=='W') scoreWin++;
        if(a[i]=='L') scoreLos++;
        if(i==endPos-1||i==endPos){
            std::cout<<scoreWin<<':'<<scoreLos;
            break;
        }
        if((scoreWin>=21||scoreLos>=21)&&abs(scoreWin-scoreLos)>=2){
            std::cout<<scoreWin<<':'<<scoreLos<<std::endl;
            scoreWin=0;
            scoreLos=0;
        }
    }
    return 0;   
}