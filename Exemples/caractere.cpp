/**********************************************************************
Author : Philippe SIMIER
Date   : 12/02/2018
Sujet  : Programme démo  la class SenseHat
Prérequis : copier libSenseHat.a  dans /usr/lib/
          : et     SensHat.h      dans /usr/include/

Compilation : g++ caractere.cpp -l SenseHat -o caractere

***********************************************************************/

#include <SenseHat.h>
#include <iostream>


int main(){

    SenseHat carte;
    carte.Effacer();
    carte.AfficherLettre('A',BLANC, NOIR);


}
