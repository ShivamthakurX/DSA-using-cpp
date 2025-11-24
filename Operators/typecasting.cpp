// Conversion of data from one computer to another is called Typecasting 

// Implicit Conversion (automatically / type promotion) : It is done by compiler to avoid data loss

// bool > char > int > float > double
/*
#include <iostream>
using namespace std;
int main() { 
    //cout << (10/3.0)<<endl; // 3.3333
    //cout << (10/3)<<endl; // 3
    
    cout<<('A' + 1)<<endl; 
    cout<<('B' + 1)<<endl;
    
    cout<<('a' + 1)<<endl; 
    cout<<('b' + 1)<<endl;
    
    
    return 0;
}
*/

// Explicit Typecasting : It is forced by programmer

#include <iostream>
using namespace std;
int main () {
    float PI = 3.14;
    cout << (int)('A') <<endl;
    cout << (int)(PI) <<endl;
    cout<<((float)10/3) << endl; //3.3333
    cout<<(char) ('A' + 1) << endl; // B


    return 0;
}