#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

void getSubset(string s, string o, vector<string> &v){
    if(s.size() == 0){
        v.push_back(o);
        return;
    }

    char c = s[0];
    string redInput = s.substr(1);
    getSubset(redInput, o+c, v);
    getSubset(redInput, o, v);
}

bool compare(string s1, string s2){
    if(s1.length() == s2.length()){
        return s1 < s2;
    }
    return s1.length() < s2.length();
}

int main(){
    string s;
    cin >> s;
    string out = "";
    vector<string> v;
    getSubset(s, out, v);

    sort(v.begin(), v.end(), compare);
    for(auto x : v){
        cout << x << ",";
    }
    return 0;
}
