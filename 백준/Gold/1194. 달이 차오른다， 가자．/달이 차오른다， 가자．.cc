#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;
char B[50][50] = {0,}; 
bool V[50][50][(1<<6)] = {false,};
int Y[4]={-1,1,0,0},X[4]={0,0,-1,1},N,M;
struct I{int x,y,k,m;};
int main(void){fastio;cin>>N>>M;I t,u;for(int i=0;i<N;i++){for(int j=0;j<M;j++){cin>>B[i][j];if(B[i][j]=='0'){t.y=i;t.x=j;}}}queue<I>q;t.k=t.m=0;q.push(t);while(!q.empty()){t=q.front();q.pop();if(B[t.y][t.x]=='1'){cout<<t.m;return 0;}for(int d=0;d<4;d++){int o=t.y+Y[d],p=t.x+X[d];if(o<0||p<0||o>=N||p>=M||V[o][p][t.k]||B[o][p]=='#')continue;if(65<=B[o][p]&&B[o][p]<=70&&(t.k&(1<<(B[o][p]-65)))==0)continue;V[o][p][t.k]=true;u.y=o;u.x=p;if(97<=B[o][p]&&B[o][p]<=102)u.k=(t.k|(1<<(B[o][p]-97)));else u.k=t.k;u.m=t.m+1;q.push(u);}}cout<<-1;}