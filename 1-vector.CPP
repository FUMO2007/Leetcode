#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec(5,10);
    //vector<int> vec = {1,2,3,4};
    cout << vec.size() << endl;
    vec.push_back(123);
    int x = vec[1];
    int y = vec.at(5);
    cout << x << "\n" << y << endl;
    //vec.reserve(1000);
    //for(int i = 0;i < 1000;i++){
    //    vec.push_back(i);
    //}
    //cout << vec.size() << endl;
    //for(int j = 0;j < vec.size();j++){
    //   cout << vec.at(j) << endl;
    //}
    //for (auto it = vec.begin(); it != vec.end(); ++it) {
    //    std::cout << *it << " ";
    //}
    for (int element : vec) {
        std::cout << element << " ";
    }
    cout << "\n" ;
    vec.erase(vec.begin()+5);
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    cout << "\n" ;
    vec.clear();
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vector<int>().swap(vec);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}
