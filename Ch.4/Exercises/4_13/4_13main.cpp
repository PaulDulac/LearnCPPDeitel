// Exercise 4_13 in deitel
// Author: Paul Dulac

#include "VehicleMPG.h"
using namespace std;

int main()
{
	VehicleMPG myCar;

	while (true)
	{
		myCar.getMilesDriven();

		if ( myCar.returnMilesDriven() != -1 )
		{
			myCar.getGallonsUsed();
			myCar.calculateMPGThisTrip();
			myCar.calculateMPGAverage();
		}
		else
			break;
	}

	return 0;
}