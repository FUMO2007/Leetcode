#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        vector<int> y;
        long long res = 0;
        long long i = 1;
        int N = 1;
        if(x < 0){
            N = -1;
        }
        else if(x == 0){
            return x;
        }
        while(x!= 0){
            int z = x % 10;
            y.push_back(z);
            x =x / 10;
        }
        vector<int>::iterator it;
        for(it = y.end()-1;it >= y.begin();--it){
            res +=(long long) *it * i;
            i *= 10;
        }
        if(res > INT_MAX || res < INT_MIN){
        return 0;
        }
        return (int)res;
    }
};