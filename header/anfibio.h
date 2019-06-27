#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_
#include<iostream>
#include "animal.h"

class Anfibio : public Animal
{
	protected:
		/** @brief Define todal de mudas de pele do anfibio*/
		int m_total_mudas;
		/** @brief Define data da ultima muda de pele*/
		std::string m_ultima_muda;
	public:
		Anfibio();
    	Anfibio(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, int total_mudas, std::string ultima_muda);
		~Anfibio();
		
		int getTotalMudas();
		
		std::string getUltimaMuda();

		void setTotalMudas(int total_mudas);

		void setUltimaMuda(std::string ultima_muda);

};

#endif