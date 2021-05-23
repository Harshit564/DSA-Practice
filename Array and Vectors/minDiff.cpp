#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

pair<int, int> minDifference(vector<int> A,vector<int> B){
    int an = A.size();
    int bn = B.size();
    int a = 0, b = 0;
    int result = INT_MAX;
    bool isTrue = false;
    pair<int, int> p;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    while(a < an && b < bn){
        if (abs(A[a] - B[b]) < result){
            result = abs(A[a] - B[b]);
            p.first = A[a];
            p.second = B[b];
        }
        if (A[a] < B[b])
            a++;
        else
            b++;
    }
    return p;
}

int main(){
    vector<int> a{23,5,10,17,30};
    vector<int> b{26,134,135,14,19};
    auto output = minDifference(a, b);
    cout << output.first << "," << output.second << "\n";
    return 0;
}
