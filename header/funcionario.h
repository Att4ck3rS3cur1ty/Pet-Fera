#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

class Funcionario{
	protected:
		int m_id;
		std::string m_nome;
		std::string m_cpf;
		short m_idade;
		short m_tipo_sanguineo;
		char m_fator_rh;
		std::string m_especialidade;
	public:
		// getters
		std::string getId();
		std::string getNome();
		std::string getCpf();
		short getIdade();
		short getTipoSanguineo();
		char getFatorRh();
		std::string getEspecialidade();

		// setters
		void setNome(std::string nome);
		void setCpf(std::string cpf);
		void setIdade(short idade);
		void setTipoSanguineo(short tipo_sanguineo);
		void setFatorRh(char fator_rh);
		void setEspecialidade(std::string especialidade);
	
		// construtores e destrutores 
		Funcionario(int i);
    Funcionario();
		~Funcionario();
//		Funcionario(int id, std::string cpf, short idade,
//				short tipo_sanguineo, char fator_rh, std::string especialidade);

		// method(type): type?
		// method(type): type?
};

#endif
