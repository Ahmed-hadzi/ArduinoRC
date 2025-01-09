// Sends a PPM signal on pin 2

#include <RCEncoder.h>

#define OUTPUT_PIN 2
#define PPM_CHANNEL 1

void setup ()
{
  encoderBegin(OUTPUT_PIN);
}

void loop ()
{
    int pulseWidth = 1500;  // Microseconds being sent to the RC (1000 to 2000)
    encoderWrite(PPM_CHANNEL, pulseWidth); // encoderWrite(PPM_CHANNEL, SIGNAL);
    delay(20);
}