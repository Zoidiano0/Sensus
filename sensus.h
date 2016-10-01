// ---------------------------------- BME280 SENSOR ---------------------------------- 
#define BME280_CTEMP			1	    // Receive air temperature (in Celsius degrees)
#define BME280_PRESS			2	    // Receive the atmospheric pressure (in hectopascals)
#define BME280_HUMMI			3	    // Get the value of relative humidity (in percentage)
#define BME280_FTEMP			4	    // Receive air temperature (in Fahrenheit degrees)
// ---------------------------------- BME280 SENSOR ----------------------------------

// ---------------------------------- TSL2561 SENSOR --------------------------------- 
#define TSL2561_INFRARED_LUX	1	// Receive data on the intensity of the infrared spectrum of light (in lumens)
#define TSL2561_VISIBLE_LUX		2	// Receive data on the intensity of the visible spectrum of light (in lumens)
#define TSL2561_TOTAL_LUX		3	  // Receive information about the overall intensity of infrared and visible spectrum of light (in lumens)
// ---------------------------------- BME280 SENSOR ----------------------------------

#ifndef SENSUS_H
#define SENSUS_H_H
// ---------------------------------- BME280 SENSOR ----------------------------------
float bme280_getdata(int bme280_type_of_request); // Function to get the data from the sensor BME280
// ---------------------------------- BME280 SENSOR ----------------------------------

// ---------------------------------- TSL2561 SENSOR ---------------------------------
float tsl2561_getdata(int tsl2561_type_of_request); // Function to get the data from the sensor TSL2561
// ---------------------------------- TSL2561 SENSOR ---------------------------------

#endif
