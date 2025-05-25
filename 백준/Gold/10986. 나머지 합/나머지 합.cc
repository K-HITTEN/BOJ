#include <iostream>
#include <vector>

typedef long long ll;

int main(){
   std::cin.tie(0)->ios_base::sync_with_stdio(0);
   int N, M;
   std::cin >> N >> M;

   std::vector<ll> prefix(N+1),remainder(N+1),num(M, -1);
   num[0] = 0;

   for (int i = 1; i <= N; ++i){
      std::cin >> prefix[i];
      prefix[i] += prefix[i - 1];
      remainder[i] = prefix[i] % M;
   }
   ll count = 0;

   for (int i = 1; i <= N; ++i){
      count += ++num[remainder[i]];
   }

   std::cout << count;
}