#ifndef _REPTIL_NATIVO_H_
#define _REPTIL_NATIVO_H_

#include "reptil.h"
#include "animalnativo.h"

class reptilnativo : public animalnativo, public Reptil{
  	public:
    	reptilnativo();
    	reptilnativo(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, bool venenoso, std::string tipo_veneno);
    	~reptilnativo();
};

#endif