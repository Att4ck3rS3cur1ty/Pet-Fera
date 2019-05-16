#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include "animalsilvestre.h"

class animalexotico : public animalsilvestre{
	protected:
		std::string Pais_de_origem;
	public:
		animalexotico(std::string nova_autorizacao_ibama, std::string Pais_de_origem);
		~animalexotico();
};

#endif