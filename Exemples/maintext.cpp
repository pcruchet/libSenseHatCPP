/**********************************************************************
Author : Christophe GRILO
Date   : 09/02/2018
Sujet  : Programme démo  la class SenseHat

Compilation : g++ maintext.cpp -l SenseHat -o maintext

***********************************************************************/


#include <iostream>
#include <SenseHat.h>

int main()
{

 SenseHat carte;
 int positionManette=0;
 char unCaractere;
 int codeAscii;

 carte.Effacer();
 carte.AfficherMessage("0123456!-789&Z",100);
 carte.AfficherLettre('A',BLEU,NOIR);

 std::cout << "pression : " << carte.ObtenirPression() << " hPa"<< std::endl;
 std::cout << "Température : " << carte.ObtenirTemperature() << " °C" << std::endl;
 std::cout << "Humidité : " << carte.ObtenirHumidite() << " %" << std::endl;
}
