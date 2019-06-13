#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_
#include<iostream>
#include "animal.h"

class Anfibio : public Animal
{
	protected:
		int m_total_mudas;
		std::string m_ultima_muda;
	public:
		Anfibio();
		~Anfibio();
		
		//Acessar o numero total de mudas
		int getTotalMudas();
		
		//Acessar a ultima muda
		std::string getUltimaMuda();

		//Alterar o total de mudas
		void setTotalMudas(int total_mudas);

		//Alterar a ultima muda
		void setUltimaMuda(std::string ultima_muda);

		//Fazer algo pra imprimir os dados depois
};

#endif