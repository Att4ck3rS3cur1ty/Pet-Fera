#ifndef REPTIL_H
#define REPTIL_H
#include "animal.h"

class Reptil : public Animal{
	protected:
		bool m_venenoso;
		std::string m_tipo_veneno;
	public:
		Reptil();
    	Reptil(int Id, std::string Classe, std::string NomeCientifico, char Sexo, double Tamanho, std::string Dieta, Veterinario Novo_Veterinario, Tratador Novo_Tratador, std::string NomeBatismo, bool venenoso, std::string tipo_veneno);
		~Reptil();
    	bool getM_venenoso();
    	void setM_venenoso(bool venenoso);
    	std::string getM_tipo_veneno();
    	void setM_tipo_veneno(std::string tipo_veneno);
};

#endif