#include "dnd_character.h"
#include <stdlib.h>
#include <math.h>

int ability(void) {
   int dados[4];
   int menor = 7;
   int soma_total = 0;

   for (int i = 0; i < 4; i++) {
      dados[i] = (rand() % 6) + 1;
      soma_total += dados[i];
      
      if (dados[i] < menor) {
         menor = dados[i];
      }
   }
   return soma_total - menor;
}

int modifier(int score) {
   return (int)floor((score - 10) / 2.0);
}


dnd_character_t make_dnd_character(void) {
   dnd_character_t character;

   character.strength = ability();
   character.dexterity = ability();
   character.constitution = ability();
   character.intelligence = ability();
   character.wisdom = ability();
   character.charisma = ability();

   character.hitpoints = 10 + modifier(character.constitution);

   return character;
}