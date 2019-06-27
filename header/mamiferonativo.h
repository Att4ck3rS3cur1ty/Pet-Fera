#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "mamifero.h"
#include "animalnativo.h"

class mamiferonativo : public animalnativo, public Mamifero{
  	public:
    	mamiferonativo();
    	mamiferonativo(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, std::string cor_pelo);
    	~mamiferonativo();
};

#endif