#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        // Map each color to a set of positions where it appears
        map<int, set<int>> color_positions;
        for (int i = 0; i < N; i++) {
            int color;
            cin >> color;
            color_positions[color].insert(i);
        }

        // Assign integers to the positions in the sets
        vector<int> color_order;
        map<int, int> color_integers;
        int current_integer = 1;
        for (auto& [color, positions] : color_positions) {
            color_order.push_back(color);
            for (int position : positions) {
                if (position > 0 && color_integers[color_positions[color].lower_bound(position)->operator--()] > current_integer) {
                    cout << "Case #" << t << ": IMPOSSIBLE" << endl;
                    goto done;
                }
                color_integers[position] = current_integer;
            }
            current_integer++;
        }

        // Output the colors in the order of their assigned integers
        cout << "Case #" << t << ":";
        for (int color : color_order) {
            cout << " " << color;
        }
        cout << endl;

        done:;
    }

    return 0;
}
