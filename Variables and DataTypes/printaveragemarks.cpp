#include <iostream>
using namespace std;
int main() {
    float eng;
    float math;
    float sci;
    cout<<"enter english marks : ";
    cin>>eng;

    cout<<"enter math marks : ";
    cin>>math;

    cout<<"enter sci marks : ";
    cin>>sci;

    float avg = (eng + math + sci) / 3;
    cout<<"avg marks = "<<avg<<endl; // In cpp int/int = int

    return 0;
}