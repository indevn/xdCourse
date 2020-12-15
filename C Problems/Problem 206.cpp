#include <iostream>
#include <cstring>
char str[51];
int main(){
    gets(str);
    char delC;
    std::cin>>delC;
    int stdMk=0;
    int nowMk=0;
    while(str[nowMk]!='\0'){
        str[stdMk]=str[nowMk];
        while(str[nowMk]==delC)
            //write the next bit
            str[stdMk]=str[++nowMk];
        stdMk++;
        if(str[++nowMk]=='\0')
            str[stdMk]=str[nowMk];
    }
    puts(str);
    return 0;
}