#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

#include "anfibio.h"
#include "animalexotico.h"

class anfibioexotico : public animalexotico, public Anfibio{
  	public:
    	anfibioexotico();
    	anfibioexotico(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, int total_mudas, std::string ultima_muda);
    	~anfibioexotico();
};

#endif