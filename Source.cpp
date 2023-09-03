// P04 Air Travel Cost Calculator
//		Determine the air travel cost based on age and number of checked bags
// Samantha Roldan
//

#include <iostream>  
using namespace std;

int main() {

	const double CHILDREN_OLDER_THAN_2_AND_UNDER_13 = 0.9;
	const double SENIORS_60_OR_OLDER = 0.8;
	const int SECOND_BAG = 25;
	const int THIRD_OR_MORE_BAG = 60;
	int flightCost;
	int totalCost;
	int passengerAge;
	int numCheckedBags;

	cout << "*** P04: Air Travel Cost Calculator ***" << endl;
	cout << endl;

	cout << "Flight cost: ";
	cin >> flightCost;
	cout << "Passenger age: ";
	cin >> passengerAge;
	cout << "Number of checked bags: ";
	cin >> numCheckedBags;

	//total cost depending on age
	totalCost = 0;
	if (passengerAge <= 2) {
		totalCost = flightCost * 0;
	} 
	else if ((passengerAge > 2) && (passengerAge < 13)) {
		totalCost = flightCost * CHILDREN_OLDER_THAN_2_AND_UNDER_13;
	}
	else if (passengerAge >= 60) {
		totalCost = flightCost * SENIORS_60_OR_OLDER;
	}
	else {
		totalCost = flightCost;
	}

	//total cost depending on how many checked bags they have

	if (numCheckedBags == 2) {
		totalCost = totalCost + SECOND_BAG;
	}
	if (numCheckedBags > 2) {
		totalCost = totalCost + SECOND_BAG + (THIRD_OR_MORE_BAG * (numCheckedBags - 2));
	}

	//output the total travel cost
	cout << endl;
	cout << "Travel Cost: $" << totalCost << endl;
	
	return 0;
}