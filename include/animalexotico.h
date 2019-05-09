#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include "animalsilvestre"

class animalexotico : public animalsilvestre{
	protected:
		std::string Pais_de_origem;
	public:
		animalexotico();
		~animalexotico();
};

#endif