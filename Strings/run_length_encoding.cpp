#include<iostream>
#include<string>
using namespace std;

string compressString(string s){
    int n = s.length();
    string output;
    for(int i = 0; i < n; i++){
        int c = 1;
        while(i < n-1 and s[i+1] == s[i]){
            c++;
            i++;
        }

        output += s[i];
        output += to_string(c);
    }

    if(output.length() >= n)
        return s;
    else
        return output;
}

int main(){
    string s1 = "aaabbccddee";
    cout << compressString(s1) << "\n";

    string s2 = "abcd";
    cout << compressString(s2) << "\n";
    return 0;
}
