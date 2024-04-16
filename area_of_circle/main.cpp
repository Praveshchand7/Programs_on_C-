//
//  main.cpp
//  calculate the area of a circle,
//  use of power and floor standard_library
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
#include <cmath>
//use of math library in C++, so that we could use ceil, floor and pow functions.

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double result = floor(1.2);
    cout << result << endl;
    
    double power = pow(2, 3);
    cout << power << endl;
    
    // area of circle
    const double pi = 3.14;
    double radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = pi * pow(radius, 2);
    cout << "The area of the circule is : " << area  << endl;
    
    
    
    
    
    return 0;
}
