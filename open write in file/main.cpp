#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{

    string const file("file/file.txt");
    string mot;
    int taille;
    ofstream monFlux(file.c_str());
    //Déclaration d'un flux permettant d'écrire dans un fichier.

    // ofstream monFlux("C:\Users\2IIZ\Desktop\C++\open write in file\file.txt"); //Chemin absolu
    // ofstream monFlux("file/file.txt"); //chemin relatif :emplacement du fichier depuis l'endroit où se situe le programme sur le disque

    if(monFlux)  //On teste si tout est OK
    {
        monFlux << "Now line, is awesome i can do a lot of things" << endl;
        monFlux << 3425 <<endl; // number writed down
        int ivan(2);
        monFlux << ivan << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

    //Pour pouvoir écrire à la fin d'un fichier, il faut le spécifier lors de l'ouverture en ajoutant un deuxième paramètre à la création du flux :
    // ofstream monFlux("C:/Nanoc/scores.txt", ios::app);

    ifstream monFluxLire(file.c_str()); //lecture de fichier

    if(monFluxLire)
    {
        monFluxLire >> mot;
        monFluxLire.seekg(0, ios::end);  //On se déplace à la fin du fichier


        taille = monFluxLire.tellg();
        //On récupère la position qui correspond donc a la taille du fichier !
    }
    else
    {
        cout << "noob" << endl;
    }



    ofstream monFluxApp(file.c_str(), ios::app); // ajouter a la fin du fichier
    if(monFluxApp)
    {
        monFluxApp << "it's working, i hope :D" << endl;
        monFluxApp << mot << endl << taille << endl;
    }
    else
    {
     cout << "you are fu...ed up" << endl;
    }

    ifstream fichier(file.c_str());

   if(fichier)
   {
      //L'ouverture s'est bien passée, on peut donc lire

      string ligne; //Une variable pour stocker les lignes lues

      while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
      {
         cout << ligne << endl;
         //Et on l'affiche dans la console
         //Ou alors on fait quelque chose avec cette ligne
         //À vous de voir
      }

   }

    cout << endl << "Hello world!" << endl;
    return 0;
}
