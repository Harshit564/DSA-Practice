#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> productArray(vector<int> arr){
    int n = arr.size();
    vector<int> output(n,1);

    return output;
}

int main(){
    vector<int> arr{};
    auto output = productArray(arr);
    for(auto x : output)
        cout << x << ",";
    return 0;
}
