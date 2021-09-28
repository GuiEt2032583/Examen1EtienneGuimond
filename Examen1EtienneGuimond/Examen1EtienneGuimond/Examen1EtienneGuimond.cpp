
#include "FactoryArme.h"
#include "Arme.h"
#include "Marchand.h"
#include "Aventurier.h"
#include <iostream>
#include <conio.h>

int main()
{
    bool leave = false;
    int ans = 0;
    int i = 0;
    Arme* ptrTemp = NULL;
    Aventurier* aventurier = new Aventurier(100, 50, 500000, "Bob");
    Marchand* marchand = new Marchand();

    while (leave == false)
    {
        system("cls");
        std::cout << "Menu \nQue voulez-vous faire ?\n 1 - Voir statut aventurier \n 2 - Voir armes disponible au marcher \n 3 - Acheter une arme \n 4 - Equiper une arme \n 5 - Quitter" << std::endl;
        std::cin >> ans;
        switch (ans)
        {
        case 1:
            //afficher les stats de l'aventurier
            std::cout << aventurier->to_string();
            break;
        case 2:
            //afficher les armes disponible a l'achat
            for (int i = 0; i < marchand->getVecArme().size(); i++)
            {
                std::cout << marchand->getVecArme()[i]->to_string();
            }
            break;
        case 3:
            //affiche les armes
            for (int i = 0; i < marchand->getVecArme().size(); i++)
            {
                std::cout << marchand->getVecArme()[i]->to_string();
            }
            //choix arme
            std::cout << "Entrez le numero de l'arme que vous voulez acheter (Celui a cote du nom)\n";
            std::cin >> ans;
            //trouver l'arme selectionné dans le vecteur et le transferer dans le bon vecteur
            ptrTemp = NULL;
            i = 0;
            for (int i = 0; i < marchand->getVecArme().size(); i++)
            {
                if (marchand->getVecArme()[i]->getNb() == ans)
                {
                    aventurier->acheterArme(marchand->getVecArme()[i]);
                    marchand->vendreArme(marchand->getVecArme()[i]);
                }                  
            }
            break;
        case 4:
            //affiche les armes
            for (int i = 0; i < aventurier->getVecArme().size(); i++)
            {
                std::cout << aventurier->getVecArme()[i]->to_string();
            }
            //choix arme
            std::cout << "Entrez le numero de l'arme que vous voulez acheter (Celui a cote du nom) \n";
            std::cin >> ans;
            //trouver l'arme selectionné dans le vecteur changer l'arme équipé
            ptrTemp = NULL;
            i = 0;
            for (int i = 0; i < aventurier->getVecArme().size(); i++)
            {
                if (aventurier->getVecArme()[i]->getNb() == ans)
                {
                    aventurier->changerArme(aventurier->getVecArme()[i]);
                }
            }
            break;
        case 5:
            leave = true;
            break;
        default:
            std::cout << "Merci d'entrer une reponse valide";
        }
        _getch();
    }
    delete aventurier;
    delete ptrTemp;
    delete marchand;
}


