//
//  main.cpp
//  functions
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
using namespace std;

// void is the return type greet is the function name, and we are printing hello worlds and we are passing arguments in the function greet.

void greet (string name){
    
    cout << "Hello Worlds" << name << endl;
}


string fullName (string firstName , string lastName){
    
    return firstName + "" + lastName;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //greet ("Pravesh" , "Chand"); // calling -invoking -executing
    
    string name = fullName ( "Pravesh" , "CHAND");
    greet(name);
    cout << name << endl;
    

    return 0;
}
