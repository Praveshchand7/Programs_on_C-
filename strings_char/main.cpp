//
//  main.cpp
//  strings_char
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
 

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char ch = 'a';
    cout << ch << endl;
    cout << +ch << endl;;
    
    //string name = "Pravesh";
    //cout << name << endl ;
    
    string name;
    cout << "Enter the fullname:" ;
    
    getline(cin, name);
    cout << "HI " << name << endl; // doesnt  print after space.
    
    
    
    
   
    return 0;
}
