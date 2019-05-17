#ifndef _MAMIFERO_H
#define _MAMIFERO_H
#include <iostream>
#include "animal.h"

class mamifero : public Animal {
	
	protected:
		std::string m_cor_pelo;
	public:
		Mamifero();
		Mamifero(int id, std::string nome, std::string nome_cientifico, char sexo,float tamanho, std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo, std::string cor_pelo);
		~Mamifero();
	
	bool preencher_atributos_classe();
	
	std::string getCorPelo();
	
	void setCorPelo(cor_pelo);

#endif

