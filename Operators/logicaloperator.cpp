// AND OPERATOR
// Exp 1  |  exp 2  |  Output     
//   T    |    T    |    T
//   T    |    F    |    F
//   F    |    T    |    F
//   F    |    F    |    F

/*
#include <iostream>
using namespace std;
int main() {
    
    cout << (1 < 2) && (1 > 2); // F(0)
    
    return 0;
}
*/

// OR OPERATOR
// Exp 1  |  exp 2  |  Output     
//   T    |    T    |    T
//   T    |    F    |    T
//   F    |    T    |    T
//   F    |    F    |    F

/*
#include<iostream>
using namespace std;
int main() {
    cout << (2 == 2) || (2 !=2);
    
    
    return 0;
}
*/

// NOT OPERATOR

// It converts the expression

#include <iostream>
using namespace std;
int main () {
    cout << (!(1 ==2));
    
    return 0;
}
