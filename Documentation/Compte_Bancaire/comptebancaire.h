#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H


class CompteBancaire
{
public:
    CompteBancaire(float _solde);
   void Deposer(float _montant);
   bool Retirer(float _montant);
   float ConsulterSolde();

protected:
   float solde;
};

#endif // COMPTEBANCAIRE_H
