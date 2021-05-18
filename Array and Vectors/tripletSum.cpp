#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Brute force O(N3)
vector<vector<int>> solve(vector<int> arr, int target){
    vector<vector<int>> result;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            for(int k = j; k < arr.size(); k++){
                if((arr[i]+arr[j]+arr[k]) == target && arr[i] != arr[j] && arr[j] != arr[k] && arr[k] != arr[i]){
                    result.push_back({arr[i],arr[j],arr[k]});
                }
            }
        }
    }
    return result;
}

// Sort and 2 pointer pairSum O(n2)
vector<vector<int>> solve2(vector<int> arr, int target){
    vector<vector<int>> result;
    for(int i = 0; i < arr.size(); i++){
        int j = i+1;
        int k = arr.size()-1;
        while(j < k){
            int currentSum = arr[i];
            currentSum += arr[j];
            currentSum += arr[k];
            if(currentSum == target){
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(currentSum > target)
                k--;
            else if(currentSum < target)
                j++;
        }
    }
    return result;
}


int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
	int S = 18;

    // Brute force
    cout << "Brute force: \n";
    auto u = solve(arr,S);
	if(u.size() == 0){
		cout << "No such pair";
	}
	else{
		for(int i = 0; i < u.size(); i++){
            for(int x : u[i]){
                cout << x << ",";
            }
            cout << "\n";
		}
	}

	// Two pointer and sort
	cout << "\nTwo pointer and sort: \n";
	auto t = solve(arr,S);
	if(t.size() == 0){
		cout << "No such pair";
	}
	else{
		for(int i = 0; i < t.size(); i++){
            for(int x : t[i]){
                cout << x << ",";
            }
            cout << "\n";
		}
	}
    return 0;
}
