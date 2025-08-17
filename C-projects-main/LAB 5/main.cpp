#include <iostream>

using namespace std;

int main()
{
    float b, h, a;
    cout<<"Area of Triangle"<<endl;
    //design
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n";
    cout<<"Input the Base of your Triangle: ";
    cin>> b;
    cout<<"Input the Height of your Triangle: ";
    cin>> h;
    a = (b * h)/2.0;
    cout <<"The area of your Triangle is: "<<a;
    return 0;
}
