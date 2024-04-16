//
//  main.cpp
//  users_detail
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
    
    string street;
    string city;
    string state;
    string zip_code;
    
    cout << "Enter the street:" ;
    getline(cin, street);
    
    cout << "Enter the city:" ;
    getline(cin, city);
    
    cout << "Enter the state:" ;
    getline(cin, state);
    
    cout << "Enter the zipcode:" ;
    getline(cin, zip_code);
    
    cout << street << endl << city << endl << state << endl  << zip_code << endl; // doesnt  print after space.
    
    
    
    
   
    return 0;
}

