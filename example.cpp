#include <iostream>
#include <iomanip>
#include <sensus.h>
#include <sensus.c>

using namespace std;

int main()
{
    float temperature_c = bme280_getdata(BME280_CTEMP);                               
    float humidity = bme280_getdata(BME280_HUMMI);
    float pressure = bme280_getdata(BME280_PRESS);

    float infra_red_rlight = tsl2561_getdata(TSL2561_INFRARED_LUX);
    float visible_light = tsl2561_getdata(TSL2561_VISIBLE_LUX);
    float total_light = tsl2561_getdata(TSL2561_TOTAL_LUX);

	  
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Current temperature: " << temperature_c << " C"  <<endl;
    cout << "Current humidity: " << humidity << " %" << endl;
    cout << "Current pressure: " << pressure << " hPa" << endl;
    cout << endl;
    cout << "Current total (IR + visible) light: " << total_light << " Lux" << endl;
    cout << "Current IR light (LUX): " << infra_red_rlight << " Lux" << endl;
    cout << "Current visible light (LUX): " << visible_light << " Lux" << endl;
    cout << endl;
    cout << endl;

    return 0;
}
