#ifndef _REPTIL_EXOTICO_H_
#define _REPTIL_EXOTICO_H_

#include "reptil.h"
#include "animalexotico.h"

class reptilexotico : public animalexotico, public Reptil{
  	public:
    	reptilexotico();
    	reptilexotico(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, bool venenoso, std::string tipo_veneno);
    	~reptilexotico();
};

#endif