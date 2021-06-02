#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

// Easiest approach xD
/*vector<int> productArray(vector<int> arr){
    int n = arr.size();
    vector<int> output;
    int product = 1;
    int cProduct = 1;
    for(int i = 0; i < n; i++){
        product *= arr[i];
    }
    for(int i = 0; i < n; i++){
        cProduct = product/arr[i];
        output.push_back(cProduct);
    }
    return output;
}*/

//

vector<int> productArray(vector<int> arr){
    int product = 1;
    int flag = 0;
    int n = arr.size();
    vector<int> output(n,1);
    for(int i = 0; i < n; i++) {
        if (arr[i] == 0)
            flag++;
        else
            product *= arr[i];
    }
    for(int i = 0; i < n; i++) {
        if (flag > 1) {
            output[i] = 0;
        }
        else if(flag == 0)
            output[i] = (product / arr[i]);
        else if (flag == 1 && arr[i] != 0) {
            output[i] = 0;
        }
        else
            output[i] = product;
    }
    return output;
}

int main(){
    vector<int> arr{1,2,3,4,5};
    auto output = productArray(arr);
    for(auto x : output)
        cout << x << ",";
    return 0;
}
