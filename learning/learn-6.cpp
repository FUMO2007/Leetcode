#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello world";
    str.push_back('!');
    cout << str << endl;

    string str2 = "hello";
    string s3 = str2 + " world";
    cout << s3 << endl;
    
    s3.pop_back();
    cout << s3 << endl;

    str2.insert(5, " world");
    cout << str2 << endl;

    string str4 = "hello world";
    str4.insert(5, 5,'x');
    cout << str4 << endl;

    string str5 = "llo";
    size_t n = str.find(str5);
    cout << n << endl;

    string str6 = "hello world hello everyone";
    n = str6.find(str5 , n+1);//find("llo")
    cout << n << endl;

    n = str6.find("everyday" , n+1, 5);
    cout << n << endl;

    string str7 = str.substr(6, 5);
    cout << str7 << endl;

    //stoi
    //sotl
    //stod
    //stof
}