#include <unordered_set>
#include <iostream>
using namespace std;

class solution{
    public :
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> SET;
        int n = s.size();
        int rk = -1 , ans = 0 ;
        for(int i = 0 ; i < n ; ++i){
            if(i != 0){
                SET.erase(s[i-1]);
            }
            while(rk + 1 < n && SET.count(rk+1)){
                SET.insert(s[rk+1]);
                ++rk;
            }
            ans = max(ans , rk-i+1);
        }
        return ans;
    }
};
