#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string convert_to_digital_time(int minutes){
    if(minutes%60 < 10){
        return to_string(minutes/60)+":0"+to_string(minutes%60);
    }
    return to_string(minutes/60)+":"+to_string(minutes%60);
}

int main(){
    int minutes;
    cin >> minutes;
    cout << convert_to_digital_time(minutes);
    return 0;
}
