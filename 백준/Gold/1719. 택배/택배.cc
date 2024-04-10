#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int result[201][201],arr[201][201], n, m, tmp1, tmp2, tmp3;

int main(void){
    fastio;
    fill(&arr[0][0],&arr[200][201],987654321);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        arr[tmp1][tmp2] = tmp3;
        result[tmp1][tmp2]= tmp2;
        arr[tmp2][tmp1] = tmp3;
        result[tmp2][tmp1] = tmp1;
    }
    for(int i = 1; i <= n; i++)arr[i][i] = 0;
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j =1; j <= n; j++){
                if(arr[i][j]> arr[i][k]+arr[k][j]){
                    arr[i][j] = arr[i][k]+arr[k][j];
                    result[i][j] = result[i][k];
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= n; j++){
            if(i == j)cout << "- ";
            else cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}