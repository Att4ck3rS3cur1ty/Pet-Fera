#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include <string>

class animalsilvestre : public animal{
	protected:
		std::string m_autorizacao_ibama;
	public:
		animalsilvestre(int id, std::string nome_cientifico, char sexo, double tamanho, std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo, std::string autorizacao_ibama);
		~animalsilvestre();
    void setAutorizacao_ibama(std::string autorizacao_ibama);
    std::string getAutorizacao_ibama();
};

#endif