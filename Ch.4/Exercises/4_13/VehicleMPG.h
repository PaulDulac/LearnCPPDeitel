// Class provides functions to track the MPG a vehicle gets
// Author: Paul Dulac

using namespace std;

class VehicleMPG
{
public:
	VehicleMPG(); // constructor initializes variables
	void getMilesDriven(); // prompt and store
	int returnMilesDriven(); // return our flag
	void getGallonsUsed(); // prompt and store
	void calculateMPGThisTrip(); // for current entry
	void calculateMPGAverage(); // Average of all trips so far

private:
	double milesDriven;
	double gallonsUsed;
	double currentMPG;
	double sumMPG; // sum of all trip's currentMPG
	int numOfTrips;
};