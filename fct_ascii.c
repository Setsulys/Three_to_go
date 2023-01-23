#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "fct_ascii.h"
#define MAX 3
#define TAILLE 5

int Rand(int max){ /*genere un nombre aleatoire entre 0 et max utilise pour les formes/couleurs */
    return rand() % max;
}

int nbCouleur(){ /*on choisis le nombre de couleur dans le jeu*/

	int nbcouleur;

	printf("Nombre de couleur dans le jeu : ");
	do{
		scanf(" %d", &nbcouleur);
	}while(nbcouleur<2 || nbcouleur > 7);/*saisie controlée*/

	return nbcouleur;
}

int nbForme(){/*on choisis le nombre de formes dans le jeu*/
	int nbforme;

	printf("Nombre de forme dans le jeu: : ");
	do{
		scanf(" %d", &nbforme);
	}while(nbforme<2 || nbforme > 7);/*saisie controlée*/

	return nbforme;
}

int selectionJeu(){/*L'utilisateur choisis entre jouer avec 4types de tokens de bases ou bien il peut choisir quels tokens sont dans le jeu*/
	char jeu='b';
	printf("\n|---Selectionnez un mode de jeu---|\n\n");
	printf("--Partie Standard | Partie Personnalisé--\n");
		printf("------------[S][P]------------\n");
	do{
		scanf(" %c",&jeu);
		jeu=toupper(jeu);
		if(jeu!='S'&&jeu!='P')
			printf("!!Erreur!!\n!!!choisisez entre les deux valeurs!!!\n------------[S][P]------------\n");
	}while(jeu!='S' && jeu!='P');/*saisie controlée*/
	printf("\n\n");
	if(jeu=='P'){
		printf("Mode de jeu choisis:[Partie Personnalisé]\n");
		return 1;
	}
	printf("Mode de jeu choisis:[Partie Standard]\n");
	return 0;
}

void initListeRepere(ListeRepere *lst){ /* initialisation de la liste circulaire */
  lst->debut = NULL;
  lst->fin = NULL;
  lst->cpt = 0;
  lst->cpt = 0;
}

/* fct insertion dans la liste circulaire vide / gauche / droite */

int ins_list_circ_vide(ListeRepere *lst, int couleur, int forme){
  Liste tmp;
  if((tmp = (Liste) malloc(sizeof(Token))) == NULL)
    return -1;


  tmp->couleur = couleur;
	tmp->forme = forme;
  tmp->suivant = tmp;
	tmp->suivant_forme = tmp;
	tmp->suivant_couleur = tmp;
  lst->debut = tmp;
  lst->fin = tmp;
	lst->cpt++;

  return 0;
}

int ins_list_circ_G(ListeRepere *lst, Liste lstBas, Liste supp){/*fonction mettant le token sur la gauche de la liste du bas*/
  Liste tmp;
  if((tmp = (Liste) malloc(sizeof(Token))) == NULL)
    return -1;
  if(lstBas != lst->fin)
    return -1;

	tmp->couleur = supp->couleur;
	tmp->forme = supp->forme;
  tmp->suivant = lstBas->suivant;
  lstBas->suivant = tmp;
  lst->debut = tmp;
  lst->cpt++;

  return 0;
}

int ins_list_circ_D(ListeRepere *lst, Liste lstBas, Liste supp){/*fonction mettant le token sur la droite de la liste du bas*/
  Liste tmp;
  if((tmp = (Liste) malloc(sizeof(Token))) == NULL)
    return -1;
  if(lstBas != lst->fin)
    return -1;

	tmp->couleur = supp->couleur;
	tmp->forme = supp->forme;
	tmp->suivant = lstBas->suivant;
  lstBas->suivant = tmp;
  lst->fin = tmp;
  lst->cpt++;

	while(lstBas->suivant != lst->debut){
		if(lstBas->couleur == tmp->couleur){
			tmp->suivant_couleur = lstBas;
		}
		if(lstBas->forme == tmp->forme){
			tmp->suivant_forme = lstBas;
		}
		lstBas = lstBas->suivant;
	}

  return 0;
}


void afficheLstBas(ListeRepere *lst){/*affichage des token pour le mode ascii avec la liste du bas*/
	Liste lstBas = lst->debut;
	int i;
	for(i=0; i < lst->cpt; i++){
		switch(lstBas->forme){
			case 0:printf("O");break;/*cercle*/
			case 1:printf("C");break;/*carré*/
			case 2:printf("T");break;/*Triangle*/
			case 3:printf("D");break;/*Diamant*/
			case 4:printf("P");break;/*pentagone*/
			case 5:printf("H");break;/*Hexagone*/
		}
		printf(" ");
		switch(lstBas->couleur){
			case 0:printf("r");break;/*rouge*/
			case 1:printf("v");break;/*vert*/
			case 2:printf("b");break;/*bleu*/
			case 3:printf("j");break;/*jaune*/
			case 4:printf("o");break;/*orange*/
			case 5:printf("g");break;/*gris*/
		}
		printf(" --> ");
		lstBas = lstBas->suivant;
	}
	printf("\n\n");
}

Liste AlloueCellule(int c, int f){
	Liste tmp=NULL;
	tmp=(Token * )malloc(sizeof(Token));
	if(tmp!=NULL){
		tmp->couleur = c;
		tmp->forme = f;
		tmp->suivant = NULL;
		tmp->suivant_couleur = NULL;
		tmp->precedent_couleur = NULL;
		tmp->suivant_forme = NULL;
		tmp->precedent_forme = NULL;
	}

	return tmp;
}

void affiche(Liste l){	/*affichage des token pour le mode ascii avec la liste de tokens aléatoires*/
	while(l !=NULL){
		switch(l->forme){
			case 0:printf("O");break;/*cercle*/
			case 1:printf("C");break;/*carré*/
			case 2:printf("T");break;/*Triangle*/
			case 3:printf("D");break;/*Diamant*/
			case 4:printf("P");break;/*pentagone*/
			case 5:printf("H");break;/*Hexagone*/
		}
		printf(" ");
		switch(l->couleur){
			case 0:printf("r");break;/*rouge*/
			case 1:printf("v");break;/*vert*/
			case 2:printf("b");break;/*bleu*/
			case 3:printf("j");break;/*jaune*/
			case 4:printf("o");break;/*orange*/
			case 5:printf("g");break;/*gris*/
		}
		printf(" <-- ");
		l=l->suivant;
	}
	printf("\n\n");
}

Liste ajouteLstHaut(Liste *l,int c,int f){ /*ajoute un objet en fin de la liste d'insertion ( liste du haut )*/
	Liste tmp=NULL,index=*l;
	tmp=AlloueCellule(c,f);
	while(index->suivant!=NULL)
		index=index->suivant;
	index->suivant=tmp;
	return tmp;
}

Liste initListe(int *nbforme, int *nbcouleur){/*initialise la liste avec un token*/
	Liste tmp=NULL;
	int cpt=0;
	tmp = AlloueCellule(Rand(*nbcouleur),Rand(*nbforme));
	while(cpt<TAILLE){
		ajouteLstHaut(&tmp,Rand(*nbcouleur),Rand(*nbforme));
		cpt++;
	}
	return tmp;
}

Liste suppr(Liste *l){ /*supprime la premiere valeur de la liste du haut*/
	Liste tmp=NULL;

	tmp=*l;
	*l=(*l)->suivant;
	tmp->suivant=NULL;

	return tmp;
}

int SelectionCote(ListeRepere *lst, Liste supp){/*en mode ascii le joueur selectionne de quel coté il veut placer le token*/
	char cote='\0';
	printf("Veuillez placer le token\n");
	printf("<--[G][Q][D]-->\n");

	afficheLstBas(lst);

	do{
		scanf(" %c",&cote);
		cote=toupper(cote);
		if(cote == 'Q') return 0;
	}while(cote!='G'&& cote!='D');

	if(cote=='G')
		ins_list_circ_G(lst, lst->fin ,supp);
	else
		ins_list_circ_D(lst, lst->fin ,supp);
	printf("\n\n");

	return 1;
}

int suppTriplet(ListeRepere *lst){ /*On se positionne dans la cellule precedant les calculs-- si les 3 cellules suivantes ont des couleurs ou des formes similaires alors elles se suppriment*/
	Liste index = lst->debut;
	Liste aSupprimer = NULL;
	if(lst->cpt >= 3){
		while((index->suivant)->suivant->suivant->suivant != lst->debut){
			if((index->suivant)->forme == (index)->suivant->suivant->forme && (index)->suivant->suivant->forme == (index)->suivant->suivant->suivant->forme){
				aSupprimer = index->suivant;
				 /* suppression des cellules contenu dans aSupprimer de lstBas*/
				index->suivant = index->suivant->suivant->suivant->suivant;
				free(aSupprimer);
        lst->score += 100;
				lst->cpt -= 3;
				if(lst->cpt == 0)
					ins_list_circ_vide(lst,Rand(MAX), Rand(MAX));
				return 1;
			}
			if((index->suivant)->couleur == (index)->suivant->suivant->couleur && (index)->suivant->suivant->couleur == (index)->suivant->suivant->suivant->couleur){
				aSupprimer = index->suivant;
				 /* suppression des cellules contenu dans aSupprimer de lstBas*/
				index->suivant = index->suivant->suivant->suivant->suivant;
				free(aSupprimer);
        lst->score += 100;
				lst->cpt -= 3;
				if(lst->cpt == 0)
					ins_list_circ_vide(lst,Rand(MAX), Rand(MAX));
				return 1;
			}
			index = index->suivant;
		}
	}
	return 0;
}

int selectiongraph(){ /* permet de selectionner l'affichage assci / mlv */
	char graph='b';
	printf("\n|---Selectionnez le graphique---|\n\n");
	printf("--Partie Ascii | Partie MLV--\n");
		printf("------------[A][M]------------\n");
	do{
		scanf(" %c",&graph);
		graph=toupper(graph);
		if(graph!='A'&&graph!='M')
			printf("!!Erreur!!\n!!!choisisez entre les deux valeurs!!!\n------------[A][M]------------\n");
	}while(graph!='A' && graph!='M');
	printf("\n\n");
	if(graph=='M'){
		printf("Mode de jeu choisis:[graphique MLV]\n");
		return 1;
	}
	printf("Mode de jeu choisis:[graphiques AScii]\n");
	return 0;
}
