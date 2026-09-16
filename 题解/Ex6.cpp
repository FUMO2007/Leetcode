#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows < 2){
            return s;
        }
        int i = 0;
        bool T = true;
        vector<string> N (numRows);
        for(char C : s){
            N[i].push_back(C);
            if(i == 0){
                T == true;
            }
            if(i == numRows -1){
                T == false;
            }
            if(T){
                i++;
            }
            else{
                i--;
            }
        }
        string res;
        for(const string &ROW : N){
            res += ROW;
        }
        return res;
    }
};