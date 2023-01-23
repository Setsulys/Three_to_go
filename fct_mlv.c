#include <MLV/MLV_all.h>
#include <stdio.h>
#include "fct_ascii.h"
#include "fct_mlv.h"

#define WIDTH 1500
#define HEIGHT 800

void dessin(const MLV_Image*Cr,const MLV_Image*Cb,const MLV_Image*Cv,const MLV_Image*Cj,
			const MLV_Image*Cg,const MLV_Image*Co,const MLV_Image*Dr,const MLV_Image*Db,
			const MLV_Image*Dv,const MLV_Image*Dj,const MLV_Image*Dg,const MLV_Image*Do,
			const MLV_Image*Er,const MLV_Image*Eb,const MLV_Image*Ev,const MLV_Image*Ej,
			const MLV_Image*Eg,const MLV_Image*Eo,const MLV_Image*Tr,const MLV_Image*Tb,
			const MLV_Image*Tv,const MLV_Image*Tj,const MLV_Image*Tg,const MLV_Image*To,
			const MLV_Image*Rr,const MLV_Image*Rb,const MLV_Image*Rv,const MLV_Image*Rj,
			const MLV_Image*Rg,const MLV_Image*Ro,const MLV_Image*Hr,const MLV_Image*Hb,
			const MLV_Image*Hv,const MLV_Image*Hj,const MLV_Image*Hg,const MLV_Image*Ho,
			int width,int height, int forme,int couleur,int i){/*fonction affichant les images des tokens de la liste du haut*/
	if(forme==0 && couleur==0)
		MLV_draw_image(Rr,((width/20)*i)+width/20,(height/6)*2);
	if(forme==0 && couleur==1)
		MLV_draw_image(Rv,((width/20)*i)+width/20,(height/6)*2);
	if(forme==0 && couleur==2)
		MLV_draw_image(Rb,((width/20)*i)+width/20,(height/6)*2);
	if(forme==0 && couleur==3)
		MLV_draw_image(Rj,((width/20)*i)+width/20,(height/6)*2);
	if(forme==0 && couleur==4)
		MLV_draw_image(Ro,((width/20)*i)+width/20,(height/6)*2);
	if(forme==0 && couleur==5)
		MLV_draw_image(Rg,((width/20)*i)+width/20,(height/6)*2);

	if(forme==1 && couleur==0)
		MLV_draw_image(Cr,((width/20)*i)+width/20,(height/6)*2);
	if(forme==1 && couleur==1)
		MLV_draw_image(Cv,((width/20)*i)+width/20,(height/6)*2);
	if(forme==1 && couleur==2)
		MLV_draw_image(Cb,((width/20)*i)+width/20,(height/6)*2);
	if(forme==1 && couleur==3)
		MLV_draw_image(Cj,((width/20)*i)+width/20,(height/6)*2);
	if(forme==1 && couleur==4)
		MLV_draw_image(Co,((width/20)*i)+width/20,(height/6)*2);
	if(forme==1 && couleur==5)
		MLV_draw_image(Cg,((width/20)*i)+width/20,(height/6)*2);

	if(forme==2 && couleur==0)
		MLV_draw_image(Tr,((width/20)*i)+width/20,(height/6)*2);
	if(forme==2 && couleur==1)
		MLV_draw_image(Tv,((width/20)*i)+width/20,(height/6)*2);
	if(forme==2 && couleur==2)
		MLV_draw_image(Tb,((width/20)*i)+width/20,(height/6)*2);
	if(forme==2 && couleur==3)
		MLV_draw_image(Tj,((width/20)*i)+width/20,(height/6)*2);
	if(forme==2 && couleur==4)
		MLV_draw_image(To,((width/20)*i)+width/20,(height/6)*2);
	if(forme==2 && couleur==5)
		MLV_draw_image(Tg,((width/20)*i)+width/20,(height/6)*2);

	if(forme==3 && couleur==0)
		MLV_draw_image(Dr,((width/20)*i)+width/20,(height/6)*2);
	if(forme==3 && couleur==1)
		MLV_draw_image(Dv,((width/20)*i)+width/20,(height/6)*2);
	if(forme==3 && couleur==2)
		MLV_draw_image(Db,((width/20)*i)+width/20,(height/6)*2);
	if(forme==3 && couleur==3)
		MLV_draw_image(Dj,((width/20)*i)+width/20,(height/6)*2);
	if(forme==3 && couleur==4)
		MLV_draw_image(Do,((width/20)*i)+width/20,(height/6)*2);
	if(forme==3 && couleur==5)
		MLV_draw_image(Dg,((width/20)*i)+width/20,(height/6)*2);

	if(forme==4 && couleur==0)
		MLV_draw_image(Er,((width/20)*i)+width/20,(height/6)*2);
	if(forme==4 && couleur==1)
		MLV_draw_image(Ev,((width/20)*i)+width/20,(height/6)*2);
	if(forme==4 && couleur==2)
		MLV_draw_image(Eb,((width/20)*i)+width/20,(height/6)*2);
	if(forme==4 && couleur==3)
		MLV_draw_image(Ej,((width/20)*i)+width/20,(height/6)*2);
	if(forme==4 && couleur==4)
		MLV_draw_image(Eo,((width/20)*i)+width/20,(height/6)*2);
	if(forme==4 && couleur==5)
		MLV_draw_image(Eg,((width/20)*i)+width/20,(height/6)*2);

	if(forme==5 && couleur==0)
		MLV_draw_image(Hr,((width/20)*i)+width/20,(height/6)*2);
	if(forme==5 && couleur==1)
		MLV_draw_image(Hv,((width/20)*i)+width/20,(height/6)*2);
	if(forme==5 && couleur==2)
		MLV_draw_image(Hb,((width/20)*i)+width/20,(height/6)*2);
	if(forme==5 && couleur==3)
		MLV_draw_image(Hj,((width/20)*i)+width/20,(height/6)*2);
	if(forme==5 && couleur==4)
		MLV_draw_image(Ho,((width/20)*i)+width/20,(height/6)*2);
	if(forme==5 && couleur==5)
		MLV_draw_image(Hg,((width/20)*i)+width/20,(height/6)*2);
}

void dessinbas(const MLV_Image*Cr,const MLV_Image*Cb,const MLV_Image*Cv,const MLV_Image*Cj,
			const MLV_Image*Cg,const MLV_Image*Co,const MLV_Image*Dr,const MLV_Image*Db,
			const MLV_Image*Dv,const MLV_Image*Dj,const MLV_Image*Dg,const MLV_Image*Do,
			const MLV_Image*Er,const MLV_Image*Eb,const MLV_Image*Ev,const MLV_Image*Ej,
			const MLV_Image*Eg,const MLV_Image*Eo,const MLV_Image*Tr,const MLV_Image*Tb,
			const MLV_Image*Tv,const MLV_Image*Tj,const MLV_Image*Tg,const MLV_Image*To,
			const MLV_Image*Rr,const MLV_Image*Rb,const MLV_Image*Rv,const MLV_Image*Rj,
			const MLV_Image*Rg,const MLV_Image*Ro,const MLV_Image*Hr,const MLV_Image*Hb,
			const MLV_Image*Hv,const MLV_Image*Hj,const MLV_Image*Hg,const MLV_Image*Ho,
			int width,int height, int forme,int couleur,int i){/*fonction affichant les images des tokens de la liste du haut*/
	if(forme==0 && couleur==0)
		MLV_draw_image(Rr,((width/20)*i)+width/20,(height/6)*5);
	if(forme==0 && couleur==1)
		MLV_draw_image(Rv,((width/20)*i)+width/20,(height/6)*5);
	if(forme==0 && couleur==2)
		MLV_draw_image(Rb,((width/20)*i)+width/20,(height/6)*5);
	if(forme==0 && couleur==3)
		MLV_draw_image(Rj,((width/20)*i)+width/20,(height/6)*5);
	if(forme==0 && couleur==4)
		MLV_draw_image(Ro,((width/20)*i)+width/20,(height/6)*5);
	if(forme==0 && couleur==5)
		MLV_draw_image(Rg,((width/20)*i)+width/20,(height/6)*5);

	if(forme==1 && couleur==0)
		MLV_draw_image(Cr,((width/20)*i)+width/20,(height/6)*5);
	if(forme==1 && couleur==1)
		MLV_draw_image(Cv,((width/20)*i)+width/20,(height/6)*5);
	if(forme==1 && couleur==2)
		MLV_draw_image(Cb,((width/20)*i)+width/20,(height/6)*5);
	if(forme==1 && couleur==3)
		MLV_draw_image(Cj,((width/20)*i)+width/20,(height/6)*5);
	if(forme==1 && couleur==4)
		MLV_draw_image(Co,((width/20)*i)+width/20,(height/6)*5);
	if(forme==1 && couleur==5)
		MLV_draw_image(Cg,((width/20)*i)+width/20,(height/6)*5);

	if(forme==2 && couleur==0)
		MLV_draw_image(Tr,((width/20)*i)+width/20,(height/6)*5);
	if(forme==2 && couleur==1)
		MLV_draw_image(Tv,((width/20)*i)+width/20,(height/6)*5);
	if(forme==2 && couleur==2)
		MLV_draw_image(Tb,((width/20)*i)+width/20,(height/6)*5);
	if(forme==2 && couleur==3)
		MLV_draw_image(Tj,((width/20)*i)+width/20,(height/6)*5);
	if(forme==2 && couleur==4)
		MLV_draw_image(To,((width/20)*i)+width/20,(height/6)*5);
	if(forme==2 && couleur==5)
		MLV_draw_image(Tg,((width/20)*i)+width/20,(height/6)*5);

	if(forme==3 && couleur==0)
		MLV_draw_image(Dr,((width/20)*i)+width/20,(height/6)*5);
	if(forme==3 && couleur==1)
		MLV_draw_image(Dv,((width/20)*i)+width/20,(height/6)*5);
	if(forme==3 && couleur==2)
		MLV_draw_image(Db,((width/20)*i)+width/20,(height/6)*5);
	if(forme==3 && couleur==3)
		MLV_draw_image(Dj,((width/20)*i)+width/20,(height/6)*5);
	if(forme==3 && couleur==4)
		MLV_draw_image(Do,((width/20)*i)+width/20,(height/6)*5);
	if(forme==3 && couleur==5)
		MLV_draw_image(Dg,((width/20)*i)+width/20,(height/6)*5);

	if(forme==4 && couleur==0)
		MLV_draw_image(Er,((width/20)*i)+width/20,(height/6)*5);
	if(forme==4 && couleur==1)
		MLV_draw_image(Ev,((width/20)*i)+width/20,(height/6)*5);
	if(forme==4 && couleur==2)
		MLV_draw_image(Eb,((width/20)*i)+width/20,(height/6)*5);
	if(forme==4 && couleur==3)
		MLV_draw_image(Ej,((width/20)*i)+width/20,(height/6)*5);
	if(forme==4 && couleur==4)
		MLV_draw_image(Eo,((width/20)*i)+width/20,(height/6)*5);
	if(forme==4 && couleur==5)
		MLV_draw_image(Eg,((width/20)*i)+width/20,(height/6)*5);

	if(forme==5 && couleur==0)
		MLV_draw_image(Hr,((width/20)*i)+width/20,(height/6)*5);
	if(forme==5 && couleur==1)
		MLV_draw_image(Hv,((width/20)*i)+width/20,(height/6)*5);
	if(forme==5 && couleur==2)
		MLV_draw_image(Hb,((width/20)*i)+width/20,(height/6)*5);
	if(forme==5 && couleur==3)
		MLV_draw_image(Hj,((width/20)*i)+width/20,(height/6)*5);
	if(forme==5 && couleur==4)
		MLV_draw_image(Ho,((width/20)*i)+width/20,(height/6)*5);
	if(forme==5 && couleur==5)
		MLV_draw_image(Hg,((width/20)*i)+width/20,(height/6)*5);
}

int graphique(Liste lstHaut,ListeRepere *lst){

	int width=1500,height=800;


	Liste lstBas = lst->debut;
	int i=0;


	/*----------------------------------initialisation des couleurs et formes----------------------------------*/
	MLV_Image *Cr=MLV_load_image("src/tokens/carrerouge.png");
	MLV_Image *Cb=MLV_load_image("src/tokens/carrebleu.png");
	MLV_Image *Cv=MLV_load_image("src/tokens/carrevert.png");
	MLV_Image *Cj=MLV_load_image("src/tokens/carrejaune.png");
	MLV_Image *Cg=MLV_load_image("src/tokens/carregris.png");
	MLV_Image *Co=MLV_load_image("src/tokens/carreorange.png");

	MLV_Image *Dr=MLV_load_image("src/tokens/diamantrouge.png");
	MLV_Image *Db=MLV_load_image("src/tokens/diamantbleu.png");
	MLV_Image *Dv=MLV_load_image("src/tokens/diamantvert.png");
	MLV_Image *Dj=MLV_load_image("src/tokens/diamantjaune.png");
	MLV_Image *Dg=MLV_load_image("src/tokens/diamantgris.png");
	MLV_Image *Do=MLV_load_image("src/tokens/diamantorange.png");

	MLV_Image *Tr=MLV_load_image("src/tokens/trianglerouge.png");
	MLV_Image *Tb=MLV_load_image("src/tokens/trianglebleu.png");
	MLV_Image *Tv=MLV_load_image("src/tokens/trianglevert.png");
	MLV_Image *Tj=MLV_load_image("src/tokens/trianglejaune.png");
	MLV_Image *Tg=MLV_load_image("src/tokens/trianglegris.png");
	MLV_Image *To=MLV_load_image("src/tokens/triangleorange.png");

	MLV_Image *Rr=MLV_load_image("src/tokens/rondrouge.png");
	MLV_Image *Rb=MLV_load_image("src/tokens/rondbleu.png");
	MLV_Image *Rv=MLV_load_image("src/tokens/rondvert.png");
	MLV_Image *Rj=MLV_load_image("src/tokens/rondjaune.png");
	MLV_Image *Rg=MLV_load_image("src/tokens/rondgris.png");
	MLV_Image *Ro=MLV_load_image("src/tokens/rondorange.png");

	MLV_Image *Hr=MLV_load_image("src/tokens/Hexarouge.png");
	MLV_Image *Hb=MLV_load_image("src/tokens/Hexableu.png");
	MLV_Image *Hv=MLV_load_image("src/tokens/Hexavert.png");
	MLV_Image *Hj=MLV_load_image("src/tokens/Hexajaune.png");
	MLV_Image *Hg=MLV_load_image("src/tokens/Hexagris.png");
	MLV_Image *Ho=MLV_load_image("src/tokens/Hexaorange.png");

	MLV_Image *Er=MLV_load_image("src/tokens/etoilerouge.png");
	MLV_Image *Eb=MLV_load_image("src/tokens/etoilebleu.png");
	MLV_Image *Ev=MLV_load_image("src/tokens/etoilevert.png");
	MLV_Image *Ej=MLV_load_image("src/tokens/etoilejaune.png");
	MLV_Image *Eg=MLV_load_image("src/tokens/etoilegris.png");
	MLV_Image *Eo=MLV_load_image("src/tokens/etoileorange.png");

	MLV_Image *titre=MLV_load_image("src/tokens/titre.png");
	MLV_Image *FD = MLV_load_image("src/tokens/fledroite.png");
	MLV_Image *FG = MLV_load_image("src/tokens/flegauche.png");
	MLV_Image *ABN = MLV_load_image("src/tokens/abn.png");
	MLV_Image *fl = MLV_load_image("src/tokens/flechesup.png");


	/*----------------------------------Redimetion de la taille----------------------------------*/
	MLV_resize_image(Cr,(width/20)-5,(width/20)-5);
	MLV_resize_image(Cb,(width/20)-5,(width/20)-5);
	MLV_resize_image(Cv,(width/20)-5,(width/20)-5);
	MLV_resize_image(Cj,(width/20)-5,(width/20)-5);
	MLV_resize_image(Cg,(width/20)-5,(width/20)-5);
	MLV_resize_image(Co,(width/20)-5,(width/20)-5);

	MLV_resize_image(Dr,(width/20)-5,(width/20)-5);
	MLV_resize_image(Db,(width/20)-5,(width/20)-5);
	MLV_resize_image(Dv,(width/20)-5,(width/20)-5);
	MLV_resize_image(Dj,(width/20)-5,(width/20)-5);
	MLV_resize_image(Dg,(width/20)-5,(width/20)-5);
	MLV_resize_image(Do,(width/20)-5,(width/20)-5);

	MLV_resize_image(Tr,(width/20)-5,(width/20)-5);
	MLV_resize_image(Tb,(width/20)-5,(width/20)-5);
	MLV_resize_image(Tv,(width/20)-5,(width/20)-5);
	MLV_resize_image(Tj,(width/20)-5,(width/20)-5);
	MLV_resize_image(Tg,(width/20)-5,(width/20)-5);
	MLV_resize_image(To,(width/20)-5,(width/20)-5);

	MLV_resize_image(Rr,(width/20)-5,(width/20)-5);
	MLV_resize_image(Rb,(width/20)-5,(width/20)-5);
	MLV_resize_image(Rv,(width/20)-5,(width/20)-5);
	MLV_resize_image(Rj,(width/20)-5,(width/20)-5);
	MLV_resize_image(Rg,(width/20)-5,(width/20)-5);
	MLV_resize_image(Ro,(width/20)-5,(width/20)-5);

	MLV_resize_image(Hr,(width/20)-5,(width/20)-5);
	MLV_resize_image(Hb,(width/20)-5,(width/20)-5);
	MLV_resize_image(Hv,(width/20)-5,(width/20)-5);
	MLV_resize_image(Hj,(width/20)-5,(width/20)-5);
	MLV_resize_image(Hg,(width/20)-5,(width/20)-5);
	MLV_resize_image(Ho,(width/20)-5,(width/20)-5);

	MLV_resize_image(Er,(width/20)-5,(width/20)-5);
	MLV_resize_image(Eb,(width/20)-5,(width/20)-5);
	MLV_resize_image(Ev,(width/20)-5,(width/20)-5);
	MLV_resize_image(Ej,(width/20)-5,(width/20)-5);
	MLV_resize_image(Eg,(width/20)-5,(width/20)-5);
	MLV_resize_image(Eo,(width/20)-5,(width/20)-5);

	MLV_resize_image(titre,651,150);
	MLV_resize_image(FD,(width/20)-5,(width/20)-5);
	MLV_resize_image(FG,(width/20)-5,(width/20)-5);
	MLV_resize_image(ABN,(width/20)-5,(width/20)-5);
	MLV_resize_image(fl,(width/20)-5,(width/20)-5);


	/*--------------affichage----------*/
	MLV_draw_image(FG,(width/20)*2,((height/6)*4));/*affichage de la fleche gauche*/
	MLV_draw_image(FD,(width/20)*18,((height/6)*4));/*affichage de la fleche droite*/
	MLV_draw_image(ABN,(width/20)*10,((height/6)*4));/*affichage du boutton d'abandon*/
	MLV_draw_image(fl,((width/20)*0)+width/20,(height/5)*1);/*affichage de la fleche pointant le prochain token*/
  	MLV_draw_image(titre,((width/20)*6),0);/*affichage du titre du jeu*/

 /*----------------------------------Partie jeu----------------------------------*/
	while(lstHaut!=NULL){/*boucle affichant les 5 tokens de la liste du haut du jeu*/
		dessin(	Cr,Cb,Cv,Cj,Cg,Co,Dr,Db,Dv,Dj,Dg,Do,
					Er,Eb,Ev,Ej,Eg,Eo,Tr,Tb,Tv,Tj,Tg,To,
					Rr,Rb,Rv,Rj,Rg,Ro,Hr,Hb,Hv,Hj,Hg,Ho,width,height,lstHaut->forme,lstHaut->couleur,i);
		i++;
		MLV_actualise_window();
		lstHaut=lstHaut->suivant;
	}
	for(i=0; i < lst->cpt; i++){/*boucle affichant les tokens de la liste du bas du jeu*/
		dessinbas(Cr,Cb,Cv,Cj,Cg,Co,Dr,Db,Dv,Dj,Dg,Do,
				Er,Eb,Ev,Ej,Eg,Eo,Tr,Tb,Tv,Tj,Tg,To,
				Rr,Rb,Rv,Rj,Rg,Ro,Hr,Hb,Hv,Hj,Hg,Ho,width,height,lstBas->forme,lstBas->couleur,i);
		MLV_actualise_window();

		lstBas=lstBas->suivant;
	}

/*----------------------------------Liberation de la memoire image----------------------------------*/
	MLV_free_image(Cr);
	MLV_free_image(Cb);
	MLV_free_image(Cv);
	MLV_free_image(Cj);
	MLV_free_image(Cg);
	MLV_free_image(Co);

	MLV_free_image(Dr);
	MLV_free_image(Db);
	MLV_free_image(Dv);
	MLV_free_image(Dj);
	MLV_free_image(Dg);
	MLV_free_image(Do);

	MLV_free_image(Er);
	MLV_free_image(Eb);
	MLV_free_image(Ev);
	MLV_free_image(Ej);
	MLV_free_image(Eg);
	MLV_free_image(Eo);

	MLV_free_image(Tr);
	MLV_free_image(Tb);
	MLV_free_image(Tv);
	MLV_free_image(Tj);
	MLV_free_image(Tg);
	MLV_free_image(To);

	MLV_free_image(Rr);
	MLV_free_image(Rb);
	MLV_free_image(Rv);
	MLV_free_image(Rj);
	MLV_free_image(Rg);
	MLV_free_image(Ro);

	MLV_free_image(Hr);
	MLV_free_image(Hb);
	MLV_free_image(Hv);
	MLV_free_image(Hj);
	MLV_free_image(Hg);
	MLV_free_image(Ho);

	MLV_free_image(titre);
	MLV_free_image(FG);
	MLV_free_image(FD);
  	MLV_free_image(fl);
  	MLV_free_image(ABN);
	/*----------------------------------Liberation de la memoire de l'ecran----------------------------------*/

	return 0;
};

int coteMLV(int width,ListeRepere *lst,Liste supp){ /* choix du cote pour placer le token supp */
	int x,y;
	do{
		MLV_wait_mouse(&x,&y);
	}while((x>=(width/20)*18 && y>=500 && x<=(width/20)*18+(width/20)-5 && y<=500+(width/20)-5)
		&&(x>=(width/20)*10 && y >=500 && x<=(width/20)*10+(width/20)-5 && y<=500+(width/20)-5)
		&&(x>=(width/20)*2 && y>=500 && x<=(width/20)*2+(width/20)-5 && y<=500+(width/20)-5)); /*clique controlé */


	if(x>=(width/20)*18 && y>=500 && x<=(width/20)*18+(width/20)-5 && y<=500+(width/20)-5){/*clique sur la fleche de gauche*/
    printf("droite\n");
		ins_list_circ_D(lst, lst->fin ,supp);
	}
	if(x>=(width/20)*10 && y >=500 && x<=(width/20)*10+(width/20)-5 && y<=500+(width/20)-5){/*cique sur le bouton abn qui entraine un abandon de la partie*/
		return 1;
	}
	if(x>=(width/20)*2 && y>=500 && x<=(width/20)*2+(width/20)-5 && y<=500+(width/20)-5){/*clique sur la fleche de droite*/
    printf("gauche\n");
		ins_list_circ_G(lst, lst->fin ,supp);
	}
	MLV_actualise_window();
	return 0;
}

void afficheScore(ListeRepere *lst){/*affiche le score en cours de partie*/
  MLV_draw_text((WIDTH/20)*18, (HEIGHT/6), "score : %d", MLV_COLOR_GREEN, lst->score);
}

void affichePerdu(ListeRepere *lst, MLV_Music* loose){/*montre une fenetre avec un message perdu une musique de defaite et le score du joueur*/
  MLV_clear_window(MLV_COLOR_BLACK);
  MLV_Image *perdu = MLV_load_image("src/tokens/perdu.png");
  MLV_resize_image(perdu,(WIDTH/2),(WIDTH/6)*2);
  MLV_draw_image(perdu,WIDTH/4,HEIGHT/4);
  MLV_draw_text((WIDTH/2), (HEIGHT/3)*2, "score : %d", MLV_COLOR_GREEN, lst->score);
  MLV_play_music(loose,1.0,1);
  afficheNom();
  MLV_actualise_window();
  MLV_wait_seconds(9);
  MLV_free_image(perdu);
  MLV_free_music(loose);
}

void afficheAbandon(ListeRepere *lst, MLV_Music* loose){/**montre une fenetre avec un message abandon une musique de defaite et le score du joueur*/
  MLV_clear_window(MLV_COLOR_BLACK);
  MLV_Image *abandon = MLV_load_image("src/tokens/abandon.png");
  MLV_resize_image(abandon,(WIDTH/2),(WIDTH/6)*2);
  MLV_draw_image(abandon,WIDTH/4,HEIGHT/4);
  MLV_draw_text((WIDTH/2), (HEIGHT/3)*2, "score : %d", MLV_COLOR_GREEN, lst->score);
  MLV_play_music(loose,1.0,1);
  afficheNom();
  MLV_actualise_window();
  MLV_wait_seconds(9);
  MLV_free_image(abandon);
  MLV_free_music(loose);
}

void afficheNom(){/*affichage du nom des createur avec un copyright*/
  MLV_draw_text((WIDTH/30)*26, (HEIGHT/50)*49, "© LY Steven Lousado Fabio", MLV_COLOR_GREEN);
}

void afficheRegles(){/*affichage en debut de partie des regles du jeu*/
  int x, y;
  MLV_clear_window(MLV_COLOR_BLACK);
  MLV_Image *titre = MLV_load_image("src/tokens/titre.png");
  MLV_resize_image(titre,651,150);
  MLV_draw_image(titre,((WIDTH/20)*6),0);
  MLV_draw_text(WIDTH/4, (HEIGHT/16)*5, "Three to go est un jeu de réflexion où l’on a une liste de formes et couleurs", MLV_COLOR_GREEN);
  MLV_draw_text(WIDTH/4, (HEIGHT/16)*6, "En les alignants à partir de 3 couleurs et ou  3 formes ces dernières se suppriment", MLV_COLOR_GREEN);
  MLV_draw_text(WIDTH/4, (HEIGHT/16)*7, "l'utilisateur pourra placer les tokens à droite ou à gauche ", MLV_COLOR_GREEN);
  MLV_draw_text(WIDTH/4, (HEIGHT/16)*8, "vous devez ici cliquer sur les fleches vertes pour positionner les formes colorés", MLV_COLOR_GREEN);
  MLV_draw_text(WIDTH/4, (HEIGHT/16)*9, "ou bien vous pouvez decider d'abandonner", MLV_COLOR_GREEN);
  MLV_draw_text(WIDTH/4, (HEIGHT/16)*10, "La suppresion des tokens vous octroie 100 pts supplémentaire", MLV_COLOR_GREEN);
  MLV_draw_text(WIDTH/4, (HEIGHT/16)*11, "Cliquer sur la fenetre pour faire disparaitre ce message", MLV_COLOR_GREEN);
  afficheNom();
  MLV_actualise_window();
  MLV_wait_mouse(&x, &y);
  MLV_free_image(titre);
}
