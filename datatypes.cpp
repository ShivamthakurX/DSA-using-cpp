#include <iostream>
#include <iomanip>// We know that the default cout value is 5, To increase it's value we can add this line
using namespace std;
int main() {
    int age = 25;
    int marks = -200;
    char grade = 'A'; //We use single quote to store char value
    bool isAdult = true;
    float PI = 3.14159265359; // It can print right output till 7 numbers
    double PI2 = 3.14159265359; // It can print right output till 15 numbers

    cout<<age<<" " <<marks<<" "<<grade<<" "<<isAdult<<endl;
    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of char = "<<sizeof(char)<<endl;
    cout<<"size of bool = "<<sizeof(bool)<<endl;
    cout<<"size of float = "<<sizeof(float)<<endl;
    cout<<"size of double = "<<sizeof(double)<<endl;
    cout<<setprecision(12)<<"PI = "<<PI<<endl;//setprecision is used to change cout default value
    cout<<setprecision(12)<<"PI2 = "<<PI2<<endl;


    return 0;
}