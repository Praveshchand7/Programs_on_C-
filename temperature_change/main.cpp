//
//  main.cpp
//  temperature_convert from fahrenheit to celsius
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << "Enter the temperature in Fahrenheit" << endl;
    double fahrenheit, celcius ;
    cin >> fahrenheit;
    
    celcius = (fahrenheit  - 32 ) / 1.832 ;
    
    cout << "The temperature in celcius is : " << celcius << " C" << endl;
    
    
    
    return 0;
}
