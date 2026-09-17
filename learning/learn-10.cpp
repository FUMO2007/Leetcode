#include<iostream>
#include<algorithm>

using namespace std;

//自定义1
    bool cmp(int x, int y){
        return x > y;
    }
int main(){
    int arr[] = {4,5,6,9,7,1,2,8,5,4,2};
    int sz = sizeof(arr) / sizeof(arr[0]);
    sort(arr , arr + sz , cmp);
    for (int i = 0 ;i < sz ; i++){
         cout << arr[i] << " ";  
    }
    cout << endl;
    return 0;
}

//自定义2
// struct cmp{
//     bool operator()(int x, int y){
//         return x > y;
//     }
// }cmp;
// int main(){
//     int arr[] = {4,5,6,9,7,1,2,8,5,4,2};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     sort(arr , arr + sz , cmp);
//     for (int i = 0 ;i < sz ; i++){
//          cout << arr[i] << " ";  
//     }
//     cout << endl;
//     return 0;
// }

//顺序排序
// int main(){
//     int arr[] = {4,5,6,9,7,1,2,8,5,4,2};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     sort(arr , arr + sz);
//     for (int i = 0 ;i < sz ; i++){
//         cout << arr[i] << " ";  
//     }
//     cout << endl;
//     return 0;
// }