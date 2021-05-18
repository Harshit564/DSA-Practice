#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

// Using brute force O(N2)
vector<int> solve(vector<int> arr, int target){
    vector<int> sumArray;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            if(arr[i] != arr[j] && (arr[i]+arr[j]) == target){
                sumArray.push_back(arr[i]);
                sumArray.push_back(arr[j]);
            }
        }
    }
    return sumArray;
}

// Using sorting and searching O(NlogN)
vector<int> solve2(vector<int> arr, int target){
    vector<int> sumArray;
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = arr.size() -1;
    while (i < j){
       if(arr[i] + arr[j] == target){
        sumArray.push_back(arr[i]);
        sumArray.push_back(arr[j]);
        break;
       }
       else if(arr[i] + arr[j] < target)
         i = i+1;
       else
         j = j-1;
    }
    return sumArray;
}

// Using unordered set O(N)
vector<int> solve3(vector<int> arr, int target){
    vector<int> sumArray;
    unordered_set<int> s;
    for(int i = 0; i < arr.size(); i++){
        int x = target - arr[i];
        if(s.find(x) != s.end()){
            sumArray.push_back(x);
            sumArray.push_back(arr[i]);
            return sumArray;
        }
        s.insert(arr[i]);
    }
    return {};
}

int main(){
    vector<int> arr{10, 5, 2 , 3, -6, 9 , 11};
	int S = 4;

	// Brute force
	cout << "Brute force: ";
	auto b = solve(arr,S);
	if(b.size() == 0){
		cout << "No such pair";
	}
	else{
		cout << b[0] << "," << b[1] << "\n";
	}

	// Sort and search
	cout << "\nSort 2 pointer: ";
    auto s = solve2(arr,S);
	if(s.size() == 0){
		cout << "No such pair";
	}
	else{
		cout << s[0] << "," << s[1] << "\n";
	}

	// Unordered Set
	cout << "\nUnordered Set: ";
	auto u = solve3(arr,S);
	if(u.size() == 0){
		cout << "No such pair";
	}
	else{
		cout << u[0] << "," << u[1] << "\n";
	}

	return 0;
}
