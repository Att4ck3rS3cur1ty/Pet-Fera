#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include <string>

class animalsilvestre{
	protected:
		std::string m_autorizacao_ibama;
	public:
		animalsilvestre(std::string autorizacao_ibama);
		~animalsilvestre();
    void setAutorizacao_ibama(std::string autorizacao_ibama);
    std::string getAutorizacao_ibama();
};

#endif