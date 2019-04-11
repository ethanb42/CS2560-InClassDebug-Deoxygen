#ifndef PoliceOfficer_H
#define PoliceOfficer_H

//object the officer interacts with
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

#include <string>

//forward declaration of classes used in the Police Officer class
//Prevents compiler error
class ParkedCar;
class ParkingMeter;
class ParkingTicket;

using namespace std;

/*!
 * The Police Officer class
 * 
 * Represents a police officer 
 * 
 */
class PoliceOfficer
{
private: 
	string name;  /*!<The name of the officer*/
	int badgeNumber; /*!<The officer' badge number*/

public:

	/*!
	 * The constructor for a Police Officer
	 * 
	 * Creates a police officer object
	 * 
	 * \param n The name of the officer
	 * \param badge The badge number of the officer
	 */
	PoliceOfficer(string n, int badge) {

		name = n;
		badgeNumber = badge;
	}

/*!
 * Gets the name 
 * 
 * Returns the name of the officer
 * 
 * \return  name
 */
	string getName() {
		return name;
}
	
	/*!
	 * Gets badge number
	 * 
	 * Returns the badge number of the officer
	 * 
	 * \return badge number
	 */
	int getBadgeNumber() {
		return badgeNumber;
	}

	/*!
	 * Sets the name
	 * 
	 * Sets the name of the officer to s
	 * 
	 * \param s The desired name to be set
	 */
	void setName(string s) {
		name = s;
	}
	/*!
	 * Sets the badge number
	 * 
	 * Sets the badge number of the officer
	 * 
	 * \param x The number for the officer's badge
	 */
	void setBadgeNumber(int x) {
		badgeNumber = x;
	}

	/*!
	 * Checks to see for expired time
	 * 
	 * \param car The car parked
	 * \param meter The meter the car is parked at
	 * \return 1 for violate and 0 for no violation
	 */
	int checkParkedCar(ParkedCar &car, ParkingMeter &meter) {
		if (car.getMinutes() > meter.getPurchasedTime()) {
			return 1; //issue a ticket
		}
		else
			return 0; //no ticket 
	}

	/*!
	 * Issues a parking ticket
	 * 
	 * \param car The car to be ticketed
	 * \param meter The meter the car is parked at
	 * \return A ticket object
	 */
	ParkingTicket issueTicket(ParkedCar &car, ParkingMeter &meter) {
		ParkingTicket ticket(badgeNumber,name, car, meter); //created the ticket
		return ticket;
	}
};

#endif