#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to find the maximum length of 
    substring with at most k distinct characters */
    int kDistinctChar(string& s, int k) {
       set<char> ans;
       int i=1,j=0;
       ans.insert(s[j]);
       int  count=1;
       int maxi=1,maxlen=0;
       while(i<s.length()){
         if(ans.find(s[i])==ans.end() && count<k){
           ans.insert(s[i]);
           count++;
           maxi++;
       }
        else if(ans.find(s[i])!=ans.end()){
           maxi++;
       }
       else{
           j++;
           i=j;
           maxi=1;
           count=1;
           ans.clear();
           ans.insert(s[j]);
       }
       maxlen=max(maxlen,maxi);
       i++;
    }
    return maxlen;
    }
};

int main() {
    string s = "aaabbccd";  
    int k = 2;
    
    // Create an instance of Solution class
    Solution sol;
    
    int length = sol.kDistinctChar(s, k);
    
    // Print the result
    cout << "Maximum length of substring with at most " << k << " distinct characters: " << length << endl;
    
    return 0;
}