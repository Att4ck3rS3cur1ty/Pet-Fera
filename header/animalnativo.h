#ifndef _ANIMAL_NATIVO_H_
#define _ANIMAL_NATIVO_H_

#include "animalsilvestre.h"

class animalnativo : public animalsilvestre{
	protected:
		std::string m_UF_de_origem;
		std::string m_autorizacao_nativo;
	public:
		animalnativo(int id, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo, std::string autorizacao_ibama, std::string UF_de_origem, std::string autorizacao_nativo);
		~animalnativo();
    void setUF_de_origem(std::string UF_de_origem);
    std::string getUF_de_origem();
    void setAutorizacao_nativo(std::string autorizacao_nativo);
    std::string getAutorizacao_nativo();
};

#endif