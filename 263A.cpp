// 263A. Beautiful matrix

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;

    for (int rows = 0; rows < 5; rows++){
        for (int columns = 0; columns < 5; columns++){
            cin >> x;
            if (x == 1){
                cout << abs(rows - 2) + abs(columns - 2);
                return 0;
            }
        }
    }
    return 0;
}