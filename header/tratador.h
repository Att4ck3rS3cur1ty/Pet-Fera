#ifndef TRATADOR_H
#define TRATADOR_H
#include "funcionario.h"

class Tratador : public Funcionario{
	private:
		int m_nivel_de_seguranca;
	public:
		Tratador();
		~Tratador();
    int getM_nivel_de_seguranca();
    void setM_nivel_de_seguranca(int nivel_de_seguranca);
};

#endif