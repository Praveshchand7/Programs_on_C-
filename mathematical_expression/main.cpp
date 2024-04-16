//
//  main.cpp
//  constant_values
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    const double pi = 3.14;
    
    int x = 10;
    int y = 3;
    
    int add = x + y;
    int sub = x - y;
    int mod = x % y;
    int div = x / y;
    int mul = x*y;
    
    cout << " add :" <<  add  << endl ;
    cout << " sub :" <<  sub  << endl ;
    cout << " mod :" <<  mod  << endl ;
    cout << " div :" <<  div  << endl ;
    cout << " mul :"  << mul << endl ;
    
     y = x++ ;
    cout << "y value is " << y << endl ;
    cout << "x value is " << x << endl ;
    
    
    
     y = ++x;
   
    cout << "y value is " << y << endl ;
    cout << "x value is " << x << endl ;
    
    /* To see difference on using the int and double */
    
    int a = 10 , b = 5 ;
    
    int c =  (a + 10)/ (3 * b);
    cout << "c value is " << c << endl ;
    
    double d = 10 , e = 5 ;
    
    double f =  (d + 10)/ (3 * e);
    cout << "c value is " << f << endl ;
    
    
    
    
    
    
    return 0;
}
