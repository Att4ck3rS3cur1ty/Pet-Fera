#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_
#include "animal.h"

class animalsilvestre : public Animal{
	protected:
		std::string m_autorizacao_ibama;
	public:
    animalsilvestre();
		animalsilvestre(int i, std::string autorizacao_ibama);
		~animalsilvestre();
    void setAutorizacao_ibama(std::string autorizacao_ibama);
    std::string getAutorizacao_ibama();
};

#endif