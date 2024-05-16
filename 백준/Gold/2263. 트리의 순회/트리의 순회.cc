#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int n, inorder[100001], postorder[100001], arr[100001];

void search(int is, int ie, int ps, int pe){
    if(is>ie||ps>pe)return;
    int root = arr[postorder[pe]];
    int left_size = root - is;
    int right_size = ie - root;
    cout << inorder[root] << ' ';
    
    search(is,root-1,ps,ps+left_size-1);
    search(root+1,ie,ps+left_size,pe-1);
}

int main(void){
    fastio;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> inorder[i];
        arr[inorder[i]] = i;
    }
    for(int i = 1; i <= n; i++){
        cin >> postorder[i];
    }
    search(1,n,1,n);
}