#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

class Funcionario{
	protected:
		/** @brief Define identificação do fucionário*/
		int m_id;
		/** @brief Define função exercida pelo funcionário*/
    	std::string m_funcao;
    	/** @brief Define nome do funcionário*/
		std::string m_nome;
		/** @brief Define CPF do funcionário*/
		std::string m_cpf;
		/** @brief Define idade do funcionário*/
		short m_idade;
		/** @brief Define tipo sanguineo do funcionário (A, B, AB ou O)*/
		std::string m_tipo_sanguineo;
		/** @brief Define o fator RH do funcionário (+ ou -)*/
		char m_fator_rh;
		/** @brief Define em que tipo de animais o funcionario tem especialidade*/
		std::string m_especialidade;
  	public:

		int getId();
    	std::string getFuncao();
		std::string getNome();
		std::string getCpf();
		short getIdade();
		std::string getTipoSanguineo();
		char getFatorRh();
		std::string getEspecialidade();


    	void setId(int id);
    	void setFuncao(std::string funcao);
		void setNome(std::string nome);
		void setCpf(std::string cpf);
		void setIdade(short idade);
		void setTipoSanguineo(std::string tipo_sanguineo);
		void setFatorRh(char fator_rh);
		void setEspecialidade(std::string especialidade);

    	Funcionario();
    	Funcionario(int id, std::string funcao, std::string nome, std::string cpf, short idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade);
    	~Funcionario();
};

#endif