//
//  main.cpp
//  logical_operators
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    bool isCitizen = false;
    bool hasBachelorDegree = true;
    short yearOfExperence = 10;
    
    bool isEligible = isCitizen  && (hasBachelorDegree || yearOfExperence >=2);
    cout << boolalpha << isEligible << endl;
    return 0;
}
