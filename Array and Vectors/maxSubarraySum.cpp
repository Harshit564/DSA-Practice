#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int> arr){
    int n = arr.size();
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum < 0)
            sum = 0;
        maxSum = max(sum, maxSum);
    }
    return maxSum;
}

int main(){
    vector<int> arr{-1,2,3,4,-2,6,-8,3};
    cout << maxSubarraySum(arr) << "\n";
    return 0;
}
