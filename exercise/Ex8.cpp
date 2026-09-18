#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        string::iterator it = s.begin();
        bool T = true;
        int N = 1;
        long long res = 0;
        for(;it != s.end();++it){
            
            if(T){
                if(*it == ' ' ) continue;
                if(*it == '-'){
                    N = -1;
                    T = false;
                    continue ;
                }
                if(*it == '+'){
                    T = false;
                    continue;
                }
            }
            if(*it >= '0' && *it <= '9'){
                res = res*10 + (*it - '0');
                T = false;
                if(res > INT_MAX){
                    if(N == 1){
                        return INT_MAX;
                    }
                    else{
                        return INT_MIN;
                    }
                }
            }
            else   break;
        }
        return (int)(res * N);
    }
};