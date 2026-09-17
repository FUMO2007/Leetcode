#include<iostream>
#include<algorithm>

using namespace std;

struct Stu{
    string name;
    int chinse;
    int math;
    int total;
};

ostream& operator<<(ostream& os, struct Stu& s)
{
    os << "name" << ":" << s.name <<endl; 
    os << "chinese" << ":" << s.chinse <<endl;
    os << "math" << ":" << s.math <<endl;
    os << "total" << ":" << s.total <<endl;

    return os;

}

int main(){
    struct Stu s = {"zhangshan", 90, 80, 170};
    cout << s <<endl;
}