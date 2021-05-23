#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*int solve(vector<int> arr){
    int n = arr.size();
    int totalWater = 0;
    for(int i = 0; i < n; i++){

    }
    return totalWater;
}*/

int solve2(vector<int> arr){
    int totalWater = 0;
    int n = arr.size();
    vector<int> left(n, 0);
    vector<int> right(n, 0);

    left[0] = arr[0];
    right[n-1] = arr[n-1];
    if(n <= 2){
        return 0;
    }
    for(int i = 1; i < n; i++){
        left[i] = max(left[i-1], arr[i]);
        right[n-i-1] = max(right[n-i], arr[n-i-1]);
    }
    for(int i = 0; i < n; i++){
        totalWater += min(left[i], right[i]) - arr[i];
    }
    return totalWater;
}

int main(){
    vector<int> arr{0,1,0,2,1,0,1,3,2,1,2,1};
    //cout << "Using nested loops for water store: " << solve(arr) << "\n";
    cout << "Using 2 arrays left and right: " << solve2(arr) << "\n";
    return 0;
}

