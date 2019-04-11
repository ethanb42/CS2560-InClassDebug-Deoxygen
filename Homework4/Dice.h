//The die class
class Die
{
private:
	int sides;  /*!< Number of sides the dice has*/
	int value;  /*!<Value the dice was rolled*/

public:
	Die(int x);
	void roll();     // Rolls the die 
	int getSides();  // Returns the number of sides 
	int getValue();  // Returns the die's value 
};