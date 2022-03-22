#include <iostream>
#include <string>


int main(){
    std::string choix="cg";

    std::cout <<"vous devez choisir entrer entrer dans la foret(foret) et aller dans la clairière (clairiere)"<<std::endl;
    
    std::cin >> choix;

    if (choix=="foret"){
        std::cout <<"foret atteinte"<<std::endl;
    }
    if (choix=="clairiere"){
        std::cout <<"clairière atteinte"<<std::endl;
    }
    return 0;
}