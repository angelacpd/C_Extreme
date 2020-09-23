// blink LED
// Arduino
// Digital Innovation One - Systems Architecture

#include <WProgram.h>

void setup () {
	pinMode (LED_PIN, OUTPUT);		// enable pin 13 as digital output
}

void loop () {
	digitalWrite (LED_PIN, HIGH);	// turn on LED
	delay (1000);						// wait 1 second
	digitalWrite (LED_PIN, LOW);	// turn off LED 
	delay (1000);						// wait 1 second
}

int main (void) {
	// define LED_PIN 13
	int LED_PIN = 13;
	
	init();
	
	setup();
	
	// infinite loop
	for (;;)
		loop();
	
	return 0;
}