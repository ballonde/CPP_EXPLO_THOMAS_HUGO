#include "lieu.cpp"
#include <iostream>
#include <string>
#include <vector>


int main(){

    std::string choix="cg";
    std::vector<int> _listelieu;
    bool trouve=false;

        Lieu * lieu1 = new Lieu("foret","une belle foret bien touffu",3,{2,3});
        std::cout<<lieu1->afficheLieu()<<std::endl;

        Lieu * lieuCourant=lieu1;
        
        Lieu * lieu2 = new Lieu("cabane","une belle cabane mais abandonnée",6,{1,3});
        std::cout<<lieu2->afficheLieu()<<std::endl;
        
        Lieu * lieu3 = new Lieu("montagne enneigé","une montagne recouverte de neige",15,{2,1});
        std::cout<<lieu3->afficheLieu()<<std::endl;

        Lieu listelieu[5];
        listelieu[1]=*lieu1;
        listelieu[2]=*lieu2;
        listelieu[3]=*lieu3;
        std::cout <<"Vous êtes actuellement en: "<<lieuCourant->afficheLieu()<<std::endl;
        std::cout <<"Ou voulez vous allez?"<<std::endl;
    
        std::cout <<"vous pouvez aller en foret(foret), cabane(cabane),montagne enneige(montagneNeige)"<<std::endl;
        std::cin >> choix;

    if (choix=="foret"){
        for (const auto &item : lieuCourant->getDestinationPossible()) {
            if (item == 1) {
                trouve=true;
                break;
            }
        }
        if(trouve==true){
            Lieu * lieuCourant=&listelieu[1];
            std::cout<<lieuCourant->getDescription()<<std::endl;
        }else{
            std::cout<<"Cette destination n'est pas possible."<<std::endl;
        }
    }
    if (choix=="cabane"){
        for (const auto &item : lieuCourant->getDestinationPossible()) {
        if (item == 2) {
            trouve=true;
            break;
            }
        }
        if(trouve==true){
            Lieu * lieuCourant=&listelieu[2];
            std::cout<<lieuCourant->getDescription()<<std::endl;
        }else{
            std::cout<<"Cette destination n'est pas possible."<<std::endl;
        }
    }
    if (choix=="montagneNeige"){
        for (const auto &item : lieuCourant->getDestinationPossible()) {
        if (item == 3) {
            trouve=true;
            break;
            }
        }
        if(trouve==true){
            Lieu * lieuCourant=&listelieu[3];
            std::cout<<lieuCourant->getDescription()<<std::endl;
        }else{
            std::cout<<"Cette destination n'est pas possible."<<std::endl;
        }
    }

    return 0;
}