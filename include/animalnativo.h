#ifndef _ANIMAL_NATIVO_H_
#define _ANIMAL_NATIVO_H_

#include "animalsilvestre"

class animalnativo : public animalsilvestre{
	protected:
		std::string UF_de_origem;
		std::string autorizacao_nativo;
	public:
		animalnativo();
		~animalnativo();
};

#endif