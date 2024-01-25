#include <iostream>
#include <string>

using namespace std;

int main(){
	int T,tmp;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cout << "#" << i << " ";
    	cin >> tmp;
        int day, month;
        day = tmp %100;
        tmp /= 100;
        month = tmp % 100;
        tmp /= 100;
        string year,months, days;
        if(tmp <10){
        	year = "000" + to_string(tmp);
        }else if(tmp <100){
        	year = "00"+to_string(tmp);	
        }else if(tmp <1000){
        	year = "0" +to_string(tmp);
        }else{
            year = to_string(tmp);
        }
        if (day == 0 || day >31){
        	cout <<  -1 << "\n";
        }
        if(month <10){
        	months = "0" + to_string(month);
        }else{
        	months = to_string(month);	
        }
        if(day <10){
        	days = "0" + to_string(day);
        }else{
        	days = to_string(day);	
        }
        if (day == 0 || day >31){
        	cout <<  -1 << "\n";
        }
        switch(month){
            case 2 : if ( day >28){
            	cout <<  -1 << "\n"; 
                break;
            	}else {
                	cout<< year <<"/"<< months<<"/"<<days <<"\n";
                	break;
            	}	
            case 4:
            case 6:
            case 9:               
            case 11: if ( day >30){
            	cout <<  -1 << "\n"; 
                break;
            }else {
                cout << year <<"/"<< months<<"/"<<days <<"\n";
                break;
            }
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: 
                cout << year <<"/"<< months<<"/"<<days <<"\n";
                break;
            default:
                cout <<  -1 << "\n"; 
        }
    }
}