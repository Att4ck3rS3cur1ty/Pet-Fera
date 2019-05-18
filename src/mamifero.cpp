#include "../include/mamifero.h"
#include "../include/animal.h"
#include <iostream>

	Mamifero::Mamifero(){}
	Mamifero::Mamifero(int id, std::string nome, std::string nome_cientifico, char sexo,float tamanho, std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo, std::string cor_pelo)::Animal(Id, m_nome, m_nome_cientifico, m_classe, m_sexo, m_tamanho, m_dieta, m_nome_batismo, m_veterinario, m_tratador),m_cor_pelo(cor_pelo){}
Mamifero::~Mamifero(){}

	bool Mamifero::preencher_atributos_classe(){
	//(...)

	std::string Mamifero::getCorPelo(){
		return m_cor_pelo = cor_pelo;
}
	
	void Mamifero::setCorPelo(std::string cor_pelo)
		m_cor_pelo = cor_pelo;


