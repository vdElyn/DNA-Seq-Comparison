#include "famille.h"


struct ALIGNEMENT{
	
	int numSeq;
	char* seq;
	struct ALIGNEMENT* suiv;	
	
	
};
typedef struct ALIGNEMENT Alignement;

void creaConsensus(Famille *AllF, Distance *All, char** argv);
Alignement *initAlignement(Alignement* list, int seq1, int seq2, int seqMax, char** argv);
Alignement *ajoutSequence(Alignement*list, int seq, int i);
Alignement *libereAlignement(Alignement* list);




















//struct ALIGNEMENTFAUX{
	
	//Famille F;
	//char **seqTab; //Tableau pour aligner les séquences et faire analyser les fréquences des nucléotides selon leur place
	//int lmax; //longueur max des séquences de la famille
	////char *seqCons; //Séquence consensus de la famille
	
	
//};
//typedef struct ALIGNEMENTFAUX Alignement;

//Alignement initAlignementFAUX(Famille F, char** argv);
//Alignement *creaAlignement(Famille *AllF, int tailleTab, char** argv);
//void libereAlignement(Alignement A);
//void libereAllAlignement(Alignement *AllA, int tailleTab);