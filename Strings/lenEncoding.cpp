#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

string compressString(const string &str){
    int n = str.size();
    string ans = "";
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
        freq[str[i] - 'a']++;
    for (int i = 0; i < n; i++){
        if(freq[str[i]-'a'] == 1){
            ans += str[i];
        }else if (freq[str[i] - 'a'] != 0) {
            ans += str[i] + to_string(freq[str[i] - 'a']);
            freq[str[i] - 'a'] = 0;
        }
    }
    return ans;
}
int main(){
    string s = "abcddfffsaaaaa";
    cout << compressString(s);
    return 0;
}
