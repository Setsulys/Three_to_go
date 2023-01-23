#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>
#include "fct_ascii.h"
#include "fct_mlv.h"
#define MAX 3
#define TAILLE 5
#define WIDTH 1500
#define HEIGHT 800


int main(int argc, char const *argv[]){
	ListeRepere lst;
	Liste lstHaut, supp;
	int nbcouleur = MAX, nbforme = MAX;
	int jeu=0,graph=0;


	MLV_init_audio();/*initialisation des données audio*/
	MLV_Music* music = MLV_load_music("src/inplay.mp3");/*import de la musique inplay.mp3 qui se jouera pendant la partie*/
	MLV_Music* loose = MLV_load_music("src/abn_perdu.mp3");/*import de la musique abn_perdu.mp3 qui se jouera en fin de partie*/

	srand(time(NULL));

	initListeRepere(&lst);

	MLV_play_music(music,1.0,-1);
	jeu=selectionJeu();

	if(jeu==1){
		nbcouleur = nbCouleur();
		nbforme = nbForme();
	}
	graph=selectiongraph();

	ins_list_circ_vide(&lst,Rand(MAX),Rand(MAX));

	lstHaut=initListe(&nbforme,&nbcouleur);


	/*----- BOUCLE PRINCIPALE DU JEU -----*/


	if(graph==1){/*Partie avec le mode graphique MLV*/
		MLV_create_window("three to go","image",WIDTH,HEIGHT);
		afficheRegles();
		while(1){
			MLV_clear_window(MLV_COLOR_BLACK);
			afficheScore(&lst);
			afficheNom();
			graphique(lstHaut,&lst);
			ajouteLstHaut(&lstHaut,Rand(nbforme),Rand(nbcouleur));
			supp = suppr(&lstHaut);
			graphique(lstHaut,&lst);


			if(coteMLV(WIDTH,&lst,supp)==1){ /* le joueur a decide d'abandonner */
				afficheAbandon(&lst, loose);
				return 0;
			}
			if(suppTriplet(&lst)){
				printf("Token supprimé\n");
			}
			if(lst.cpt==18){ /* le nombre maximal de token a ete atteint */
				affichePerdu(&lst, loose);
				return 0;
			}
		}
	}
	else{
		while(1){/*partie avec le mode graphique ascii*/
			printf("tokens a inserer : \n");
			affiche(lstHaut);


			ajouteLstHaut(&lstHaut,Rand(nbforme),Rand(nbcouleur));
			supp = suppr(&lstHaut);


			printf("veuillez placer le token suivant : ");
			affiche(supp);

			if(SelectionCote(&lst,supp) == 0){
				printf("Vous avez decidé d'abandonner\n");
				printf("Votre score : %d \n", lst.score);
				return 0;
			}

			printf("token placé : \n");
			afficheLstBas(&lst);

			if(suppTriplet(&lst)){
				printf("TOKENS SUPPRIMER\n\n");
			}
			if(lst.cpt==18){
				printf("perdu\n");
			/*Musique lorsque la partie est abandonnée*/
				MLV_play_music(loose,1.0,1);
				MLV_wait_seconds(6);
				printf("Votre score : %d \n", lst.score);
				return 0;
			}
		}
	}

	/*-------------------------------------------------LIBERATION DE LA MEMOIRE------------------------------------*/
	MLV_free_music(music);
	free(lstHaut);
	free(&lst);
	MLV_free_audio();
	return 0;
}
