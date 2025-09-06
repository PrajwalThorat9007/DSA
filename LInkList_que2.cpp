#include <bits/stdc++.h>

using namespace std;

// Definition of singly linked list:
struct ListNode {
    int val;
    ListNode* next;
    ListNode() {
        val = 0;
        next = NULL;
    }
    ListNode(int data1) {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode* next1) {
        val = data1;
        next = next1;
    }
};

class Solution {
public:
    // Function to sort the linked list
    ListNode* sortList(ListNode* head) {
        vector<int> F1;
        ListNode* temp=head;
        if(head==nullptr) return head;
        while(temp!=nullptr){
            F1.push_back(temp->val);
            temp=temp->next;
        }
        sort(F1.begin(),F1.end());
        free(temp);
        ListNode* F2=new ListNode();
        temp=F2;
        int i=0;
        while(i<F1.size()){
            ListNode* val=new ListNode(F1[i]);
            temp->next=val;
            temp=temp->next;
            i++;
        }
        return F2->next;
    }
};

// Function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to create new node
ListNode* newNode(int data) {
    ListNode* node = new ListNode(data);
    return node;
}

int main() {
    // Creating a linked list
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(0);
    head->next->next->next = newNode(1);
    head->next->next->next->next = newNode(2);
    head->next->next->next->next->next = newNode(0);
    head->next->next->next->next->next->next = newNode(1);

    // Print original list
    cout << "Original list: ";
    printList(head);

    // Sort the list
    Solution sol;
    head = sol.sortList(head);

    // Print sorted list
    cout << "Sorted list: ";
    printList(head);

    return 0;
}