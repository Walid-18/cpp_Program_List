#include <iostream>
using namespace std;
int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter the number of seconds: ";
    cin >> totalSeconds;

    // Perform calculations
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Display the result
    cout << totalSeconds << " seconds is equivalent to: "
         << hours << " hours, "
         << minutes << " minutes, and "
         << seconds << " seconds." << endl;

    return 0;
}
