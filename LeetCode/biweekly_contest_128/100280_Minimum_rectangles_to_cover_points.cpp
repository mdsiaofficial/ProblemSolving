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
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        // Sort points array based on x-coordinate
        sort(points.begin(), points.end());

        int count = 0;
        int max_x_covered = -1;

        for (const auto& point : points) {
            if (point[0] > max_x_covered) {
                // Current point is not covered by any previous rectangle
                max_x_covered = point[0] + w;
                count++;
            } else {
                // Current point is covered by a previous rectangle
                max_x_covered = min(max_x_covered, point[0] + w);
            }
        }

        return count;
    }
};
int main() {
    Solution soln;

    // Example usage
    vector<vector<int>> points1 = {{2,1},{1,0},{1,4},{1,8},{3,5},{4,6}};
    int w1 = 1;
    cout << "Example 1 Output: " << soln.minRectanglesToCoverPoints(points1, w1) << endl;

    vector<vector<int>> points2 = {{0,0},{1,1},{2,2},{3,3},{4,4},{5,5},{6,6}};
    int w2 = 2;
    cout << "Example 2 Output: " << soln.minRectanglesToCoverPoints(points2, w2) << endl;

    vector<vector<int>> points3 = {{2,3},{1,2}};
    int w3 = 0;
    cout << "Example 3 Output: " << soln.minRectanglesToCoverPoints(points3, w3) << endl;

    return 0;
}