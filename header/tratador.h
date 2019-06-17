#ifndef TRATADOR_H
#define TRATADOR_H
#include "funcionario.h"

class Tratador : public Funcionario{
	private:
		int m_nivel_de_seguranca;
	public:
		Tratador();
    Tratador(int id, std::string nome, std::string cpf, short idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade, int nivel_de_seguranca);
		~Tratador();
    int getM_nivel_de_seguranca();
    void setM_nivel_de_seguranca(int nivel_de_seguranca);
};

#endif