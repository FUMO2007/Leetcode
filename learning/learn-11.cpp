#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

struct S{
    string name;
    int age;
};

struct Cmp{
    bool operator()(struct S a , struct S b){
        return a.age < b.age;
    }
}cmp;

bool cmp_s_age(struct S a , struct S b){
    return a.age < b.age;
}
//升序
bool cmp_s_name(struct S a , struct S b){
    return a.name < b.name;
}

int main (){
    struct S arr[] = {{"zhangshan", 20}, {"lisi", 25}, {"wangwu", 18}};
    int sz = sizeof(arr) / sizeof(arr[0]);
    sort(arr , arr + sz , cmp);
    for (int i = 0 ;i < sz ; i++){
        cout << arr[i].name << ":" << arr[i].age << endl;  
    }
    return 0;
}