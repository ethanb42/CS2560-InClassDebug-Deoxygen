#ifndef ParkingMeter_H
#define ParkingMeter_H
/*!
 * The Parking Meter class
 * 
 * Represents a parking meter
 * 
 */
class ParkingMeter
{
private:
	int purchasedTime; /*!<Purchased ammount of time on the meter*/

public: 
	/*!
	 * Constructor 
	 * 
	 * Creates a parking meter with a specified purchased time
	 * 
	 * \param pTime The purchased time
	 */
	ParkingMeter(int pTime) {
		purchasedTime = pTime;
	}
	/*!
	 * Default constructor
	 * 
	 * Sets the time purchased to zero
	 * 
	 */
	ParkingMeter() {
		ParkingMeter(0);
	}

	/*!
	 * Gets purchassed time
	 * 
	 * Returns the purchased time for the meter
	 * 
	 * \return purchasedTime
	 */
	int getPurchasedTime() {
		return purchasedTime;
	}

	/*!
	 * Sets the purchased time
	 * 
	 * Sets the purchased time of a parking meter to the input
	 * 
	 * \param pTime The parking time purchased
	 */
	void setpurchasedTime(int pTime) {
		purchasedTime = pTime;
	}
};

#endif