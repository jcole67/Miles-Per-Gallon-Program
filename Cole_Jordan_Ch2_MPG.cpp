//  Jordan Cole
//  CO SCI_802_26188FA19V
//  Miles Per Gallon Program
//  Calculates/displays the number of miles per gallon a car gets given total gallons and total miles.


#include <iostream>

using namespace std;

int main()
{
    auto Gallons = 15;				// Total gallons used
    auto Miles = 375;				// Total miles driven
    auto MPG = Miles / Gallons;		// Miles per gallons
	
	// Display the Miles per gallon
	cout << "The car gets " << MPG << " miles per gallon." << endl;
    
    return 0;
}
