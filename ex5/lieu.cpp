#ifndef LIEU_CPP
#define LIEU_CPP

#include "lieu.h"
#include <string>
#include <iostream>

    Lieu::Lieu(std::string nom,std::string description ,int difficulte,std::vector<int> destinationPossible){
        _nom=nom;
        _description=description;
        _difficulte=difficulte;
        _destinationPossible=destinationPossible;
    }

    Lieu::Lieu(){

    }

    std::string Lieu::afficheLieu(){
        std::cout <<_nom<<std::endl;
        std::cout <<_description<<std::endl;
        std::cout <<_difficulte<<std::endl;
        return "";
    }

    std::string Lieu::deplacement(std::string choix){
    return choix;
    }

    std::string Lieu::getDescription(){
        return _description;
    }

    int Lieu::getDefficulte(){
        return _difficulte;
    }

    std::vector<int> Lieu::getDestinationPossible(){
        return _destinationPossible;
    }


#endif