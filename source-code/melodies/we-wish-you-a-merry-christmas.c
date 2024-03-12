#include <notes.c>



void WeWishYouAMerryChristmas(){
    int tempo = 140;
    int melody[] = {
        NOTE_C5,4, 
        NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
        NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
        NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
        NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
        NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
        NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
        NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,

        NOTE_F5,2,
    };

    int notes = sizeof(melody) / sizeof(melody[0]) / 2;
    int wholenote = (60000 * 4) / tempo;
    int divider = 0, noteDuration = 0;

    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
        divider = melody[thisNote + 1];

        if(divider > 0) noteDuration = (wholenote) / divider;
        else if(divider < 0){
            noteDuration = (wholenote) / abs(divider);
            noteDuration *= 1.5; 
        }

        tone(Piezo, melody[thisNote], noteDuration * 0.9);
        delay(noteDuration);
        noTone(Piezo);
    }
}