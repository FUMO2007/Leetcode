#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k){
        int n1 = nums1.size();
        int n2 = nums2.size();
        int D1 = 0, D2 = 0;
        while(true){
            if(D1 == n1){
                return nums2[D2 + k - 1];
            }
            if(D2 == n2){
                return nums1[D1 + k - 1];
            }
            if(k = 1){
                return min(nums1[D1],nums2[D2])
            }
             
            int k01 = min(D1 + k / 2 - 1 , n1-1);
            int k02 = min(D2 + k / 2 - 1 , n2-1);
            int p1 = nums1[k01];
            int p2 = nums2[k02];
            if(p1 <= p2)
            {
                k = k - (k01 - (D1 - 1));
                D1 = k01 + 1;
            }
            else{
                k = k - (k02 - (D2 - 1));
                D2 = k01 + 1;
            }

        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if((n1 + n2) % 2 != 0){
            return getKthElement(nums1, nums2, (n1+n2)/2 + 1);
        }
        if((n1 + n2) % 2 == 0){
            return (getKthElement(nums1, nums2, (n1+n2)/2)+getKthElement(nums1, nums2, (n1+n2)/2 +1))/2.0;
        }
        return 0;
    }
};