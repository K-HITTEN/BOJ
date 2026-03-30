#include<iostream>

using namespace std;

int arr[5];

void print(){
    for(int i = 0; i < 5; i++)cout << arr[i] << ' ';
    cout << '\n';
}

bool check(){
    for(int i = 0; i < 5; i++){
        if(arr[i]-1 != i)return false;
    }
    return true;
}

void calc(){
    if(arr[0]>arr[1]){
        swap(arr[0], arr[1]);
        print();
    }
    if(arr[1]>arr[2]){
        swap(arr[1], arr[2]);
        print();
    }
    if(arr[2]>arr[3]){
        swap(arr[2], arr[3]);
        print();
    }
    if(arr[3]>arr[4]){
        swap(arr[3],arr[4]);
        print();
    }
    if(!check())calc();
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 5; i++)cin >> arr[i];
    calc();
}