#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int likes = 0;
        int max_likes = 0;
        int min_likes = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                likes += 1;
            else
            {
                if (likes > 0)
                    likes -= 1;
            }
            max_likes = max(max_likes, likes);
            min_likes = min(min_likes, likes);
        }
        cout << max_likes << endl;
        likes = 0;
        max_likes = 0;
        min_likes = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                likes += 1;
            else
            {
                if (likes > 0)
                    likes -= 1;
            }
            max_likes = max(max_likes, likes);
            min_likes = min(min_likes, likes);
        }
        cout << min_likes << endl;
    }
    return 0;
}