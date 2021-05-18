#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> arr){
    int n = arr.size();
    int maxLength = 0;
    for(int i = 1; i <= n-2;){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            int c = 1;
            int j = i;
            while(j >= 1 && arr[j] > arr[j-1]){
                j--;
                c++;
            }
            while(i <= n-2 && arr[i] > arr[i+1]){
                i++;
                c++;
            }
            maxLength = max(maxLength, c);
        }
        else{
            i++;
        }
    }
    return maxLength;
}

int main(){
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    cout << solve(arr);
    return 0;
}
