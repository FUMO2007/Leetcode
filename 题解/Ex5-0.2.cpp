class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n < 2) return s;

        int begin = 0;
        int maxlen = 1;

        for (int i = 0; i < n; i++) {
            // 奇数长度回文，中心为 i
            int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > maxlen) {
                    maxlen = r - l + 1;
                    begin = l;
                }
                l--;
                r++;
            }

            // 偶数长度回文，中心为 i 和 i+1 之间
            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > maxlen) {
                    maxlen = r - l + 1;
                    begin = l;
                }
                l--;
                r++;
            }
        }
        return s.substr(begin, maxlen);
    }
};