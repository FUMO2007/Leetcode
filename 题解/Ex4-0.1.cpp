#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if((n1 + n2) % 2 != 0){
            int k = (n1 + n2) / 2 + 1;
            int k2 = k / 2 ;
            int k01 = k2;
            int k02 = k2;
            int D1 = -1 , D2 = -1;
            while(true){
                if(k == 1){
                    return min(nums1[k01],nums2[k02]);
                }
                int P1 = nums1[k01];
                int P2 = nums2[k02];
                if(P1 <= P2){
                    k = k - k/2;
                    k2 = k/2 ;
                    D1 = k01;
                    k01 = D1 + k2 ;
                    k02 = D2 + k2 ;
                }
                else{
                    k = k - k/2;
                    k2 = k/2 ;
                    D2 = k02;
                    k01 = D1 + k2;
                    k02 = D2 + k2;
                }
            }
        }
        return 0;
    }
};