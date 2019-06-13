#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include <iostream>
#include "animalsilvestre.h"

class animalexotico : public animalsilvestre{
	protected:
		std::string m_Pais_de_origem;
	public:
    animalexotico();
		~animalexotico();
    void setPais_de_origem(std::string Pais_de_origem);
    std::string getPais_de_origem();
};

#endif