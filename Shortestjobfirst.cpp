#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*Function to calculate total waiting 
    time using Shortest Job First algorithm*/
    long long solve(vector<int>& bt) {
      long long ans=0;
      vector<int> Ans={1};
      sort(bt.begin(),bt.end());
      for(int i=1;i<bt.size()-1;i++){
         int val=bt[i]+Ans[i-1];
         Ans.push_back(val);
      }
      ans=accumulate(Ans.begin(),Ans.end(),0);
      return ans/bt.size();
    }
};

int main() {
    vector<int> jobs = {1, 2, 3, 4};

    cout << "Array Representing Job Durations: ";
    for (int i = 0; i < jobs.size(); i++) {
        cout << jobs[i] << " ";
    }
    cout << endl;

    Solution solution;
    long long ans = solution.solve(jobs);
    cout << "Total waiting time: " << ans << endl;

    return 0;
}