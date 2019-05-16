#ifndef VETERINARIO_H
#define VETERINARIO_H
#include "funcionario.h"

class Veterinario : public Funcionario{
	private:
		private std::string m_crmv;
	public:
		Veterinario();
		~Veterinario();
};

#endif
