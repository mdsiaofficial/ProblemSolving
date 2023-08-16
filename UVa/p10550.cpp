#include <iostream>
using namespace std;
// solved
int main() {
    while (true) {
        int start, combo1, combo2, combo3;
        cin >> start >> combo1 >> combo2 >> combo3;

        if (start == 0 && combo1 == 0 && combo2 == 0 && combo3 == 0) {
            break; // Exit the loop when the input is 0 0 0 0
        }

        // Calculate degrees for each step
        int degrees_per_turn = 360; // degrees per full turn
        int degrees_clockwise = 2 * degrees_per_turn; // 2 full turns
        int degrees_first_number = (start - combo1 + 40) % 40 * (degrees_per_turn / 40); // clockwise
        int degrees_counter_clockwise = degrees_per_turn; // 1 full turn
        int degrees_second_number = (combo2 - combo1 + 40) % 40 * (degrees_per_turn / 40); // counter-clockwise
        int degrees_third_number = (combo2 - combo3 + 40) % 40 * (degrees_per_turn / 40); // clockwise

        // Calculate total degrees rotated
        int total_degrees = degrees_clockwise + degrees_first_number + degrees_counter_clockwise +
                            degrees_second_number + degrees_third_number;

        cout << total_degrees << endl;
    }

    return 0;
}
