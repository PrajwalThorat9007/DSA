#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestNonRepeatingSubstring(string &s) {
      int size=s.length();
      int right=0,left=0;
      set<char> S1;
      int Max=0;
      for(right=0;right<size;right++){
          while(S1.count(s[right])){
              S1.erase(s[left]);
              left++;
          }
          S1.insert(s[right]);
          Max=max(right-left+1,Max);
      }
      return Max;
    }
};

int main() {
    string input = "cadbzabcd";
    
    //Create an instance of Solution class
    Solution sol;
    
    int length = sol.longestNonRepeatingSubstring(input);
    
    //Print the result
    cout << "Length of longest substring without repeating characters: " << length << endl;
    
    return 0;
}