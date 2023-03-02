#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int r[t];
    for(int i=0; i<t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> rs;
        int p=0;
        int count = 0;
        for(int j=1; j<n; j++) {
            string tempS = s;
            string s1 = tempS.substr(p, j-1);
            string s2 = tempS.substr(j+1, n);
            string finalString = s1+s2;
            if(find(rs.begin(), rs.end(), finalString) == rs.end()) {
                rs.push_back(finalString);
                count++;
            }
        }
        r[i] = count;
    }
    for(int k=0; k<t; k++) {
        cout << r[k] << endl;
    }
    return 0;
}
