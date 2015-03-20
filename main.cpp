#include <iostream>
#include <cstdlib>

#include "Partie.h"
#include "Joueur.h"

#include "Piece.h"
#include "Tour.h"
#include "Fou.h"

using namespace std;

const int taille = 4;
typedef Piece* Plateau[taille][taille];

void separation(void);
void initPlateau(Plateau);
int * coordonnees(string);

int main() {
    Plateau plateau;

    Partie* partie = new Partie("2015-03-30");

    Joueur* j1 = new Joueur("Alpha");
    Joueur* j2 = new Joueur("Beta");

    partie->setJoueur(j1);
    partie->setJoueur(j2);

    /*
    delete j1;

    cout << "Partie de j2 : " << j2->getPartie() << endl;

    if(!partie->estJouable()) {
        cout << "La partie n'est plus jouable" << endl;

        delete partie;
        partie = NULL;

        cout << "Partie de j2 : " << j2->getPartie() << endl;
    }
    */

    /*
    separation();

    cout << "INITIALISATION DES TOURS" << endl;

    Tour tour;
    tour.setCouleur(COULEUR_NOIR);
    cout << "Couleur de la nouvelle tour : " << tour.getCouleur() << endl;

    separation();

    Tour tour_blanche(COULEUR_BLANC);

    separation();

    Tour tour_noire(tour_blanche);
    cout << "Ancienne couleur : " << tour_noire.getCouleur() << endl;
    tour_noire.setCouleur(COULEUR_NOIR);
    cout << "Nouvelle couleur : " << tour_noire.getCouleur() << endl;

    separation();

    Tour tour_foo(COULEUR_BLANC, ETAT_DISPONIBLE);

    separation();

    cout << "INITIALISATION DES FOUS" << endl;

    Fou fou;
    fou.setCouleur(COULEUR_NOIR);
    cout << "Couleur du nouveau Fou : " << fou.getCouleur() << endl;

    separation();

    Fou fou_blanc(COULEUR_BLANC);

    separation();

    Fou fou_noir(fou_blanc);
    cout << "Ancienne couleur : " << fou_noir.getCouleur() << endl;
    fou_noir.setCouleur(COULEUR_NOIR);
    cout << "Nouvelle couleur : " << fou_noir.getCouleur() << endl;

    separation();

    Fou fou_foo(COULEUR_BLANC, ETAT_DISPONIBLE);

    separation();
    */

    initPlateau(plateau);

    /*
    int *coor = coordonnees("a1");
    cout << coor[0] << " - " << coor[1] << endl;

    coor = coordonnees("c3");
    cout << coor[0] << " - " << coor[1] << endl;

    coor = coordonnees("d4");
    cout << coor[0] << " - " << coor[1] << endl;
    */


    if(j1) delete j1;
    if(j2) delete j2;
    if(partie) delete partie;

    return EXIT_SUCCESS;
}

void separation(void) {
    cout << "----------------------------" << endl;
}

void initPlateau(Plateau p) {
    for(int i = 0; i < taille; i++) {
        for(int j = 0; j < taille; j++) {
            p[i][j] = NULL;
        }
    }
}

int* coordonnees(string n) {
    int *p = new int[2];

    p[0] = n[0] + 1 - 'a';
    p[1] = n[1] - '0';

    return p;
}
