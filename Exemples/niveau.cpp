/**********************************************************************
Author : Philippe SIMIER
Date   : 13/02/2018
Sujet  : Programme niveau bulle virtuelle

Compilation : g++ niveau.cpp -l SenseHat -o niveau
***********************************************************************/

#include <SenseHat.h>
#include <iostream>



int main(){

SenseHat carte;

float xa,ya,za;
int x,y;


    carte.Effacer();

    while(1){

	usleep(50*1000);
	carte.ObtenirAcceleration(xa,ya,za);

	system("clear");
	carte.Effacer();

	y = (int)(xa * -30.0 + 4);
	x = (int)(ya * -30.0 + 4);
	if (x<0) x=0;
	if (x>6) x=6;
	if (y<0) y=0;
	if (y>6) y=6;
//	std::cout << "x : " << x << " y : " << y << std::endl;

	carte.AllumerPixel(x  ,y  ,BLEU);
	carte.AllumerPixel(x+1,y  ,BLEU);
        carte.AllumerPixel(x  ,y+1,BLEU);
        carte.AllumerPixel(x+1,y+1,BLEU); 
    }
}


