#include "lieu.cpp"
#include <iostream>
#include <string>
#include <vector>


int main(){

    std::string choix="cg";

        Lieu * lieu1 = new Lieu("foret","une belle foret bien touffu",3,{2,3});
        std::cout<<lieu1->afficheLieu()<<std::endl;

        Lieu * lieuCourant=lieu1;
        
        Lieu * lieu2 = new Lieu("cabane","une belle cabane mais abandonnée",6,{1,3});
        std::cout<<lieu2->afficheLieu()<<std::endl;
        
        Lieu * lieu3 = new Lieu("montagne enneigé","une montagne recouverte de neige",15,{2,1});
        std::cout<<lieu3->afficheLieu()<<std::endl;


        std::cout <<"Vous êtes actuellement en: "<<lieuCourant->afficheLieu()<<std::endl;
        std::cout <<"Ou voulez vous allez?"<<std::endl;
    
        std::cout <<"vous pouvez aller en foret(foret), cabane(cabane),montagne enneige(montagneNeige)"<<std::endl;
        std::cin >> choix;

    if (choix=="foret"){
        Lieu * lieuCourant=lieu1;
        std::cout<<lieu3->getDescription()<<std::endl;
    }
    if (choix=="cabane"){
        Lieu * lieuCourant=lieu2;
        std::cout<<lieu3->getDescription()<<std::endl;
    }
      if (choix=="montagneNeige"){
        Lieu * lieuCourant=lieu3;
        std::cout<<lieu3->getDescription()<<std::endl;
    }

    return 0;
}