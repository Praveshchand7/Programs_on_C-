//
//  main.cpp
//  switch_statement : Create basic calculator
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char input;
    cout << "Enter the operator character: ";
    cin >> input ;
    
    int first_number, second_number;
    
    cout << "Enter the first number:  "  ;
    cin >> first_number ;
    cout << "Enter the second number " ;
    cin >> second_number ;
    
    
    switch (input){
            
        
            
            case '+' :
            cout <<  "Adding the numbers :" << first_number + second_number  << endl ;
            break;
            
            case '*' :
            cout <<  "Multiply the numbers :" << first_number * second_number  << endl ;
            break;
            
            case '/' :
            cout <<  "Division of the numbers : " << first_number / second_number  << endl ;
            break;
            
            case '-' :
            cout <<  "Substraction of the numbers :" << first_number - second_number  << endl ;
            break;
            
            default:
            cout <<  "Sorry can't find any ";
            
                
    }
   
    return 0;
}
