#ifndef VETERINARIO_H
#define VETERINARIO_H
#include "funcionario.h"

class Veterinario : public Funcionario{
	private:
		std::string m_crmv;
	public:
		Veterinario();
		~Veterinario();
    std::string getM_crmv();
    void setM_crmv(std::string crmv);
};

#endif