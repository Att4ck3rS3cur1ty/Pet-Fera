#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include "animal.h"
#include <string>

class animalsilvestre : public animal{
	protected:
		std::string autorizacao_ibama;
	public:
		animalsilvestre();
		~animalsilvestre();
};

#endif