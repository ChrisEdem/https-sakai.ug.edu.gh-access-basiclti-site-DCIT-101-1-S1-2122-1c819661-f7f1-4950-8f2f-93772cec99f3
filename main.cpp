#include <iostream>

using namespace std;

int main()
{
    int  height;
    int  base;
    int  area;

    cout  << "Input your Triangle's Height \n";
    cin   >> height;

    cout  << "Input your Triangle's base \n";
    cin   >> base;

    cout  << "The Area of your Triangle is \n";
    area= 0.5*(height * base);

    cout << area;

    return 0;
}
