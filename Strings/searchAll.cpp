#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> stringSearch(string big, string small){
    //store the occurrences in the result vector
    vector<int> result = {};
    int index = big.find(small);
    while(index >= 0){
        result.push_back(index);
        index = big.find(small, index+1);
    }
    return result;
}

int main(){
    string s1 = "I liked the movie, acting in movie was great";
    string s2 = "movie";
    auto output = stringSearch(s1,s2);
    for(auto ch : output){
        cout << ch << ",";
    }
}
