#include <iostream>
int main(){int N,a,b,c=0;std::cin>>N>>a>>b;while(a!=b){a=(a/2)+(a%2);b=(b/2)+(b%2);c++;}std::cout<<c;}