#include <iostream>
#include <queue>
#define A [o][p]
using namespace std;char B[50][50];bool V[50][50][(1<<6)];int N,M;struct I{int x,y,k,m;};int main(void){cin>>N>>M;I t,u;for(int o=0;o<N;o++){for(int p=0;p<M;p++){cin>>B A;if(B A=='0'){t.y=o;t.x=p;}}}queue<I>q;t.k=t.m=0;q.push(t);while(!q.empty()){t=q.front();q.pop();if(B[t.y][t.x]=='1'){cout<<t.m;return 0;}for(int d=0;d<4;d++){int o=t.y+"2011"[d]-49,p=t.x+"1120"[d]-49;if(o<0||p<0||o>=N||p>=M||V A[t.k]||B A=='#')continue;if(64<B A&&B A<71&&(t.k&(1<<B A-65))==0)continue;V A[t.k]=true;u.y=o;u.x=p;if(96<B A&&B A<103)u.k=(t.k|(1<<B A-97));else u.k=t.k;u.m=t.m+1;q.push(u);}}cout<<-1;}