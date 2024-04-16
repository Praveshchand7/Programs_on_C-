//
//  main.cpp
//  functions_max_number
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
using namespace std;

// void is the return type greet is the function name, and we are printing hello worlds and we are passing arguments in the function greet.

int number(int first, int second){
    
    if (first > second)
        return first;
    
    else
        return second;
    
}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    //greet ("Pravesh" , "Chand"); // calling -invoking -executing
    
    int value = number(8, 9);
    cout << value;
    
    

    return 0;
}
