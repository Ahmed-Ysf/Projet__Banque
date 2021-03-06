#include "comptebancaire.h"
#include <iostream>
using namespace std;

CompteBancaire::CompteBancaire(float _solde):
solde(_solde)
{
    cout << "Constructeur de la classe CompteBancaire" << endl;
}

void CompteBancaire::Deposer(float _montant)
{
    solde = solde + _montant;
    cout << "Vous avez déposé" << _montant << "sur votre compte" << "Le solde de votre compte est maintenant de " << solde << "€" << endl;
}

bool CompteBancaire::Retirer(float _montant)
{
    if(solde < _montant)
    {
       cout << "Vous ne disposez pas d'assez d'argent sur votre compte" << endl;
    }
    else
    {
        solde = solde - _montant;
        cout << "Vous avez retiré" << _montant <<  "sur votre compte" << "Le solde de votre compte est maintenant de" << solde << "€" << endl;
    }
}

float CompteBancaire::ConsulterSolde()
{
    return solde;
}

