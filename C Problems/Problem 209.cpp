#include<cstdio>
#include<cstring>
void char_cp(char *oriStr,char *newStr,int limN);
int main(){
    char str[50];
    char ch[50];
    fgets(str,50,stdin);
    int m;
    scanf("%d",&m);
    // printf("%d",strlen(str));
    char_cp(str,ch,m);
    puts(ch);

}
void char_cp(char *oriStr,char *newStr,int limN){
    memcpy(newStr,oriStr+limN+1,strlen(oriStr)-limN);
}


// #include <stdio.h>
// #include <string.h>
 
// int main() 
// {
// 	int n, len, i;
// 	char str[50];
// 	gets(str);
// 	scanf("%d", &n);
// 	len = strlen(str);
// 	for (i = n + 1; i < len; i++) 
// 	{
// 		printf("%c", str[i]);
// 	}
// 	return 0;
// }