#ifndef _ANIMAL_NATIVO_H_
#define _ANIMAL_NATIVO_H_

#include <iostream>
#include "animalsilvestre.h"

class animalnativo : public animalsilvestre{
	protected:
		/** @brief Define estado de origem do animal*/
		std::string m_UF_de_origem;
	public:
    	animalnativo();
		~animalnativo();
    	void setUF_de_origem(std::string UF_de_origem);
    	std::string getUF_de_origem();
};

#endif