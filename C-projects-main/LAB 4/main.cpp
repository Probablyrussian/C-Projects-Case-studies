#include <iostream>

using namespace std;

int main()
{
    int grade [5] = {};
    for (int i=0; i<=4; i++) {
        cout <<"Input your Grade to your Subject " <<(i+1)<<": ";
        cin>> grade [i];
    }
    int sum = grade [0] + grade [1] + grade [2] + grade [3]
    + grade [4];
    int average = sum / 5;
    cout<<"The general average of your Grades combined is: " <<average;


    return 0;
}

