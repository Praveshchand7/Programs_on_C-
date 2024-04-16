//
//  main.cpp
//  nested loop
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // cordinates assignment
    
    
    for ( int x = 1; x <=5;  x++){
        for (int y=1; y<=5;  y++){
            cout << "(" << x << "," << y << ")" << endl;
        }
    }
    
    // Rows : 5 and get stars
    
    int row;
    cout << "Enter the positive number row : ";
    cin >> row;
    
    for ( int i= 1; i<= row;  i++){
        for (int j=0; j<i;  j++){
            cout <<  "*"  ;
        }
        cout  << "*" << endl;
    }
    
    
    return 0;
}
