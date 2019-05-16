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
		Anfibio(int m_id, std::string m_nome, std::string m_nome_cientifico, char m_sexo,float m_tamanho, std::string m_dieta, Veterinario m_veterinario, Tratador m_tratador, std::string m_nome_batismo, int m_total_mudas, std::string m_ultima_muda);
		~Anfibio();
		
		//Preencher os atributos da classe anfibio
		bool preencher_atributos_anfibio();
		
		//Acessar o numero total de mudas
		int getTotalMudas();
		
		//Acessar a ultima muda
		std::string getUltimaMuda();

		//Alterar o total de mudas
		void setTotalMudas(int m_total_mudas);

		//Alterar a ultima muda
		void setUltimaMuda(std::string ultima_muda);

		//Fazer algo pra imprimir os dados depois
};

#endif
