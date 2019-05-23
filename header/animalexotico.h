#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include "animalsilvestre.h"

class animalexotico : public animalsilvestre{
	protected:
		std::string m_Pais_de_origem;
	public:
		animalexotico(int i, std::string autorizacao_ibama, std::string Pais_de_origem);
		~animalexotico();
    void setPais_de_origem(std::string Pais_de_origem);
    std::string getPais_de_origem();
};

#endif