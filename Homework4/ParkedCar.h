
#ifndef ParkedCar_H
#define ParkedCar_H

#include <string>
using namespace std;
/*!
 * Represents a parked car
 * 
 */
class ParkedCar{

private:
	//the car's data
	string make; /*!<The make of the car*/
	string model; /*!<The model of the car*/
	string color; /*!<The color of the car*/
	string license; /*!<The licesnse plate of the car*/
	int minutes; /*!<The total parked time of the car*/

public:
	//Constructor
	/*!
	 * A constructor for the car, the car is defined by the parameters below
	 * 
	 * \param ma The make of the car
	 * \param mo The model of the car
	 * \param c The color of the car
	 * \param lic The license of the car
	 * \param m The minutes the car has been parked
	 */
	ParkedCar(string ma, string mo, string c, string lic, int m) {
		make = ma;
		model = mo;
		color = c;
		license = lic;
		minutes = m;
	}
	//default
	/*!
	 * Default constructor for car
	 * 
	 * Sets the values to "" and -1;
	 * 
	 */
	ParkedCar() {
		ParkedCar("", "", "", "", -1);
	}

	/*!
	 * Gets the make
	 * 
	 * Returns the make of the car
	 * 
	 * \return make
	 */
	string getMake()  {
		return make;
	}

	/*!
	 * Gets the model
	 * 
	 * Returns the model of the car
	 * 
	 * \return  model
	 */
	string getModel() {
		return model;
	}

	/*!
	 * Gets the color
	 * 
	 * Returns the color of the car
	 * 
	 * \return color
	 */
	string getColor() {
		return color;
	}

	/*!
	 * Gets the license
	 * 
	 * Returns the license plate of the car
	 * 
	 * \return  license
	 */
	string getLicense() {
		return license;
	}
	/*!
	 * Gets the minutes parked
	 * 
	 * Returns the minutes the car has been parked
	 * \return minutes
	 */
	int getMinutes()  {
		return minutes;
	}

	/*!
	 * Sets the make
	 * 
	 * Sets the make to the parameter inputted
	 * 
	 * \param ma the make to be set to
	 */
	void setMake(string ma) {
		make = ma;
	}

	/*!
	 * Sets the model
	 * 
	 * Sets the model of the car to the parameter inputted
	 * 
	 * \param mo The desired model for the car
	 */
	void setModel(string mo) {
		model = mo;
	}

	/*!
	 * Sets the color
	 * 
	 * Sets the color of the car to the parameter inputted
	 * 
	 * 
	 * \param c The desired color for the car
	 */
	void setColor(string c) {
		color = c;
	}

	/*!
	 * Sets the license 
	 * 
	 * Sets the license of the car
	 * 
	 * \param li The desired license for the car
	 */
	void setLicense(string li) {
		license = li;
	}

	/*!
	 * Sets the parked time
	 * 
	 * 
	 * Sets the cars parked time at its location
	 * \param m The desired parked time
	 */
	void setMinutes(int m) {
		minutes = m;
	}
	
};

#endif

