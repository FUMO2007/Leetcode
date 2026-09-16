#include<iostream>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int nums = 0;
        int num = 0;
        map<char , int> MAP;
        for(int n = 0 ; n < s.size() ; n++){    
            num += 1;
            if(num > nums){
                nums = num ;
            }
            if(MAP.find(s[n]) != MAP.end()){
                MAP.clear();
                num = 0;
            }
            MAP[s[n]] = num;
        }
        return nums;
    }
};