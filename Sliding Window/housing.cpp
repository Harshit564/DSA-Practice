#include<iostream>
#include<vector>
using namespace std;

void getPlots(vector<int> p, int k){
    int n = p.size();
    int i = 0;
    int j = 0;
    int cs = 0;

    while(j < n){
        cs += p[j];
        j++;

        while(i<j && cs > k){
            cs = cs - p[i];
            i++;
        }

        if(cs == k){
            cout << i << " " << j-1 << "\n";
        }
    }
}

int main(){
    vector<int> p{1,3,2,1,4,1,3,2,1,1,2};
    int k = 8;
    getPlots(p,k);
    return 0;
}
