//
//  main.cpp
//  formatting_output
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
#include <iomanip> //input output manipulator

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << left;
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
    << setw(10) <<"Summer" << setw(10) <<"Hot" << endl;
    
    cout << fixed << setprecision(2) << 12.345678 << endl;
    return 0;
}
