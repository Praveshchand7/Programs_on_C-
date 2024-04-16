//
//  main.cpp
//  array
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>


using namespace std;

int main(int argc, const char * argv[]) {
    
    int numbers [5];  // numbers[] = {10,20}; or numbers [5]= {10,20};
    cout << numbers << endl;
    
    numbers[1] =10;
    
    cout << numbers[1] << endl;
    cout << numbers[4] << endl ;   // size -1
    cout << numbers[5] << endl << endl << endl; // garbage value
    
    
    // Store 3 user name in an arry and then print the first name
    
    string names[3];
    
    cout << "Name : " ;
    getline(cin, names[0]);
    
    cout << "Name : " ;
    getline(cin, names[1]);
    
    cout << "Name : " ;
    getline(cin, names[2]);
    
    cout << names[0] << endl;
    
    return 0;
}
