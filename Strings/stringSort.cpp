#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

string extractToken(string s, int key){
    char *token = strtok((char *)s.c_str(), " ");
    while(key > 1){
        token = strtok(NULL, " ");
        key--;
    }
    return (string)token;
}

int convertToInt(string s){
    int n = 0;
    int p = 1;
    for(int i = s.length()-1; i >=0; i--){
       n += ((s[i]-'0')*p);
       p = p*10;
    }
    return n;
}

bool numericSort(pair<string, string> s1, pair<string, string> s2){
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexicoSort(pair<string, string> s1, pair<string, string> s2){
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return key1 < key2;
}

int main(){
    int t;
    cin >> t;

    cin.get();

    string temp;
    vector<string> v;

    for(int i = 0; i < t; i++){
        getline(cin, temp);
        v.push_back(temp);
    }

    int key;
    string ordering, reversal;

    cin >> key >> reversal >> ordering;

    vector<pair<string, string>> vp;

    for(int i = 0; i < t; i++){
        vp.push_back({v[i], extractToken(v[i],key)});
    }

    if(ordering == "numeric"){
        sort(vp.begin(), vp.end(), numericSort);
    } else {
        sort(vp.begin(), vp.end(), lexicoSort);
    }

    if(reversal == "true"){
        reverse(vp.begin(), vp.end());
    }
    for(int i = 0; i < t; i++){
        cout << vp[i].first << "\n";
    }
    return 0;
}
