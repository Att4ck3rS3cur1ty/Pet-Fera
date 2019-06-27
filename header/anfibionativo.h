#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIVO_H_

#include "anfibio.h"
#include "animalnativo.h"

class anfibionativo : public animalnativo, public Anfibio{
  	public:
    	anfibionativo();
    	anfibionativo(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, int total_mudas, std::string ultima_muda);
    	~anfibionativo();
};

#endif