#ifndef ANIMAL_H
#define ANIMAL_H
#include "veterinario.h"
#include "tratador.h"
class Animal{
	protected: 
		int m_id;
		string m_classe;
		string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		string m_dieta;
		Veterinario m_veterinario;
		Tratador m_tratador;
		string m_nome_batismo;
	public: 
		Animal();
		~Animal();
		// Animal(...)
};

#endif
