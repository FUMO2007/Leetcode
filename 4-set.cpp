#include<set>
#include<iostream>
using namespace std;

int main(){
    set<int> SET;    //unordered_set<int>一样
    SET.insert(10);
    SET.insert(9);
    SET.insert(8);
    for(int num : SET){
        cout << num << " ";
    }
    if(SET.find(20) != SET.end()){
        std::cout << "20 is in the set." << endl;
    } 
    else {
        std::cout << "20 is not in the set." << endl;
    }

    SET.erase(10);

    for (int num : SET) {
        std::cout << num << " ";
    }
    
    if (SET.empty()) {                               //是否为空
        std::cout << "The set is empty." << endl;
    } else {
        std::cout << "The set is not empty." << endl;
    }
    cout << "The set contains " << SET.size() << " elements." << endl;
    
    cout<< SET.count(10);

}