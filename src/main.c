#include <Arduino.h>

#define Hall_Sensor 11

#define STEPPER_DIR 9

#define STEPPER_PULSE 10

void setup() {
    pinMode(STEPPER_DIR, OUTPUT);
    digitalWrite(STEPPER_DIR, OUTPUT);
    pinMode(STEPPER_PULSE, OUTPUT);
    pinMode(Hall_Sensor, INPUT_PULLUP);
}
bool last_is_high = true;
void write_one_pulse()
{
    digitalWrite(STEPPER_PULSE, HIGH);
    delayMicroseconds(50);
    digitalWrite(STEPPER_PULSE,LOW);
    delayMicroseconds(50);
}
void loop() {
    if(digitalRead(Hall_Sensor))
    {
    write_one_pulse();
    }
}
