#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int compare(string s1, string s2){
    string x = s1.append(s2);
    string y = s2.append(s1);
    return x.compare(y) > 0 ? 1 : 0;
}

string concatenate(vector<int> numbers){
    int n = numbers.size();
    vector<string> numS;
    string ans = "";
    for(int i = 0; i < n; i++)
        numS.push_back(to_string(numbers[i]));

    sort(numS.begin(), numS.end(), compare);
    for(int i = 0; i < n; i++)
        ans += numS[i];

    return ans;
}

int main(){
    vector<int> v{10,11,20,30,3};
    cout << concatenate(v);
    return 0;
}
