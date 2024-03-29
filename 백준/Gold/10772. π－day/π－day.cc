#include <iostream>
int d[255][255],N,K,i,j;int main(){std::cin>>N>>K;for(i=1;i<=N;i++)for(j=1;j<=i;j++){if(j==1|i==j)d[i][j]=1;else d[i][j]=d[i-1][j-1]+d[i-j][j];}std::cout<<d[N][K];}