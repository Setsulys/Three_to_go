typedef struct token {
	int couleur;
	int forme;
	struct token* suivant;
	struct token* suivant_couleur;
	struct token* precedent_couleur;
	struct token* suivant_forme;
	struct token* precedent_forme;
}Token,*Liste;

typedef struct listeRepere{
  Liste debut;
  Liste fin;
	int cpt;
  int score;
}ListeRepere;

int Rand(int max);
int nbCouleur();
int nbForme();
int selectionJeu();
void initListeRepere(ListeRepere *lst);
int ins_list_circ_vide(ListeRepere *lst, int couleur, int forme);
int ins_list_circ_G(ListeRepere *lst, Liste lstBas, Liste supp);
int ins_list_circ_D(ListeRepere *lst, Liste lstBas, Liste supp);
void afficheLstBas(ListeRepere *lst);
Liste AlloueCellule(int c, int f);
void affiche(Liste l);
Liste ajouteLstHaut(Liste *l,int c,int f);
Liste initListe(int *nbforme, int *nbcouleur);
Liste suppr(Liste *l);
int SelectionCote(ListeRepere *lst, Liste supp);
int suppTriplet(ListeRepere *lst);
int selectiongraph();
