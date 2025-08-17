#include <iostream>
using namespace std;
int main()
{
    int grade[5], sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter your grade for Subject " << (i+1) << ": ";
        cin >> grade[i];
        sum += grade[i];
    }

    int average = sum / 5;
    cout << "Your average grade is " << average << endl;

    return 0;
}

