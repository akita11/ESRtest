#include <M5Unified.h>

#define PIN_VIN GPIO_NUM_33 // Core2's PortA p.4

void setup(void)
{
	auto cfg = M5.config();
	M5.begin(cfg);
	M5.Display.setTextSize(2);
	pinMode(PIN_VIN, ANALOG);
}

void loop(void)
{
	int value = analogRead(PIN_VIN); // read ESR value

	M5.Display.fillScreen(BLACK);
	M5.Display.setCursor(0, 0);
	M5.Display.printf("VIN: %d\n", value);

	float voltage = value * 3.3 / 4096;
	M5.Display.printf("V: %.2f [V]\n", voltage);
	delay(100);
}