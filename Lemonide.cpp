#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    /* Function to find whether each customer can 
       be provided with correct change */
    bool lemonadeChange(vector<int>& bills) {
        int R5=0;
        int R10=0;
        int R20=0;
        int i=0;
        bool ans=true;
        while(i<bills.size() && ans){
            if(bills[i]==5){
                R5++;
            }
            if(bills[i]==10){
                R10++;
                R5--;
            }
            if(bills[i]==20){
                R20++;
                if(R10>0){
                    R5--;
                    R10--;}
                else{
                    R5-=3;
                }
            }
            if(R5<0 || R10<0 || R20<0) ans=false; 
            i++;
        }
        return ans;
    }
};

int main() {
    vector<int> bills = {5, 5, 5, 10, 20};
    cout << "Queues of customers: ";
    for (int bill : bills) {
        cout << bill << " ";
    }
    cout << endl;
    Solution solution;
    bool ans = solution.lemonadeChange(bills);
    if (ans)
        cout << "It is possible to provide change for all customers." << endl;
    else
        cout << "It is not possible to provide change for all customers." << endl;
    return 0;
}
