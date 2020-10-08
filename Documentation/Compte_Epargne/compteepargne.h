#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "comptebancaire.h"


class CompteEpargne : public CompteBancaire
{


public:
    CompteEpargne(float _solde);
    void CalculerInterets(float _gain);
    void ModifierTaux(float _taux);

protected:
    float tauxInterets;
};

#endif // COMPTEEPARGNE_H
