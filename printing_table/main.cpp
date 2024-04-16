//
//  main.cpp
//  printing_table
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
#include <iomanip> //input output manipulator

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
  
    cout  << left << setw(15) << "Course" << setw(10) << "Student" << endl
          << setw(15) << "C++" << setw(10) <<  right << "100" <<left << endl
          <<setw(15) << "Javascript" << setw(10) <<  right << "50" <<left << endl << endl;
    
    // To learn about data type size
    
    cout << "The size of the integer is given as :";
    cout << sizeof(int) << endl;
    
    cout << numeric_limits<int>::min() << endl
         <<numeric_limits<int>::max() << endl;
    
    int number = numeric_limits<int>::max();
    number++;
    cout << number << endl;  // overflow scenarion
    
    int number1 = numeric_limits<int>::min();
    number1--;
    cout << number1 << endl;  // underflow scenarion
   
    
  
    return 0;
}

    
 
