//Problem 63
// 　　小明的公司每个月给小明发工资，而小明拿到的工资为交完个人所得税之后的工资。假设他一个月的税前工资为S元，则他应交的个人所得税按如下公式计算：
// 　　1） 个人所得税起征点为3500元，若S不超过3500，则不交税，3500元以上的部分才计算个人所得税，令A=S-3500元；
// 　　2） A中不超过1500元的部分，税率3%；
// 　　3） A中超过1500元未超过4500元的部分，税率10%；
// 　　4） A中超过4500元未超过9000元的部分，税率20%；
// 　　5） A中超过9000元未超过35000元的部分，税率25%；
// 　　6） A中超过35000元的部分，税率30%；
// 　　例如，如果小明的税前工资为10000元，则A=10000-3500=6500元，其中不超过1500元部分应缴税1500×3%=45元，超过1500元不超过4500元部分应缴税(4500-1500)×10%=300元，超过4500元部分应缴税(6500-4500)×20%=400元。总共缴税745元，税后所得为9255元。
// 　　已知小明这个月税前所得为S元，请问他的税后工资T是多少元。
// 输入格式
// 　　输入为一个整数S，表示小明的税前工资。所有评测数据保证小明的税前工资为一个整百的数。
// 输出格式
// 　　输出一个整数T，表示小明的税后工资。
// 样例输入
// 10000
// 样例输出
// 9255
// 评测用例规模与约定
// 对于所有评测用例，1 ≤ T ≤ 100000。
#include<iostream>
int main(){
    int A,S,T=0;
    std::cin>>S;
    A=S-3500;
    if(A>35000){
        T+=(A-35000)*3/10;
        A=35000;
    }
    if(A>9000){
        T+=(A-9000)/4;
        A=9000;
    }
    if(A>4500){
        T+=(A-4500)/5;
        A=4500;
    }
    if(A>1500){
        T+=(A-1500)/10;
        A=1500;
    }
    if(A>0){
        T+=A*3/100;
    }
    std::cout<<S-T;

}