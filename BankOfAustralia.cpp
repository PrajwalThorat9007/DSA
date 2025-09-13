/*que you have given string of integer
if digit in integer is ascending and non repeating return Type1
if digit in integer is descending and non repeating return
Type2
if digit in integer is ascending and repeating return Type3
if digit in integer is decending and repeating return Type4
if digit in integer is same and repeating return Type5
none of the above then Type6*/

#include<bits/stdc++.h>
using namespace std;
void whatIsType(vector<int> que){
    int i=0;
    while(i<que.size()){
        bool asc=true;
        bool desc=true;
        bool repeat=false;
        bool same=true;
        
        int num=que[i];
        int prev=num%10;
        num/=10;
        while(num!=0){
            int digit=num%10;
            if(prev==digit){
                repeat=true;
            }
            else if(prev>digit){
                desc=false;
                same=false;
            }
            else {
                asc=false;
                same=false;
            }
            prev=digit;
            num/=10;
        }
        if(same && repeat) cout<<"Type5 ";
        else if(asc && repeat) cout<<"Type3 ";
        else if(desc && repeat) cout<<"Type4 ";
        else if(asc && !repeat) cout<<"Type1 ";
        else if(desc && !repeat) cout<<"Type2 ";
        else cout<<"Type6 ";
        i++;
        
    }
}
int main(){
    vector<int> que={12,21,112,211,111,121};
    whatIsType(que);
    return 0;
}