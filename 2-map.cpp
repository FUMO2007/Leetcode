#include <map>
#include <iostream>
#include <string>
using namespace std ;

int main(){
    //map<key_type, value_type>
    map<string,int> mymap;
    mymap["Alice"] = 20;
    mymap["Bob"] = 25;
    mymap["Charlie"] = 35;
    mymap.insert({"Char", 92});
    //for(map<string,int>::iterator it = mymap.begin();it != mymap.end();++it){
    //    cout << it->first << " is " << it->second << endl;
    //  }
    for (auto &p : mymap) {
        std::cout << p.first << " : " << p.second << std::endl;
    }
    mymap.erase("Alice");

    if (mymap.find("Alice") != mymap.end()) {// 键存在
        cout << "1" << endl;
    }
    else cout << "0" << endl;

    cout << mymap.count("Bob") << endl;// key 是否存在（返回 0 或 1）

    mymap.clear();
    size_t size = mymap.size();
    //cout << size << endl;
    cout << mymap.empty() << endl;// 是否为空

    return 0;
    

}