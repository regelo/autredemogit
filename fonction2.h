#ifndef __FONCTIONS2_H__
#define __FONCTIONS2_H__

#include <iostream>
#include <stdlib.h>
#include <time.h>

double Generer(int & valeur) {
   srand(time(NULL));
   valeur=rand()% 100;
   return valeur;
}

#endif