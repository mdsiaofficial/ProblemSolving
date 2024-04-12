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
    

    // using iteration
    ListNode* merge(ListNode* list1, ListNode* list2){
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode*result;
        ListNode*tail;

        if(list1->val <= list2->val){
            result = list1;
            tail = list1;
            list1 = list1->next;
        }else{
            result = list2;
            tail = list2;
            list2 = list2->next;
        }

        while (list1!=NULL && list2!=NULL)
        {
            if(list1->val <= list2->val){
                tail->next = list1;
                tail = list1;
                list1 = list1->next;
            }else{
                tail->next = list2;
                tail = list2;
                list2 = list2->next;
            }


        }

        if(list1 == NULL) tail->next = list2;
        else tail->next = list1;

        return result;
    }

    // using recursion
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }else{
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }

    string to_my_critics(int a, int b, int c){
        if(a+b >= 10) return "Yes";
        else if(a+c >=10) return "Yes";
        else if(b+c >= 10) return "Yes";
        else return "No";
    }
};

int main() {
    Solution soln;

    int t; cin>>t;

    while (t--)
    {
        int a, b, c; cin>>a>>b>>c;
        cout<<soln.to_my_critics(a, b, c)<<endl;
    }
    


    return 0;
}
