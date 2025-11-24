// Relational Operator = T(1) / F(0)

#include<iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 3;

     cout << (a < b) <<endl; // 0
     cout << (a > b) <<endl; // 1 
     cout << (a <= b) <<endl; // 0
     cout << (a >= b) <<endl; // 1
     cout << (a == b) <<endl; // 0 
     cout << (a != b) <<endl; // 1

    return 0;
}