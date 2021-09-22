#include<iostream>
using namespace std;

int main(){
    char path[1000];
    cin.getline(path,1000);

    int x = 0;
    int y = 0;
    for(int i = 0; path[i] != '\0'; i++){
        switch(path[i]){
            case 'N':
                x++;
                break;
            case 'S':
                x--;
                break;
            case 'E':
                y++;
                break;
            case 'W':
                y--;
                break;
        }
    }

    // Quadrants
    if(x >= 0 and y >= 0){
        while(y--){
            cout << "N";
        }
        while(x--){
            cout << "E";
        }
    } else if(x >= 0 and y <= 0){
        while(y++){
            cout << "S";
        }
        while(x--){
            cout << "E";
        }
    } else if(x <= 0 and y >= 0){
        while(y--){
            cout << "N";
        }
        while(x++){
            cout << "W";
        }
    } else if(x <= 0 and y <= 0){
        while(y++){
            cout << "S";
        }
        while(x++){
            cout << "W";
        }
    }
}
