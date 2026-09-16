#include <iostream>
#include <vector>
#include <map>
using namespace std;

class solution {
    public:
    vector<int> twosum(vector<int>& nums, int target){
        map<int,int> M;
        for(int i = 0;i < nums.size();i++){
            if(M.find(target-nums[i]) != M.end()){
                return {M[target-nums[i]],i};
            }
            M[nums[i]] = i;
        }
        return {} ;
    } 
};
 
int main(){
    vector<int> vec{2,7,11,15};
    int target = 9;
    solution num1;
    vector<int> a = num1.twosum(vec,target);
    cout << a[0] << "," << a[1] << endl;
    return 0;
}