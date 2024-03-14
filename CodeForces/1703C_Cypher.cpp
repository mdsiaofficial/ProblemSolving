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

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
// a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z


// solved //

std::vector<int> decoder(std::vector<int> current, int n, std::vector<std::pair<int, std::string>> move) {
    std::vector<int> ans;
    std::vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < n; i++) {
        int up = 0, down = 0;
        for (char c : move[i].second) {
            if (c == 'U') {
                up++;
            }
        }
        down = move[i].first - up;
        int role = down - up;
        int position = (current[i] + role + 10) % 10; // Add 10 to handle negative values
        ans.push_back(arr[position]);
    }

    return ans;
}

int main() {
    int t;
    std::cin >> t;

    for (int _ = 0; _ < t; _++) {
        int n;
        std::cin >> n;

        std::vector<int> current(n);
        for (int i = 0; i < n; i++) {
            std::cin >> current[i];
        }

        std::vector<std::pair<int, std::string>> move(n);
        for (int i = 0; i < n; i++) {
            int x;
            std::string y;
            std::cin >> x >> y;
            move[i] = {x, y};
        }

        std::vector<int> result = decoder(current, n, move);
        for (int x : result) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

/* 
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int temp;
        vector<int>pos;
        for(int i=0; i<n; i++){
            cin>>temp;
            pos.push_back(temp);
        }
        
        int stringLength;
        vector<string>moves;
        string s;
        for(int i=0; i<n; i++){
            cin>>stringLength>>s;
            moves.push_back(s);
        }

        
        for (string ss: moves)
        {
            int count = 0;
            for (int i = 0; i <ss.length() ; i++)
            {
                if(ss[i]=='U'){

                    if(pos[i]==0){
                        pos[i]=9;
                    }else{
                        // count--;
                        pos[i]--;
                    }

                }else if(ss[i]=='D'){
                    
                    if(pos[i]==9){
                        pos[i]=0;
                    }else{
                        // count++;
                        pos[i]++;
                    }

                }
                
            }
        }

        for(int x: pos){
            cout<<x<<" ";
        }

        cout<<nl;
    }
    

    return 0;
}


 */