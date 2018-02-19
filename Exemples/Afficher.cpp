/**********************************************************************
Author : Christophe GRILO
Date   : 09/02/2018
Sujet  : Programme démo  la class SenseHat
Prérequis : copier libSenseHat.a  dans /usr/lib/
          : et     SensHat.h      dans /usr/include/

Compilation : g++ Afficher.cpp  -l SenseHat -o Afficher
		g++ niveau.cpp -l SenseHat -o niveau
***********************************************************************/



#include <SenseHat.h>
#include <iostream>

int main()
{

    SenseHat carte;

    carte.Effacer();

    carte.AfficherMessage("0123456!-789&Z",100);
//    carte.AfficherLettre('A');

    std::cout << "pression : " << carte.ObtenirPression() << " hPa"<< std::endl;
    std::cout << "Température : " << carte.ObtenirTemperature() << " °C" << std::endl;
    std::cout << "Humidité : " << carte.ObtenirHumidite() << " %" << std::endl;
}

