#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};




class Solution {
public:
    
    ListNode* deleteDuplicates(ListNode* head) {
        // recursive
        // if(head == NULL or head->next == NULL) return head;
        // ListNode* NewHead = deleteDuplicates(head->next);
        // if(head->val==NewHead->val) return NewHead;
        // else head->next=NewHead; return head;

        // iteration
        if(head == NULL or head->next == NULL) return head;
        ListNode* temp = head;
        while (temp->next!=NULL){
            if(temp->val == temp->next->val){
                ListNode * del = temp->next;
                temp->next = del->next;
                delete del;
            }else{
                temp = temp->next;
            }
        }
        return head;
        

    }
};

int main() {
    Solution soln;


    
    return 0;
}
