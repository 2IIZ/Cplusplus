#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

string melange(string mot)
{
    int position(0);
    string melange;

    while (mot.size() != 0)
    {

    position = rand() % mot.size();

    melange += mot[position];
    mot.erase(position, 1);
    }

    return melange;
}


int main()
{
    string motM;
    string motIn; // mot entrer par l'utilisateur

    int coupsParMot(7);
    int coups(0);
    int totalCoups(0);
    int nombreDePartie(0);
    bool game(1);
    bool nombreJoueur(0);
    string motAleatoir;
    fstream dico;
    unsigned int v1(0);
    unsigned int provCount(0);

    cout << "Bienvenue Ô Game" << endl;

    srand (time(NULL));

    while(game!=0)
    {
    cout << "Veuillez sellectione combien de joueur :" << endl <<endl<< "1. Un joueur" << endl << "0. 2 joueuer" << endl ;
    cin >> nombreJoueur;


    if(nombreJoueur==0)
    { // 2 joueur
        cout << "Joueur 1, entrer un mot :" << endl; //1 : On demande de saisir un mot
        cin >> motM;
        system("CLS");
    }
    else
    { // 1 joueur
        cout << "Le mot va etre pris aleatoirement :" << endl; // LANCE THE 1 PLAYER WIN ANOTHER TIME PLANT ...
        dico.open("dico.txt", fstream::in);

        if(dico)
        {
          //L'ouverture s'est bien passée, on peut donc lire
          string ligne; //Une variable pour stocker les lignes lues

          v1 = rand() % 300000; //Nombre aleatoire pour une des ligne du fichier

          while(getline(dico, ligne)) //Tant qu'on n'est pas à la fin, on lit
          {
              if(v1 == provCount)
              {
                  motM = ligne;
                  cout << ligne << endl;
              }
              provCount++;
          }
            cout << "Il y a " << provCount << " mot dans le dico" << endl; //nombre total de mot dans le dico
            cout <<"Nombre aleatoire : " << v1 <<  endl; //nombre aleatoire
        }

    }

    string motMel = melange(motM); //2 : On mélange les lettres du mot

    srand(time(0));

    while(motIn != motM)
    {
        cout << "Trouver le mot Mystere : " << motMel << endl<<endl; //3 : On demande à l'utilisateur quel est le mot mystère
        cin >> motIn;
        if(motIn == motM)
        {
            cout << "TROUVER !!" << endl;
            coups++;
            coupsParMot--;
            cout << "BRAVO !  Il vous a reste " << coupsParMot << " essai" <<endl<<endl;
        }
        else
        {
            cout << "Pas Trouver" << endl;
            coups++;
            coupsParMot--;
            cout << "Il vous reste " << coupsParMot << " essai" <<endl<<endl;
        }

        if(coupsParMot <= 0)
        {
            cout << "Vous avez perdue, trop d'essai." << endl;
            cout << "Votre score =" << coups << endl;
            return game=0;
        }
    }


    provCount=0;
    dico.close();
    cout << "Votre score =" << coups << endl;
    cout << "Voulez-vous rejoue ?" << endl <<"1. Oui" << endl << "0. Non!" <<endl;
    totalCoups+= coups;
    nombreDePartie++;

    cin >> game;
    if(game==1){coupsParMot=7;} //Reini des coups

    totalCoups/=nombreDePartie;

    }


    if(game!=1)
    {
        cout << "Moyen de votre game :" << totalCoups << endl;
    }

}

