#ifndef TRATADOR_H
#define TRATADOR_H
#include "funcionario.h"

class Tratador : public Funcionario{
	private:
		/** @brief Define que nível de segurança o funcionário pode ser confiado*/
		int m_nivel_de_seguranca;
	public:
		Tratador();
    	Tratador(int id, std::string funcao, std::string nome, std::string cpf, short idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade, int nivel_de_seguranca);
		~Tratador();
    	int getM_nivel_de_seguranca();
    	void setM_nivel_de_seguranca(int nivel_de_seguranca);
};

#endif