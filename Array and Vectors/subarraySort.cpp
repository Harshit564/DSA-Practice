#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Brute force using sort and comparing sorted & original array O(NlogN)
pair<int, int> solve(vector<int> arr){
    vector<int> copyArr(arr);
    sort(copyArr.begin(), copyArr.end());

    int i = 0;
    int n = arr.size();
    while(i < n && arr[i] == copyArr[i]){
        i++;
    }
    int j = n-1;
    while(j >= 0 && arr[j] == copyArr[j]){
        j--;
    }
    if(i == n)
        return {-1,-1};
    return {i,j};
}

// Using smallest and largest that need to be sorted O(N)
bool outOfOrder(vector<int> arr, int idx){
    int x = arr[idx];
    if(idx == 0)
        return x > arr[1];
    if(idx == arr.size()-1)
        return x < arr[idx-1];
    return x > arr[idx+1] or x < arr[idx-1];
}
pair<int, int> solve2(vector<int> arr){
    int n = arr.size();
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < n; i++){
        int x = arr[i];
        if(outOfOrder(arr, i)){
            smallest = min(smallest, x);
            largest = max(largest, x);
        }
    }

    if(smallest == INT_MAX)
        return {-1,-1};

    int left = 0;
    while(smallest >= arr[left])
        left++;

    int right = n-1;
    while(largest <= arr[right])
        right--;

    return {left, right};
}

int main(){
    vector<int> arr{1,2,3,4,5,8,6,7,9,10};
    // Brute force
    auto output = solve(arr);
    cout << "Brute force: " << output.first << "," << output.second << "\n";

    // O(n)
    auto output2 = solve2(arr);
    cout << "Smallest and largest approach: " << output2.first << "," << output2.second << "\n";
    return 0;
}
