#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

bool isSubSet(string s1, string s2){
    int i = s1.length()-1;
    int j = s2.length()-1;
    while(i >= 0 and j >= 0){
        if(s2[j] == s1[i]){
            i--;
            j--;
        }else{
            i--;
        }
    }
    if(j == -1){
        return true;
    }
    return false;
}

int main(){
    string s1 = "coding minutes";
    string s2 = "cines";
    if(isSubSet(s1, s2)){
        cout << "s2 is a subset of s1";
    } else {
        cout << "s2 is not a subset of s1";
    }
    return 0;
}
