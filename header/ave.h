#ifndef AVE_H
#define AVE_H
#include "animal.h"

class Ave : public Animal{
	protected:
		/** @brief Define tamanho do bico em centimetros*/
		double m_tamanho_do_bico_cm;
		/** @brief Define envergadura das asas em centimetros*/
		double m_envergadura_das_asas;
	public:
		Ave();
    	Ave(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, double tamanho_do_bico_cm, double envergadura_das_asas);
		~Ave();
    	double getM_tamanho_do_bico_cm();
    	void setM_tamanho_do_bico_cm(double tamanho_do_bico_cm);
    	double getM_envergadura_das_asas();
    	void setM_envergadura_das_asas(double envergadura_das_asas);
};	

#endif