#include <iostream>
#include <string>
#include <vector>
using namespace std;

// most efficient solution
int main(){
    string s = "hello world, what are you doing?";
    int index = s.find(" ");
    while(index >= 0){
        s.replace(index, 1, "%20");
        index = s.find(" ", index+1);
    }
    cout << s;
    return 0;
}
