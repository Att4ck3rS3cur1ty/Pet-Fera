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
		std::string m_tipo_sanguineo;
		char m_fator_rh;
		std::string m_especialidade;
  public:
		// getters
		int getId();
		std::string getNome();
		std::string getCpf();
		short getIdade();
		std::string getTipoSanguineo();
		char getFatorRh();
		std::string getEspecialidade();

		// setters
    void setId(int id);
		void setNome(std::string nome);
		void setCpf(std::string cpf);
		void setIdade(short idade);
		void setTipoSanguineo(std::string tipo_sanguineo);
		void setFatorRh(char fator_rh);
		void setEspecialidade(std::string especialidade);

    // Construtor & Destrutor
    Funcionario();
    Funcionario(int id, std::string nome, std::string cpf, short idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade);
    ~Funcionario();
};

#endif