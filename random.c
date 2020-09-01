#include "random.h"


double generateTimeSector(int max_sec,int min_sec){
  double tempsSecteur, ms;
  double sec = (rand() % (max_sec - min_sec + 1)) + min_sec;

  if(sec == max_sec){ //Le temps maximum par secteur est de 50.000 secondes
    ms = 0;
  } else {
    ms = (rand() % (max_sec- min_sec + 1)) + min_sec;
  }

  return tempsSecteur = sec + (ms/1000);
}

/**
 * @param min : nombre de secondes minimum
 * @param max : nombre de secondes maximum
 */
double tpsStand(int min, int max){
  double tpsStand;

  double sec = (rand() % (max - min + 1)) + min;
  double ms = (rand() % (50 - 35 + 1)) + 35;

  return tpsStand = sec + (ms/1000);
}

