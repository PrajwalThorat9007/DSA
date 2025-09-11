#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        for(int i:nums1){
            ans.insert(i);
        }
        for(int i:nums2){
            ans.insert(i);
        }
        vector<int> ans1(ans.begin(),ans.end());
        return ans1;
        
//code write here 
           }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> nums2 = {2, 3, 4, 4, 5, 11, 12};

    // Create an instance of the Solution class
    Solution finder;

    // Get union of nums1 and nums2 using class method
    vector<int> Union = finder.unionArray(nums1, nums2);

    cout << "Union of nums1 and nums2 is:" << endl;
    for (int val : Union) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}