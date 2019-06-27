#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "mamifero.h"
#include "animalexotico.h"

class mamiferoexotico : public animalexotico, public Mamifero{
  	public:
    	mamiferoexotico();
    	mamiferoexotico(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, std::string cor_pelo);
    	~mamiferoexotico();
};

#endif