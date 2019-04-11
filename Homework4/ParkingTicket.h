#ifndef ParkingTicket_H
#define ParkingTicket_H

//include the needed members
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

#include <iostream>
#include <string>
using namespace std;

//forward declaration for class types used in ParkingTicket
//prevents compiler error
class ParkedCar;
class ParkingMeter;
class PoliceOfficer;

/*!
 * The Parking Ticket Class
 * 
 * Represents a parking ticket
 * 
 */
class ParkingTicket
{
private:
	int fine; /*!<The cost of the fine*/
	int badgeNumber;/*!<The badge number of the issuing officer*/
	string officerName; /*<The name of the issuing officer*/
	ParkedCar car;  /*!<The car that got the ticket*/
	ParkingMeter meter;  /*!<The meter the car was parked at*/

public:
/*!
 * Costructor for a parking meter
 * 
 * \param bn The officer's badge number
 * \param n The officer's name
 * \param c The reference of the violating car
 * \param m The reference to the ParkingMeter
 */
	ParkingTicket(int bn, string n, ParkedCar &c, ParkingMeter &m) {
		car = c;
		meter = m;
		badgeNumber = bn;
		officerName = n;

		//calc fine ammount
		fine = 25 + ((car.getMinutes() - meter.getPurchasedTime()) / 60) * 10;

	}

	/*!
	 * Gets the fine
	 * 
	 * Returns the cost of the fine
	 * 
	 * \return fine
	 */
	int getFine() {
		return fine;
	}

	/*!
	 * Gets the badge number
	 * 
	 * Returns the issuing officer's badge number
	 * 
	 * \return badgeNumber
	 */
	int getBadgeNumber() {
		return badgeNumber;

	}

	/*!
	 * Gets the officer's name
	 * 
	 * Returns the issuing officer's name
	 * 
	 * \return officerName
	 */
	string getOfficerName() {
		return officerName;
	}

	/*!
	 *  Sets and calculates the fine for a car
	 * 
	 * \param car The car to get the fine
	 * \param meter The meter the violating car is parked at
	 */
	void setFine(ParkedCar &car, ParkingMeter &meter) {
		fine = 25 + ((car.getMinutes() - meter.getPurchasedTime()) / 60) * 10;
	}

	//prints ticket info for testing
	/*!
	 * Prints out the ticket information
	 * 
	 */
	void printTicket() {
		cout << "\nTicket Information Printing....\n" <<
			"Car Make / Model: " << car.getMake() << " / " <<
			car.getModel() << endl;
		cout << "Car Color: " << car.getColor() << endl;
		cout << "Car License: " << car.getLicense() << endl;
		cout << "Fine: $" << fine << endl;
		cout << "Issued by Officer " << officerName << "  Badge Number: " << badgeNumber << endl;

	}
};

#endif
