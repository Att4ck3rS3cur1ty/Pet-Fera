#ifndef ANIMAL_H
#define ANIMAL_H
#include "veterinario.h"
#include "tratador.h"

class Animal{
	protected: 
		/** @brief Define identificação do animal*/
		int m_id;
		/** @brief Define a classe de animal a qual pertence*/
		std::string m_classe;
		/** @brief Define nome cientifico do animal*/
		std::string m_nome_cientifico;
		/** @brief Define sexo biologico do animal*/
		char m_sexo;
		/** @brief Define tamanho do animal em centimetros*/
		double m_tamanho;
		/** @brief Define o tipo de dieta do animal*/
		std::string m_dieta;
		/** @brief Define o veterinario encarregado*/
		Veterinario m_veterinario;
		/** @brief Define o tratador encarregado*/
		Tratador m_tratador;
		/** @brief Define o nome de batismo do animal*/
		std::string m_nome_batismo;
		/** @brief Define se o animal é exotico ou nativo*/
    	std::string m_nativo_ou_exotico;
	public: 

		int getId();
		std::string getClasse();
		std::string getNomeCientifico();
		char getSexo();
		double getTamanho();
		std::string getDieta();
		Veterinario getVeterinario();
		Tratador getTratador();
		std::string getNomeBatismo();
    	std::string getNativo_ou_exotico();
		
		void setClasse(std::string classe);
		void setNomeCientifico(std::string nome_cientifico);
		void setSexo(char sexo);
		void setTamanho(double tamanho);
		void setDieta(std::string dieta);
		void setVeterinario(Veterinario veterinario);
		void setTratador(Tratador tratador);
		void setNomeBatismo(std::string nome_batismo);
    	void setNativo_ou_exotico(std::string nativo_ou_exotico);
    	Animal();
    	Animal(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo);
		~Animal();
};

#endif