//
//  main.cpp
//  sales_tax
//
//  Created by Pravesh chand on 06/04/2024.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int sales = 95000;
    cout << "The sales is : $" << sales << endl ;
    
    
    const double state_tax_rate = 0.04;
    double state_tax = state_tax_rate * 95000;
    cout << "The state tax paid : $" << state_tax  << endl ;
    
    const double county_tax_rate = 0.02;
    double county_tax = county_tax_rate * 95000;
    cout << "The county tax : $" << county_tax << endl ;
    
    double total_tax = state_tax + county_tax ;
    cout << "The total tax paid : $" << total_tax  << endl ;
    
        return 0;
}
