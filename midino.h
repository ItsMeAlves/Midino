
#ifndef Midino_h 
#define Midino_h

#include "Arduino.h" 

#define MIDI_C0            0
#define MIDI_D0            2
#define MIDI_E0            4
#define MIDI_F0            5
#define MIDI_G0            7
#define MIDI_A0            9
#define MIDI_B0           11
#define MIDI_C            60
#define MIDI_D            62
#define MIDI_E            64
#define MIDI_F            65
#define MIDI_G            67
#define MIDI_A            69
#define MIDI_B            71
#define MIDI_SHARP         1
#define MIDI_FLAT         -1
#define MIDI_OCTAVE       12

class MIDI  
{
    public:
        void begin(int baudRate);
        void noteOn(int channel, int note, int velocity);
        void notePause(int channel, int note);
        void changeSetup();
    private:
        int _baudRate;
};


#endif 
