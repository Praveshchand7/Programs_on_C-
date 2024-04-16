//
//  main.cpp
//  swapnumbers
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here.. USE one name conventions such as Camel case or snake or Pascal.
    
    int a = 1;
    int b = 2;
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    
    
    
    cout << "The number of a and b are change " << endl ;
    cout << a << endl ;
    cout << b << endl ;
    return 0;
}
