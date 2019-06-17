#include "../header/petfera.h"
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

Petfera::Petfera(){};

Petfera::~Petfera(){};

void Petfera::extrair_funcionarios(){
  ifstream dados;
  dados.open("Funcionarios.csv");
  std::string temp, funcao, nome, cpf, tipo_sanguineo, especialidade, crmv;
  char fator_rh;
  int id, nivel_de_seguranca;
  short idade;
  while(dados.good()){
      getline(dados, temp, ',');
      id = std::stoi(temp);
      getline(dados, funcao, ',');
      getline(dados, nome, ',');
      getline(dados, cpf, ',');
      dados >> idade;
      getline(dados, temp, ',');
      getline(dados, tipo_sanguineo, ',');
      dados >> fator_rh;
      getline(dados, temp, ',');
      getline(dados, especialidade, ',');
      getline(dados, crmv, ',');
      dados >> nivel_de_seguranca;
      getline(dados, temp);
      if(funcao == "Veterinario"){
          Veterinario Novo_Veterinario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade, crmv);
          Lista_de_Veterinarios.insert(pair<int, Veterinario>(id, Novo_Veterinario));
      }else{
          Tratador Novo_Tratador(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade, nivel_de_seguranca);
          Lista_de_Tratadores.insert(pair<int, Tratador>(id, Novo_Tratador));
      }
  }
}

void Petfera::registrar_funcionarios(){
  ofstream dados;
  dados.open("../Data/Funcionarios.csv", std::ios::out | std::ios::app);
  map<int, Veterinario>::iterator vet_itt;
  map<int, Tratador>::iterator tra_itt;
  for(vet_itt = Lista_de_Veterinarios.begin(); vet_itt != Lista_de_Veterinarios.end(); ++vet_itt){
    dados << (vet_itt->second).getId() << "," << "Veterinário" << "," << (vet_itt->second).getNome() << "," << (vet_itt->second).getCpf() << "," << (vet_itt->second).getIdade() << "," << (vet_itt->second).getTipoSanguineo() << "," << (vet_itt->second).getFatorRh() << "," << (vet_itt->second).getEspecialidade() << "," << (vet_itt->second).getM_crmv() << "," << "" << std::endl;
  }
  for(tra_itt = Lista_de_Tratadores.begin(); tra_itt != Lista_de_Tratadores.end(); ++tra_itt){
    dados << (tra_itt->second).getId() << "," << "Tratador"  << "," << (tra_itt->second).getNome() << "," << (tra_itt->second).getCpf() << "," << (tra_itt->second).getIdade() << "," << (tra_itt->second).getTipoSanguineo() << "," << (tra_itt->second).getFatorRh() << "," << (tra_itt->second).getEspecialidade() << "," << "" << "," << (tra_itt->second).getM_nivel_de_seguranca() << std::endl;
  }
  dados.close();
}

bool Petfera::funcionario_busca_id(int my_id){
  map<int, Veterinario>::iterator busca_veterinario = Lista_de_Veterinarios.find(my_id);
  map<int, Tratador>::iterator busca_tratador = Lista_de_Tratadores.find(my_id);
  if(busca_tratador->first == my_id || busca_veterinario->first == my_id){
    return true;
  }else{
    return false;
  }
}

void Petfera::cadastrar_veterinario(){
  Veterinario Novo_Veterinario;
  int id;
  bool teste = true;
  while(teste == true){
    cout << "Insira o id do funcionário: ";
    cin >> id;
    teste = funcionario_busca_id(id);
  }
  Novo_Veterinario.setId(id);
  cout << "Insira o nome do funcionário: ";
  string nome;
  cin >> nome;
  Novo_Veterinario.setNome(nome);
  cout << "Insira o cpf do funcionário: ";
  std::string cpf;
  cin >> cpf;
  Novo_Veterinario.setCpf(cpf);
  cout << "Insira a idade do funcionário: ";
  short idade;
  cin >> idade;
  Novo_Veterinario.setIdade(idade);
  cout << "Insira o tipo sanguineo do funcionário: ";
  std::string tipo_sanguineo;
  cin >> tipo_sanguineo;
  Novo_Veterinario.setTipoSanguineo(tipo_sanguineo);
  cout << "Insira o fator RH do funcionário: ";
  char fator_rh;
  cin >> fator_rh;
  Novo_Veterinario.setFatorRh(fator_rh);
  cout << "Insira a especialidade do funcionário: ";
  std::string especialidade;
  cin >> especialidade;
  Novo_Veterinario.setEspecialidade(especialidade);
  cout << "Insira o crmv do funcionário: ";
  std::string crmv;
  cin >> crmv;
  Novo_Veterinario.setM_crmv(crmv);
  Lista_de_Veterinarios.insert(pair<int, Veterinario>(id, Novo_Veterinario));
}

void Petfera::cadastrar_tratador(){
  Tratador Novo_Tratador;
  int id;
  bool teste = true;
  while(teste == true){
    cout << "Insira o id do funcionário: ";
    cin >> id;
    funcionario_busca_id(id);
  }
  Novo_Tratador.setId(id);
  cout << "Insira o nome do funcionário: ";
  string nome;
  cin >> nome;
  Novo_Tratador.setNome(nome);
  cout << "Insira o cpf do funcionário: ";
  std::string cpf;
  cin >> cpf;
  Novo_Tratador.setCpf(cpf);
  cout << "Insira a idade do funcionário: ";
  short idade;
  cin >> idade;
  Novo_Tratador.setIdade(idade);
  cout << "Insira o tipo sanguineo do funcionário: ";
  std::string tipo_sanguineo;
  cin >> tipo_sanguineo;
  Novo_Tratador.setTipoSanguineo(tipo_sanguineo);
  cout << "Insira o fator RH do funcionário: ";
  char fator_rh;
  cin >> fator_rh;
  Novo_Tratador.setFatorRh(fator_rh);
  cout << "Insira a especialidade do funcionário: ";
  std::string especialidade;
  cin >> especialidade;
  Novo_Tratador.setEspecialidade(especialidade);
  cout << "Insira o nível de segurança do funcionário: ";
  int nivel_de_seguranca;
  cin >> nivel_de_seguranca;
  Novo_Tratador.setM_nivel_de_seguranca(nivel_de_seguranca);
  Lista_de_Tratadores.insert(pair<int, Tratador>(id, Novo_Tratador));
}

void Petfera::cadastrar_funcionario(){
  int opcao = 3;
  while(opcao > 2 || opcao <= 0){
    cout << "Que tipo de Funcionario quer cadastrar?" << endl << "(1) Veterinário" << endl << "(2) Tratador" << endl;
    cin >> opcao;
  }
  if(opcao == 1){
    cadastrar_veterinario();
  }else{
    cadastrar_tratador();
  }
}