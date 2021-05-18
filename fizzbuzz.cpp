#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> fizzbuzz(int n){
    vector<string> ans;
        for(int i = 1; i <= n; i++){
            if(i%3 == 0){
                ans.push_back("Fizz");
            }
            else if(i%5 == 0){
                ans.push_back("Buzz");
            }
            else if(i%15 == 0){
                ans.push_back("FizzBuzz");
            }
            else{
                ans.push_back(to_string(i));
            }
        }
        return ans;
}
int main(){
    vector<string> output = fizzbuzz(15);
    for(string x : output){
        cout << x << ",";
    }
    return 0;
}
