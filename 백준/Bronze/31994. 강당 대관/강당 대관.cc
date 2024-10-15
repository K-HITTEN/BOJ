#include<stdio.h>
#include<string.h>
int N,n;char s[50],S[50];int main(){while(scanf("%s %d",s,&n)>1)if(n>N){N=n;strcpy(S,s);}printf("%s",S);}