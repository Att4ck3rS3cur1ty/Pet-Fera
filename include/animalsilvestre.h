#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include <string>

class animalsilvestre{
	protected:
		std::string autorizacao_ibama;
	public:
		animalsilvestre(std::string nova_autorizacao_ibama);
		~animalsilvestre();
};

#endif