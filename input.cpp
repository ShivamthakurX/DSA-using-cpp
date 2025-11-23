/*#include <iostream>
using namespace std;
int main() {
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    cout<<"Your age is "<<age<<endl;
    return 0;

}
*/

#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    //Input a
    cout<<"enter a : ";
    cin>>a;

    //Input b
    cout<<"enter b : ";
    cin>>b;

    int sum = a + b;
    int prod = a * b;
    int subs = a - b;
    int div = a / b;

    cout<<"sum = "<<sum<<endl;
    cout<<"prod = "<<prod<<endl;
    cout<<"subs = "<<subs<<endl;
    cout<<"div = "<<div<<endl;
    return 0;
}