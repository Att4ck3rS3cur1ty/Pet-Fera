#ifndef ANIMAL_H
#define ANIMAL_H
#include "veterinario.h"
#include "tratador.h"

class Animal{
	protected: 
		int m_id;
		std::string m_classe;
		std::string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		std::string m_dieta;
		Veterinario m_veterinario;
		Tratador m_tratador;
		std::string m_nome_batismo;
	public: 
		// getters
		int getId();
		std::string getClasse();
		std::string getNomeCientifico();
		char getSexo();
		double getTamanho();
		std::string getDieta();
		Veterinario getVeterinario();
		Tratador getTratador();
		std::string getNomeBatismo();
		
		// setters
		void setClasse(std::string classe);
		void setNomeCientifico(std::string nome_cientifico);
		void setSexo(char sexo);
		void setTamanho(double tamanho);
		void setDieta(std::string dieta);
		void setVeterinario(Veterinario veterinario);
		void setTratador(Tratador tratador);
		void setNomeBatismo(std::string nome_batismo);

		Animal(int i);
    Animal();
		~Animal();
//		Animal(int id, std::string nome_cientifico, char sexo, double tamanho, 
//		std::string dieta, Veterinario veterinario, Tratador tratador, std::string nome_batismo); 
		
};

#endif
