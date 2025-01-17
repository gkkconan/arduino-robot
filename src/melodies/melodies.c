#include "notes.h"



void HappyBirthday(){
  int tempo = 140;
  int melody[] = {
    NOTE_C4,4, NOTE_C4,8, 
    NOTE_D4,-4, NOTE_C4,-4, NOTE_F4,-4,
    NOTE_E4,-2, NOTE_C4,4, NOTE_C4,8, 
    NOTE_D4,-4, NOTE_C4,-4, NOTE_G4,-4,
    NOTE_F4,-2, NOTE_C4,4, NOTE_C4,8,

    NOTE_C5,-4, NOTE_A4,-4, NOTE_F4,-4, 
    NOTE_E4,-4, NOTE_D4,-4, NOTE_AS4,4, NOTE_AS4,8,
    NOTE_A4,-4, NOTE_F4,-4, NOTE_G4,-4,
    NOTE_F4,-2,
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

void NeverGonnaGiveYouUp(){
    int tempo = 114;
    int melody[] = {
        NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,4,
        NOTE_E5,-4, NOTE_FS5,-4, NOTE_A5,16, NOTE_G5,16, NOTE_FS5,8,
        NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,2,
        NOTE_A4,16, NOTE_A4,16, NOTE_B4,16, NOTE_D5,8, NOTE_D5,16,
        NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,4,
        NOTE_E5,-4, NOTE_FS5,-4, NOTE_A5,16, NOTE_G5,16, NOTE_FS5,8,
        NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,2,
        NOTE_A4,16, NOTE_A4,16, NOTE_B4,16, NOTE_D5,8, NOTE_D5,16,
        REST,4, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_D5,8, NOTE_E5,8, NOTE_CS5,-8,
        NOTE_B4,16, NOTE_A4,2, REST,4, 

        REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,4, NOTE_A4,8,
        NOTE_A5,8, REST,8, NOTE_A5,8, NOTE_E5,-4, REST,4, 
        NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_D5,8, NOTE_E5,8, REST,8,
        REST,8, NOTE_CS5,8, NOTE_B4,8, NOTE_A4,-4, REST,4,
        REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_A4,4,
        NOTE_E5,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,4, REST,4,

        NOTE_D5,2, NOTE_E5,8, NOTE_FS5,8, NOTE_D5,8,
        NOTE_E5,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,4, NOTE_A4,4,
        REST,2, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8,
        REST,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
        NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,

        NOTE_E5,-8, NOTE_E5,-8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,-8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
        NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,8, NOTE_A4,8, NOTE_A4,8, 
        NOTE_E5,4, NOTE_D5,2, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
        NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
        NOTE_A5,4, NOTE_CS5,8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,

        NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8,  
        NOTE_E5,4, NOTE_D5,2, REST,4,
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