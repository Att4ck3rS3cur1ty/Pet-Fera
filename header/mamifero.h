#ifndef _MAMIFERO_H
#define _MAMIFERO_H
#include "animal.h"

class Mamifero : public Animal {
	
	protected:
		/** @brief Define cor do pelo do animal*/
		std::string m_cor_pelo;
	public:
		Mamifero();
    	Mamifero(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, std::string cor_pelo);
		~Mamifero();
	
		std::string getCorPelo();

		void setCorPelo(std::string cor_pelo);
};

#endif