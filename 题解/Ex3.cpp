#include<iostream>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int nums = 0;
        int num = 0;
        int start = 0;
        map<char , int> MAP;
        for(int n = 0 ; n < s.size() ; n++){    
            num += 1;
            if(MAP.find(s[n]) != MAP.end() && MAP[s[n]] >= start){
                num = n - MAP[s[n]];
                start = MAP[s[n]] + 1;
            }
            if(num > nums){
                nums = num ;
            }
            MAP[s[n]] = n;
        }
        return nums;
    }
};