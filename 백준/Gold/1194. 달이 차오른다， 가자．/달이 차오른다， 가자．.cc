#include <iostream>
#include <queue>
#define A [o][p]
using namespace std;char B[50][50];bool V[50][50][(1<<6)];int N,M,o,p,d;struct I{int y,x,k,m;};int main(){cin>>N>>M;I t;queue<I> q;for(o=0;o<N;o++)for(p=0;p<M;p++){cin>>B A;if(B A=='0')q.push({o,p,0,0});}while(!q.empty()){t=q.front();q.pop();if(B[t.y][t.x]=='1'){cout<<t.m;return 0;}for(d=0;d<4;d++){o=t.y+"2011"[d]-49;p=t.x+"1120"[d]-49;if(o<0|p<0|o>=N|p>=M|V A[t.k]|B A=='#'|(64<B A&B A<71&(t.k&(1<<B A-65))==0))continue;V A[t.k] = true;if(96<B A&B A<103)q.push({o,p,(t.k|(1<<B A-97)),t.m+1});else q.push({o,p,t.k,t.m+1});}}cout<<-1;}