//
//  main.cpp
//  variable_initalization
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double price = 99.99;
    cout << price << endl;
    float interest_rate = 3.67F; // 3.67f; both works
    cout << interest_rate << endl;
    long file_size = 90000L; //dont use lower
    cout << file_size << endl;
    char letter = 'a';
    cout << letter << endl;
    bool is_valid = false;
    cout << is_valid << endl;
    
    // use of auto in the place of bool char long float and double. It makes easy to find the variabled assigned type .
    // If we put float is integer it only return integer.
    
    int number ;
    cout << number << endl;
    // It gives garbage value
    
    int num {};
    cout << num << endl;
    // It initalize num to 0
    
    int value = 0xFF; // same as 255
    cout << value << endl;
    
    
    // This gives very large positve number
    unsigned int numbers = -255;
    cout << numbers << endl;
    
    // This gives very large positve number but we use unsigned hardly
    unsigned int a = 0;
    a--;
    cout << a<< endl;
    
    
    

    
    
    
    
    
    return 0;
}
