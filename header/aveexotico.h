#ifndef _AVE_EXOTICO_H_
#define _AVE_EXOTICO_H_

#include "ave.h"
#include "animalexotico.h"

class aveexotico : public animalexotico, public Ave{
  	public:
    	aveexotico();
    	aveexotico(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, double tamanho_do_bico_cm, double envergadura_das_asas);
    	aveexotico(std::string autorizacao_ibama, std::string Pais_de_origem);
    	~aveexotico();
};

#endif