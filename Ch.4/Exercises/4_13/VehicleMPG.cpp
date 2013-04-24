// Class defines functions to track the MPG a vehicle gets
// Author: Paul Dulac

#include <iostream>
#include "VehicleMPG.h"
using namespace std;

// initialize variables
VehicleMPG::VehicleMPG()
{
	milesDriven = 0;
	gallonsUsed = 0;
	currentMPG = 0;
	sumMPG = 0;
	numOfTrips = 0;
}

void VehicleMPG::getMilesDriven()
{
	cout << "Enter miles driven (-1 to quit): ";
	cin >> milesDriven;
}

int VehicleMPG::returnMilesDriven()
{
	return milesDriven;
}

void VehicleMPG::getGallonsUsed()
{
	cout << "Enter gallons used: ";
	cin >> gallonsUsed;
}

void VehicleMPG::calculateMPGThisTrip()
{
	currentMPG = milesDriven / gallonsUsed;
	cout << "MPG this trip: " << currentMPG << endl;
}

void VehicleMPG::calculateMPGAverage()
{
	sumMPG += currentMPG;
	numOfTrips++;
	cout << "Total MPG: " << ( sumMPG / numOfTrips ) << endl;
}