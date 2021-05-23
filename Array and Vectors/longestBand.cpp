#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

// Using sort
int solve(vector<int> arr){
    int n = arr.size();
    int maxLength = 0;
    int c = 0;
    sort(arr.begin(), arr.end());
    vector<int> v;
    v.push_back(arr[0]);
    for(int i = 1; i < n; i++){
        if (arr[i] != arr[i - 1])
            v.push_back(arr[i]);
    }
    for(int i = 0; i < v.size(); i++){
        if (i > 0 && v[i] == v[i - 1] + 1)
            c++;
        else
            c = 1;
        maxLength = max(maxLength, c);
    }
    return maxLength;
}

// Using unordered set
int solve2(vector<int> arr){
    int n = arr.size();
    int maxLength = 0;
    unordered_set<int> s;
    for(int i = 0; i < n; i++)
        s.insert(arr[i]);
    for(auto element : arr){
        int parent = element-1;
        int c = 1;
        if(s.find(parent) == s.end()){
            int next = element+1;
            while(s.find(next) != s.end()){
                next++;
                c++;
            }
        }
        maxLength = max(maxLength, c);
    }
    return maxLength;
}

int main(){
    vector<int> arr{1,9,0,3,18,5,2,4,10,12,6, 7};
    cout << "Sort Output: " << solve(arr) << "\n";
    cout << "Unordered Set Output: " << solve2(arr) << "\n";
    return 0;
}
