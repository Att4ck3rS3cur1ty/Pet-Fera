#ifndef _ANIMAL_NATIVO_H_
#define _ANIMAL_NATIVO_H_

#include "animalsilvestre.h"

class animalnativo : public animalsilvestre{
	protected:
		std::string UF_de_origem;
		std::string autorizacao_nativo;
	public:
		animalnativo(std::string nova_autorizacao_ibama, std::string nova_UF_de_origem, std::string nova_autorizacao_nativo);
		~animalnativo();
};

#endif