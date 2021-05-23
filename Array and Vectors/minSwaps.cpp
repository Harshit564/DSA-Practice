#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(vector<int> arr){
    int minSwap = 0;
    int n = arr.size();
    pair<int, int> ap[n];
    for(int i = 0; i < n; i++){
        ap[i].first = arr[i];
        ap[i].second = i;
    }

    sort(ap, ap+n);
    vector<bool> visited(n, false);

    for(int i = 0; i < n; i++){
        int old_position = ap[i].second;
        if(visited[i] or old_position == i)
            continue;
        int node = i;
        int cycle = 0;

        while(!visited[node]){
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle += 1;
        }
        minSwap += cycle-1;
    }
    return minSwap;
}

int main(){
    vector<int> arr{5,4,3,2,1};
    cout << solve(arr) << "\n";
    return 0;
}
