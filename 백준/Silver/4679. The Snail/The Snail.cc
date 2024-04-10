#include <iostream>
using namespace std;
int main(){double H,D,d,U,F,c,n;while(1){cin>>H>>U>>D>>F;if(H==0)break;d=1;c=0;n=U;while(1){c+=n;if(c>H){cout<<"success on day "<<d<<"\n";break;}c-=D;if(c<0){cout<<"failure on day "<<d<<"\n";break;}d++;n-=U*(F/100.0);if(n<0)n=0;}}}