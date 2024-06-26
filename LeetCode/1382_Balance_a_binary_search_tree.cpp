#include<bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
// #define nl cout<<"\n"
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    /**
     * Traverses a binary tree in inorder and stores the values in a vector.
     *
     * @param root The root node of the binary tree.
     * @param inorder A reference to a vector where the inorder traversal values will be stored.
     */
  void inTraverse(TreeNode* root, vector<int>& inorder) {
    if (!root) return;
    inTraverse(root->left, inorder);
    inorder.push_back(root->val);
    inTraverse(root->right, inorder);
  }

  TreeNode* contructBalancedBST(vector<int>& in, int l, int h) {
    if (l > h) return NULL;
    int m = l + (h - l) / 2;
    TreeNode* curr = new TreeNode(in[m]);
    curr->left = contructBalancedBST(in, l, m - 1);
    curr->right = contructBalancedBST(in, m + 1, h);
    return curr;
  }
  TreeNode* balanceBST(TreeNode* root) {
    if (!root) return NULL;
    vector<int> inorder;
    inTraverse(root, inorder);
    return contructBalancedBST(inorder, 0, inorder.size() - 1);
  }
};


int main() {
  fastio;

  Solution s;
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->left = new TreeNode(3);
  root->left->right = new TreeNode(4);
  root->right = new TreeNode(5);
  root->right->left = new TreeNode(6);
  root->right->right = new TreeNode(7);
  TreeNode* balanced = s.balanceBST(root);
  vector<int> inorder;
  s.inTraverse(balanced, inorder);
  for (int i : inorder) {
    cout << i << " ";
  }
  cout << endl;





  return 0;
}

