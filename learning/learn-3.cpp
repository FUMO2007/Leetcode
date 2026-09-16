#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char arr[] = "hello world";
    cout << arr << endl;
    memset(arr + 2, 'x', 5);
    cout << arr << endl;

    int res[5] = {1, 2, 3, 4, 5};
    for( int i : res){
        cout << i << " " ;
    }
    cout << endl;
    memset(res, 0, sizeof(res));
    for(int i = 0; i < 5; i++){
        cout << res[i] << " ";
    }
    cout << endl;

    int a[10] = {1, 2, 3, 4, 5 ,6 , 7, 8, 9, 10};
    int b[10] = {0};
    for(int i = 0; i < 10; i++){
       cout << b[i] << " ";
    }
    cout << endl;
    memcpy(b, a, sizeof(a));
    for(int i = 0; i < 10; i++){
        cout << b[i] << " ";
    }
    cout << endl;
}

