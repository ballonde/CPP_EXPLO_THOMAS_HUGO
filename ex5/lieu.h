#ifndef LIEU_H
#define LIEU_H

#include "lieu.h"
#include <string>
#include <vector>
#include <iostream>

class Lieu{

    private:
        std::string _nom;
        std::string _description;
        int _difficulte;
        std::vector<int> _destinationPossible;

    public:

        Lieu(std::string nom,std::string description ,int difficulte,std::vector<int> destinationPossible);

        Lieu();
    
        std::string afficheLieu();

        std::string deplacement(std::string x);

        std::string getDescription();
        
        int getDefficulte();

        std::vector<int> getDestinationPossible();
};

#endif