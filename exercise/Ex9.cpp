#include<iostream>
#include<cmath>
using namespace std;    

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int num = x;
        int i = 0;
        while(num){
            num /= 10;
            i++;
        }
        for(int j = i/2 ; j != 0 ; j--){
            int a = x / pow(10, i-1);
            int b = x % 10;
            x = x % (int)pow(10, i-1);
            x = x / 10;
            i -= 2;
            if(a == b){
                continue;
            }
            else{
                return false;
            }  
        }
        return true;
    }
};

int main(){
    bool res = Solution().isPalindrome(12321);
    cout << res << endl;
    return 0;
}