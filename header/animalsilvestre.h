#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_
#include "animal.h"

class animalsilvestre : public Animal{
	protected:
		/** @brief Define autorização recebida pelo IBAMA*/
		std::string m_autorizacao_ibama;
	public:
    animalsilvestre();
		~animalsilvestre();
    	void setAutorizacao_ibama(std::string autorizacao_ibama);
    	std::string getAutorizacao_ibama();
};

#endif