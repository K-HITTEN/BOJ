#include <iostream>
#include <queue>
#define A [o][p]
using namespace std;char B[50][50]={0,};bool V[50][50][(1<<6)]={false,};int Y[4]={-1,1,0,0},X[4]={0,0,-1,1},N,M;struct I{int x,y,k,m;};int main(void){cin>>N>>M;I t,u;for(int o=0;o<N;o++){for(int p=0;p<M;p++){cin>>B A;if(B A=='0'){t.y=o;t.x=p;}}}queue<I>q;t.k=t.m=0;q.push(t);while(!q.empty()){t=q.front();q.pop();if(B[t.y][t.x]=='1'){cout<<t.m;return 0;}for(int d=0;d<4;d++){int o=t.y+Y[d],p=t.x+X[d];if(o<0||p<0||o>=N||p>=M||V A[t.k]||B A=='#')continue;if(65<=B A&&B A<=70&&(t.k&(1<<(B A-65)))==0)continue;V A[t.k]=true;u.y=o;u.x=p;if(97<=B A&&B A<=102)u.k=(t.k|(1<<(B A-97)));else u.k=t.k;u.m=t.m+1;q.push(u);}}cout<<-1;}