
#include "Arduino.h"  
#include "Midino.h"   

void MIDI::begin(int baudRate)  
{
    _baudRate = baudRate;
}

void MIDI::noteOn(int channel, int note, int velocity)
{
    Serial.write(channel);
    Serial.write(note);
    Serial.write(velocity);
}

void MIDI::notePause(int channel, int note)
{
    Serial.write(channel);
    Serial.write(note);
    Serial.write(0x00);
}

void MIDI::changeSetup(int channel, byte program)
{
    Serial.write(0xC0 | (channel & 0x0F));
	Serial.write(program & 0x7F);
}