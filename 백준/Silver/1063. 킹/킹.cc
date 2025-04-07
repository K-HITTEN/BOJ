#include<iostream>
#include<queue>

using namespace std;

int ar, ac, br, bc, N;
int dy[8] = {0,0,1,-1,-1,-1,1,1}, dx[8] = {1,-1,0,0,1,-1,1,-1};

int convert_column(string s){
    switch(s[0]){
        case 'A' : 
            return 0;
        case 'B' :
            return 1;
        case 'C' :
            return 2;
        case 'D' : 
            return 3;
        case 'E' :
            return 4;
        case 'F' :
            return 5;
        case 'G' :
            return 6;
        case 'H' :
            return 7;
    }
    return -1;
}

char revert_column(int n){
    switch(n){
        case 0 : 
            return 'A';
        case 1 :
            return 'B';
        case 2 :
            return 'C';
        case 3 : 
            return 'D';
        case 4 :
            return 'E';
        case 5 :
            return 'F';
        case 6 :
            return 'G';
        case 7 :
            return 'H';
    }
    return '0';
}


int convert_row(string s){
    switch(s[1]){
        case '8' : 
            return 0;
        case '7' :
            return 1;
        case '6' :
            return 2;
        case '5' : 
            return 3;
        case '4' :
            return 4;
        case '3' :
            return 5;
        case '2' :
            return 6;
        case '1' :
            return 7;
    }
    return -1;
}

char revert_row(int n){
    switch(n){
        case 0 : 
            return '8';
        case 1 :
            return '7';
        case 2 :
            return '6';
        case 3 : 
            return '5';
        case 4 :
            return '4';
        case 5 :
            return '3';
        case 6 :
            return '2';
        case 7 :
            return '1';
    }
    return '0';
}

int convert_operation(string s){
    if(s == "R")return 0;
    if(s == "L")return 1;
    if(s == "B")return 2;
    if(s == "T")return 3;
    if(s == "RT")return 4;
    if(s == "LT")return 5;
    if(s == "RB")return 6;
    return 7;
}


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string a, b, s;
    cin >> a >> b >> N;
    ac = convert_column(a);
    ar = convert_row(a);
    bc = convert_column(b);
    br = convert_row(b);
    queue<pair<int,int>> q;
    q.push({ar,ac});
    while(N--){
        cin >> s;
        pair<int,int> tmp = q.front();
        q.pop();
        int num = convert_operation(s);
        int ny = tmp.first+dy[num], nx = tmp.second+dx[num];
        if(ny<0||ny>=8||nx<0||nx>=8){
            q.push(tmp);
            continue;
        }
        if(ny==br&&nx==bc){
            br += dy[num];
            bc += dx[num];
            if(br<0||br>=8||bc<0||bc>=8){
                br -= dy[num];
                bc -= dx[num];
                q.push(tmp);
                continue;
            }
        }
        q.push({ny,nx});
    }
    pair<int,int> king = q.front();
    cout << revert_column(king.second) << revert_row(king.first) << "\n" << revert_column(bc) << revert_row(br);
}