#include <iostream>
#include "menu.h"
using namespace std;

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};

int main()
{
    int choix;
    try{
    Menu leMenu("Affichage.txt");
    do {
        choix = leMenu.Afficher();
    switch (choix)
    {
    case OPTION_1:
        cout << "Vous avez choisi l'option 1" << endl;
        Menu::AttendreAppuiTouche();
        break;

    case OPTION_2:
        cout << "Vous avez choisi l'option 2" << endl;
        Menu::AttendreAppuiTouche();
        break;

    case OPTION_3:
        cout << "Vous avez choisi l'option 3" << endl;
        Menu::AttendreAppuiTouche();
        break;

    case OPTION_4:
        cout << "Vous avez choisi l'option 4" << endl;
        Menu::AttendreAppuiTouche();
        break;
    }
    }



    catch(Exception)
    } while(choix!= QUITTER);



    return 0;
}
