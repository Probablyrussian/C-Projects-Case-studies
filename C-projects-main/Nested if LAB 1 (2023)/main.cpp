#include <iostream>
using namespace std;

int main()
{
    float grade_result = 0;
    cout << "Please enter your Numeric Grade: ";
    cin >> grade_result;

    if (grade_result >= 0 && grade_result <= 74.99) {
        cout << "Your Point Grade is: 5.00";
    } else if (grade_result >= 75.00 && grade_result <= 75.99) {
        cout << "Your Point Grade is: 3.00";
    } else if (grade_result >= 76.00 && grade_result <= 78.99) {
        cout << "Your Point Grade is: 2.75";
    } else if (grade_result >= 79.00 && grade_result <= 81.99) {
        cout << "Your Point Grade is: 2.50";
    } else if (grade_result >= 82.00 && grade_result <= 84.99) {
        cout << "Your Point Grade is: 2.25";
    } else if (grade_result >= 85.00 && grade_result <= 87.99) {
        cout << "Your Point Grade is: 2.00";
    } else if (grade_result >= 88.00 && grade_result <= 90.99) {
        cout << "Your Point Grade is: 1.75";
    } else if (grade_result >= 91.00 && grade_result <= 93.99) {
        cout << "Your Point Grade is: 1.50";
    } else if (grade_result >= 94.00 && grade_result <= 96.99) {
        cout << "Your Point Grade is: 1.25";
    } else if (grade_result >= 97.00) {
        cout << "Your Point Grade is: 1.00";
    }

    return 0;
}
