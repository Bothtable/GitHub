#include <stdio.h>
#include <stdlib.h>


void recursion(char s[], char p[], int i, int j);
int main()
{
    char s[17] = {'a','b','f','a','k','l','f','i','o','p','q','r','s','o','k','p','s'};
    char p[5] = {'f','i','o','p','q'};
    int i=0, j=0;
    //recursion(s, p, i, j);
    return 0;
}
//暴力递归
void recursion(char s[], char p[], int i, int j)
{
    if(j == 4){
        printf("在%d处字符串匹配成功", i);
        return;
    }
    if(s[i] == p[j]){
        ++i;
        ++j;
        recursion(s, p, i, j);
    }
    else{
        i = i-(j-1);
        j = 0;
        recursion(s, p, i, j);
    }
}
