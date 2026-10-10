#include <iostream>
using namespace std;

int main() {

    char unit;
    double temp_value;

    if (!(cin >> unit >> temp_value) || (unit != 'C' && unit != 'F')) {
        cout << "Invalid input" << endl;
        return 0;
    }

    if (unit == 'C') {
        temp_value = (temp_value * 9.0 / 5.0) + 32.0;
        unit = 'F';
    } else {
        temp_value = (temp_value - 32.0) * 5.0 / 9.0;
        unit = 'C';
    }
    cout << temp_value << " " << unit << endl; 
    return 0;
}
