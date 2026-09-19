#include<iostream>
#include<cmath>
using namespace std;    

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int num = 0;
        while (x > num){
            num = num * 10 + x % 10;//反转后面数字
            x /= 10;
        }
        return x == num || x ==num /10;//如果是奇数位数，num会多一位，所以要除以10
    }
};

int main(){
    bool res = Solution().isPalindrome(12321);
    cout << res << endl;
    return 0;
}