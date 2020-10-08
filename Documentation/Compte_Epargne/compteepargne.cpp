#include "compteepargne.h"
#include <iostream>

/**
 *  @author Ahmed YOUSFI
 *  @abstract Class pour créer un comptebancaire
 *  @date 8 Octobre 2020
 */
using namespace std;

CompteEpargne::CompteEpargne(float _solde)
{
    cout << "Constructeur de la classe CompteBancaire" << endl;
}

void CompteEpargne::CalculerInterets(float _gain)
{
    _gain = tauxInterets;
}
