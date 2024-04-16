//
//  main.cpp
//  rolling_dice
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
#include <cstdlib> // standard library for random numbers
#include <ctime>  // Jan 1 1970

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    const int min_value = 1;
    const int max_value = 6;
    srand(time (0));
    short first = (rand() % (max_value - min_value + 1)) + min_value;  //random generator
    short second = (rand() % (max_value - min_value + 1)) + min_value;
   
    cout << first  <<  endl   << second  << endl;


    return 0;
}

