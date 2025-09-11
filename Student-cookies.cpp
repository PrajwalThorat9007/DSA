#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Function to find the maximum number of content children
    int findMaximumCookieStudents(vector<int>& Student, vector<int>& Cookie) {
    sort(Student.begin(),Student.end());
    sort(Cookie.begin(),Cookie.end());
    int i=0,j=0,count=0;
    while(i<Student.size() && j<Cookie.size()){
        if(Student[i]<=Cookie[j]){
            count++;
            i++;
            j++;
        }
        j++;
    }
    return count;
    }
};
int main() {
    // Example input
    vector<int> Student = {1, 2};
    vector<int> Cookie = {1, 2, 3};

    // Create a Solution object
    Solution solution;

    // Call the findMaximumCookieStudents function
    int result = solution.findMaximumCookieStudents(Student, Cookie);

    // Output the result
    cout << "Number of students satisfied: " << result << endl;

    return 0;
}