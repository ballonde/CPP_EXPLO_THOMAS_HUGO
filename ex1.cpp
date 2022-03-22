#include <iostream>
#include <string>


int main(){
int choix;
        std::cout <<"vous devez choisir entrer entrer dans la foret(1) et aller dans la clairière (2)"<<std::endl;
 
        std::cin >> choix;

    if (choix==1){
        std::cout <<"foret atteinte"<<std::endl;
    }
        if (choix==2){
        std::cout <<"clairière atteinte"<<std::endl;
    }
    return 0;
}