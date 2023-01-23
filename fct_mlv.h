void dessin(const MLV_Image*Cr,const MLV_Image*Cb,const MLV_Image*Cv,const MLV_Image*Cj,
			const MLV_Image*Cg,const MLV_Image*Co,const MLV_Image*Dr,const MLV_Image*Db,
			const MLV_Image*Dv,const MLV_Image*Dj,const MLV_Image*Dg,const MLV_Image*Do,
			const MLV_Image*Er,const MLV_Image*Eb,const MLV_Image*Ev,const MLV_Image*Ej,
			const MLV_Image*Eg,const MLV_Image*Eo,const MLV_Image*Tr,const MLV_Image*Tb,
			const MLV_Image*Tv,const MLV_Image*Tj,const MLV_Image*Tg,const MLV_Image*To,
			const MLV_Image*Rr,const MLV_Image*Rb,const MLV_Image*Rv,const MLV_Image*Rj,
			const MLV_Image*Rg,const MLV_Image*Ro,const MLV_Image*Hr,const MLV_Image*Hb,
			const MLV_Image*Hv,const MLV_Image*Hj,const MLV_Image*Hg,const MLV_Image*Ho,
			int width,int height, int forme,int couleur,int i);
void dessinbas(const MLV_Image*Cr,const MLV_Image*Cb,const MLV_Image*Cv,const MLV_Image*Cj,
			const MLV_Image*Cg,const MLV_Image*Co,const MLV_Image*Dr,const MLV_Image*Db,
			const MLV_Image*Dv,const MLV_Image*Dj,const MLV_Image*Dg,const MLV_Image*Do,
			const MLV_Image*Er,const MLV_Image*Eb,const MLV_Image*Ev,const MLV_Image*Ej,
			const MLV_Image*Eg,const MLV_Image*Eo,const MLV_Image*Tr,const MLV_Image*Tb,
			const MLV_Image*Tv,const MLV_Image*Tj,const MLV_Image*Tg,const MLV_Image*To,
			const MLV_Image*Rr,const MLV_Image*Rb,const MLV_Image*Rv,const MLV_Image*Rj,
			const MLV_Image*Rg,const MLV_Image*Ro,const MLV_Image*Hr,const MLV_Image*Hb,
			const MLV_Image*Hv,const MLV_Image*Hj,const MLV_Image*Hg,const MLV_Image*Ho,
			int width,int height, int forme,int couleur,int i);
int graphique(Liste lstHaut,ListeRepere *lst);
int coteMLV(int width,ListeRepere *lst,Liste supp);
void afficheScore(ListeRepere *lst);
void affichePerdu(ListeRepere *lst, MLV_Music* loose);
void afficheAbandon(ListeRepere *lst, MLV_Music* loose);
void afficheNom();
void afficheRegles();
