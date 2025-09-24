/*In given cards find the maximum score possible by choosing cards from either end of the array or from begining. The score is the sum of the values of the chosen cards.*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to calculate the maximum
    score after picking k cards*/
    int maxScore(vector<int>& cardScore, int k) {
        int i=0,sum=0,count=0;
        int j=cardScore.size()-1;
        while(i<j && count<k){
            if(cardScore[i]>cardScore[j]){
                sum+=cardScore[i];
                i++;
            }
            else{
                sum+=cardScore[j];
                j--;
            }
            count++;
        }
        return sum;
    }

};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
   
    // Create an instance of the Solution class
    Solution sol;

    int result = sol.maxScore(nums, 3);

    // Output the maximum score
    cout << "The maximum score is:\n";
    cout << result << endl;

    return 0;
}