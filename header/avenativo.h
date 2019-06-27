#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "ave.h"
#include "animalnativo.h"

class avenativo : public animalnativo, public Ave {
  	public:
    	avenativo();
    	avenativo(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, double tamanho_do_bico_cm, double envergadura_das_asas);
    	avenativo(std::string autorizacao_ibama, std::string UF_de_origem);
    	~avenativo();
};

#endif