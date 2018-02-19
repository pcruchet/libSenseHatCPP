/**********************************************************************
Author : Philippe SIMIER
Date   : 12/02/2018
Sujet  : Programme démo  la class SenseHat
Prérequis : copier libSenseHat.a  dans /usr/lib/
          : et     SensHat.h      dans /usr/include/

Compilation : g++ image.cpp -l SenseHat -o image

***********************************************************************/

#include <SenseHat.h>
#define N NOIR
#define J JAUNE
#define V VERT

int main(){

    SenseHat carte;


    uint16_t image[8][8]= {
	{N,J,J,J,J,J,J,N},
	{J,V,J,J,J,J,V,J},
	{N,J,J,J,J,J,J,N},
	{N,J,J,V,V,J,J,N},
	{N,J,J,J,J,J,J,N},
	{N,J,V,J,J,V,J,N},
	{N,J,J,V,V,J,J,N},
	{N,J,J,J,J,J,J,N},
    };

    carte.Effacer();
    carte.AfficherMotif(image);


}
