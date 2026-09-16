#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    switch(n % 3){
        case 0:
            cout << "n is divisible by 3" << endl;
            break;
        case 1:
            cout << "n % 3 = 1" << endl;
            break;
        case 2:
            cout << "n % 3 = 2" << endl;
            break;
    }
    return 0 ;
}