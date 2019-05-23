#ifndef _ANIMAL_NATIVO_H_
#define _ANIMAL_NATIVO_H_

#include "animalsilvestre.h"

class animalnativo : public animalsilvestre{
	protected:
		std::string m_UF_de_origem;
	public:
		animalnativo(int i, std::string autorizacao_ibama, std::string UF_de_origem);
		~animalnativo();
    void setUF_de_origem(std::string UF_de_origem);
    std::string getUF_de_origem();
};

#endif