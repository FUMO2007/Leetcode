#include<vector>
using namespace std;    
class Solution {
public:
    int getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k){
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1 == 0){
            return nums2[k-1];
        }
        if(n2 == 0){
            return nums1[k-1];
        }
        int k2 = k / 2 - 1;
        if(k2 < 0){
            k2 = 0;
        }
        int k01 = k2 ;
        int k02 = k2 ; 
        if(k2 > n1-1){
            k01 = n1 - 1;
            k02 = k2 + k2 - (n1- 1);
        }
        if(k2 > n2-1){
            k02 = n2 - 1;
            k01 = k2 + k2 - (n2- 1);
        }
        int D1 = -1 , D2 = -1;
        while(true){
            if(D1 == n1-1){
                return nums2[D2+k];
            }
            if(D2 == n2-1){
                return nums1[D1+k];
            }
            if(k == 1){
                return min(nums1[k01],nums2[k02]);
            }
            
            int P1 = nums1[k01];
            int P2 = nums2[k02];
            if(P1 <= P2){
                k = k - min(k01-D1 , (n1-1)-D1);
                k2 = k/2 ? k/2 : 1; 
                D1 = min(k01 , n1-1);
            }
            else{
                k = k - min(k02-D2, (n2-1)-D2);
                k2 = k/2 ? k/2 : 1;
                D2 = min(k02 , n2-1);
            }
            k01 = D1 + k2 ;
            k02 = D2 + k2 ;
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