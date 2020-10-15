#include<iostream>
using namespace std;
int main(){
    int dayWek,AQI,carNum;
    cin>>dayWek>>AQI>>carNum;
    int lat=carNum%10;

    if((AQI<400&&AQI>=200&&
                 ((dayWek==1&&(lat==1||lat==6))||
                  (dayWek==2&&(lat==2||lat==7))||
                  (dayWek==3&&(lat==3||lat==8))||
                  (dayWek==4&&(lat==4||lat==9))||
                  (dayWek==5&&(lat==5||lat==0))))||
        AQI>=400&&
        (((dayWek==1||dayWek==3||dayWek==5)&&
          (lat==1||lat==3||lat==5||lat==7||lat==9))||
         ((dayWek==2||dayWek==4)&&
          (lat==0||lat==2||lat==4||lat==6||lat==8))))
    cout<<lat<<" yes";
    else cout<<lat<<" no";
    return 0;


}