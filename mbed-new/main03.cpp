#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

void Led2(DigitalOut& ledpin);

int main()
{
    redLED = 1;
    greenLED = 1;
    while (true) {
        for (int i = 0; i < 6; ++i) {
            Led2(redLED);
        }
        for (int i = 0; i < 4; i++) {
            Led2(greenLED);
        }
    }
}

void Led2(DigitalOut& ledpin)
{
    ledpin = !ledpin;
    wait(0.2f);
}