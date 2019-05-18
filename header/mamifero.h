#ifndef _MAMIFERO_H
#define _MAMIFERO_H
#include <iostream>
#include "animal.h"

class Mamifero : public Animal {
	
	protected:
		std::string m_cor_pelo;
	public:
		Mamifero();
		Mamifero(int id, std::string nome, std::string nome_cientifico, char sexo,float tamanho, std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo, std::string cor_pelo);
		~Mamifero();
	
	//Preencher a classe mamifero
	bool preencher_atributos_classe();
	
	//Acessar o atribulo da cor do pelo
	std::string getCorPelo();

	//Alterar o atributo da cor do pelo	
	void setCorPelo(cor_pelo);

#endif

