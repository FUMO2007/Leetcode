class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n < 2){
            return s;
        }
        int begin=0;
        int maxlen=1;
        for(int i = 0; i < n ; i++){
            if(n - i <= maxlen){
                break;
            }
            for(int j = n-1; j != 0 ; j--){
                if(j-i+1<=maxlen){
                    break;
                }
                if(s[i]==s[j]){
                    int l = i;
                    int r = j;
                    bool ispal = true ;
                    while(l<r){
                        l++;
                        r--;
                        if(l<r && s[l]!=s[r]){
                            ispal = false;
                            break;
                        }
                    }
                    if(ispal){
                        if(j - i + 1 > maxlen){
                              maxlen = j - i + 1;
                              begin = i;
                        }
                    }
                }
            }
        }
        return s.substr(begin,maxlen);
    }
};