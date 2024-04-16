//
//  main.cpp
//  if_statement
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int sales;
    
    cout << "Enter the more than sales amount";
    cin  >> sales;
    
    double commision;
    
    if (sales <=10'000)
        commision = .1;
    else if ( sales <=15'000)
        commision = .15;
    else
        commision = .2;
    
    cout << commision << endl;
   
    return 0;
}
