//
//  main.cpp
//  factorial
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << "Enter the positive number ";
    int number;
    cin >> number;
    
    
    if (number < 0)
        cout << "Enter the negative number ";
    
    else{
        int factorial = 1;
        for (int i=1 ; i <= number  ; i++)
            factorial *=i;
            
            cout << "The faactorial of "<< number << "is " << factorial << endl;
            
    
    
    
    }
    return 0;
}
