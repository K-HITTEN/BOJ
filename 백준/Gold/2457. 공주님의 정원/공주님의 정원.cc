#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio

using namespace std;

int calc(int month){
    int day = 0;
    switch(month){
        case 12 : day += 30;
        case 11 : day += 31;
        case 10 : day += 30;
        case 9 : day += 31;
        case 8 : day += 31;
        case 7 : day += 30;
        case 6 : day += 31;
        case 5 : day += 30;
        case 4 : day += 31;
        case 3 : day += 28;
        case 2 : day += 31;
        case 1 : break;
    }
    return day;
}

int main(void){
    fastio;
    int N, tmp, tmp2, tmp3, tmp4;
    cin >> N;
    priority_queue<tuple<int,int,int>> flower;
    for(int i = 0; i < N; i++){
        cin >> tmp >> tmp2 >> tmp3 >> tmp4;
        tmp = calc(tmp);
        tmp += tmp2;
        tmp3 = calc(tmp3);
        tmp3 += tmp4;
        if(tmp >= 335) continue;
        if(tmp3 < 60) continue;
        if(tmp3 > 335) tmp3 = 335;
        flower.push({tmp3,tmp3-tmp,tmp});
    }
    if(get<0>(flower.top()) <= 60){
        cout << 0;
        return 0;
    }
    int start = 335, end = 335, count = 0;
    while(!flower.empty()){
        int left = get<2>(flower.top()), right = get<0>(flower.top());
        flower.pop();
        while(!flower.empty()&&get<2>(flower.top())>=left)flower.pop();
        if(!flower.empty() && get<0>(flower.top()) >= start)continue;
        if(right < start){
            cout << 0; 
            return 0;
        }
        count++;
        start = left;
        if(start<=60)break;
    }
    if(start>60){
        cout << 0;
        return 0;
    }
    cout << count;
    
}