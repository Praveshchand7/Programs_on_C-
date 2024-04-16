//
//  main.cpp
//  random_numbers
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
#include <cstdlib> // standard library for random numbers
#include <ctime>  // Jan 1 1970

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    long elapsedSeconds = time (0);
    cout << elapsedSeconds;
    srand(elapsedSeconds);  //random generator
    int number = rand() % 10;
    cout << number << endl;


    return 0;
}
