//
//  main.cpp
//  for_loop
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int numbers [] = { 1, 2, 3 , 6};
    // sizeof(numbers):16  and sizeofint: 4
    
    for (int i=0 ; i < sizeof(numbers) / sizeof(int)  ; i++)
    
            
    cout << "The faactorial of "<< numbers[i] << endl;
            
    
    
    

    return 0;
}
