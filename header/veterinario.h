#ifndef VETERINARIO_H
#define VETERINARIO_H
#include "funcionario.h"

class Veterinario : public Funcionario{
	private:
		std::string m_crmv;
	public:
		Veterinario();
    Veterinario(int id, std::string nome, std::string cpf, short idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade, std::string crmv);
		~Veterinario();
    std::string getM_crmv();
    void setM_crmv(std::string crmv);
};

#endif