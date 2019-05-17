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
		Anfibio(int id, std::string nome, std::string nome_cientifico, char sexo,float tamanho, std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo, int total_mudas, std::string ultima_muda);
		~Anfibio();
		
		//Preencher os atributos da classe anfibio
		bool preencher_atributos_classe();
		
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
