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

bool Petfera::animal_busca_id(int my_id){
  map<int, Animal*>::iterator busca = Lista_de_Animais.find(my_id);
  if(busca->first == my_id){
    return true;
  }else{
    return false;
  }
}

void Petfera::registrar_animais(){
	ofstream dados;
 	dados.open("../Data/Animais.csv", std::ios::out | std::ios::trunc);
 	dados.close();
  	dados.open("../Data/Animais.csv", std::ios::out | std::ios::app);
  	dados << "id,classe,nome_cientifico,sexo,tamanho,dieta,veterinario,tratador,nome_batismo,nativo_ou_exotico,total_mudas,ultima_muda,tamanho_do_bico,envergadura_asas,cor_pelo,venenoso, tipo_veneno" << endl;
  	map<int, Animal*>::iterator func_itt;
  	for(func_itt = Lista_de_Animais.begin(); func_itt != Lista_de_Animais.end(); ++func_itt){
  		if((func_itt->second)->getClasse() == "Anfibio"){
  			Veterinario Vet = (func_itt->second)->getVeterinario();
  			Tratador Tra = (func_itt->second)->getTratador();
  			Anfibio* Anfibio_Pointer = (Anfibio*) (func_itt->second);
  			dados << (Anfibio_Pointer)->getId() << "," << (Anfibio_Pointer)->getClasse() << "," << (Anfibio_Pointer)->getNomeCientifico() << "," << (Anfibio_Pointer)->getSexo() << "," << (Anfibio_Pointer)->getTamanho() << "," << (Anfibio_Pointer)->getDieta() << "," << Vet.getId() << "," << Tra.getId() << "," << (Anfibio_Pointer)->getNomeBatismo() << "," << (Anfibio_Pointer)->getNativo_ou_exotico() << "," << (Anfibio_Pointer)->getTotalMudas() << "," << (Anfibio_Pointer)->getUltimaMuda() << "," << "" << "," << "" << "," << "" << "," << "" << "," << "" << endl;
  		}else if((func_itt->second)->getClasse() == "Ave"){
  			Veterinario Vet = (func_itt->second)->getVeterinario();
  			Tratador Tra = (func_itt->second)->getTratador();
  			Ave* Ave_Pointer = (Ave*) (func_itt->second);
  			dados << (Ave_Pointer)->getId() << "," << (Ave_Pointer)->getClasse() << "," << (Ave_Pointer)->getNomeCientifico() << "," << (Ave_Pointer)->getSexo() << "," << (Ave_Pointer)->getTamanho() << "," << (Ave_Pointer)->getDieta() << "," << Vet.getId() << "," << Tra.getId() << "," << (Ave_Pointer)->getNomeBatismo() << "," << (Ave_Pointer)->getNativo_ou_exotico() << "," << "" << "," << "" << "," << (Ave_Pointer)->getM_tamanho_do_bico_cm() << "," << (Ave_Pointer)->getM_envergadura_das_asas() << "," << "" << "," << "" << "," << "" << endl;
  		}else if((func_itt->second)->getClasse() == "Mamifero"){
  			Veterinario Vet = (func_itt->second)->getVeterinario();
  			Tratador Tra = (func_itt->second)->getTratador();
  			Mamifero* Mamifero_Pointer = (Mamifero*) (func_itt->second);
  			dados << (Mamifero_Pointer)->getId() << "," << (Mamifero_Pointer)->getClasse() << "," << (Mamifero_Pointer)->getNomeCientifico() << "," << (Mamifero_Pointer)->getSexo() << "," << (Mamifero_Pointer)->getTamanho() << "," << (Mamifero_Pointer)->getDieta() << "," << Vet.getId() << "," << Tra.getId() << "," << (Mamifero_Pointer)->getNomeBatismo() << "," << (Mamifero_Pointer)->getNativo_ou_exotico() << "," << "" << "," << "" << "," << "" << "," << (Mamifero_Pointer)->getCorPelo() << "," << "" << "," << "" << endl;
  		}else{
  			Veterinario Vet = (func_itt->second)->getVeterinario();
  			Tratador Tra = (func_itt->second)->getTratador();
  			Reptil* Reptil_Pointer = (Reptil*) (func_itt->second);
  			dados << (Reptil_Pointer)->getId() << "," << (Reptil_Pointer)->getClasse() << "," << (Reptil_Pointer)->getNomeCientifico() << "," << (Reptil_Pointer)->getSexo() << "," << (Reptil_Pointer)->getTamanho() << "," << (Reptil_Pointer)->getDieta() << "," << Vet.getId() << "," << Tra.getId() << "," << (Reptil_Pointer)->getNomeBatismo() << "," << (Reptil_Pointer)->getNativo_ou_exotico() << "," << "" << "," << "" << "," << "" << "," << "" << "," << (Reptil_Pointer)->getM_venenoso() << "," << (Reptil_Pointer)->getM_tipo_veneno() << endl;
  		}
  	}
  	dados.close();
}

void Petfera::cadastrar_animal(){
  int resposta = 0;
  while(resposta <= 0 || resposta > 4){
    cout << "Selecione o tipo de animal que deseja cadastrar:" << endl << "(1) Anfibio" << endl << "(2) Ave" << endl << "(3) Mamifero" << endl << "(4) Reptil" << endl;
    cin >> resposta;
  }
  bool teste = true;
  int id;
  while(teste == true){
    cout << "Insira o id do animal: ";
    cin >> id;
    teste = animal_busca_id(id);
    if(teste == true){
      cout << "Id já existe. Tente novo valor.";
    }
  }
  std::string nome_batismo;
  cout << "Insira o nome de batismo do animal a ser cadastrado: ";
  cin >> nome_batismo;
  std::string nome_cientifico;
  cout << "Insira o nome cientifico do animal a ser cadastrado: ";
  cin >> nome_cientifico;
  char sexo;
  cout << "Insira o sexo (M ou F) do animal a ser cadastrado: ";
  cin >> sexo;
  double tamanho;
  cout << "Insira o tamanho em cm do animal a ser cadastrado: ";
  cin >> tamanho;
  std::string dieta;
  cout << "Insira a dieta (carnivoro, herbivoro, etc.) do animal a ser cadastrado: ";
  cin >> dieta;
  int vet_id, tra_id;
  teste = true;
  int count_vet = 0;
  map<int, Funcionario*>::iterator func_itt;
  for(func_itt = Lista_de_Funcionarios.begin(); func_itt != Lista_de_Funcionarios.end(); func_itt++){
    if((func_itt->second)->getFuncao() == "Veterinario"){
      count_vet++;
    }
  }
  Veterinario Novo_Veterinario;
  if(count_vet != 0){
    while(teste == true){
      cout << "Insira o ID do veterinario encarregado ao animal: ";
      cin >> vet_id;
      map<int, Funcionario*>::iterator busca_vet = Lista_de_Funcionarios.find(vet_id);
      if(busca_vet->first == vet_id){
        Veterinario* Pointer_Veterinario = (Veterinario*) busca_vet->second;
        Novo_Veterinario = *(Pointer_Veterinario);
        teste = false;
      }
    }
  }else{
    cout << "Não existem funcionários com posição de veterinario. Iniciando registro de veterinario.";
    cadastrar_veterinario();
    while(teste == true){
      cout << "Insira o ID do veterinario encarregado ao animal: ";
      cin >> vet_id;
      map<int, Funcionario*>::iterator busca_vet = Lista_de_Funcionarios.find(vet_id);
      if(busca_vet->first == vet_id){
        Veterinario* Pointer_Veterinario = (Veterinario*) busca_vet->second;
        Novo_Veterinario = *(Pointer_Veterinario);
        teste = false;
      }
    }
  }
  for(func_itt = Lista_de_Funcionarios.begin(); func_itt != Lista_de_Funcionarios.end(); func_itt++){
    if((func_itt->second)->getFuncao() == "Tratador"){
      count_vet++;
    }
  }
  Tratador Novo_Tratador;
  if(count_vet != 0){
    while(teste == true){
      cout << "Insira o ID do Tratador encarregado ao animal: ";
      cin >> vet_id;
      map<int, Funcionario*>::iterator busca_vet = Lista_de_Funcionarios.find(vet_id);
      if(busca_vet->first == vet_id){
        Tratador* Pointer_Tratador = (Tratador*) busca_vet->second;
        Novo_Tratador = *(Pointer_Tratador);
        teste = false;
      }
    }
  }else{
    cout << "Não existem funcionários com posição de Tratador. Iniciando registro de Tratador.";
    cadastrar_tratador();
    while(teste == true){
      cout << "Insira o ID do Tratador encarregado ao animal: ";
      cin >> vet_id;
      map<int, Funcionario*>::iterator busca_vet = Lista_de_Funcionarios.find(vet_id);
      if(busca_vet->first == vet_id){
        Tratador* Pointer_Tratador = (Tratador*) busca_vet->second;
        Novo_Tratador = *(Pointer_Tratador);
        teste = false;
      }
    }
  }
  std::string Classe;
  if(resposta == 1){
    Classe = "Anfibio";
    int total_mudas;
    cout << "Insira o numero de mudas de pele que o animal teve: ";
    cin >> total_mudas;
    std::string ultima_muda;
    cout << "Insira a data da ultima muda de pele do animal: ";
    cin >> ultima_muda;
    Animal* Novo_Animal = new Anfibio(id, Classe, nome_cientifico, sexo, tamanho, dieta, Novo_Veterinario, Novo_Tratador, nome_batismo, total_mudas, ultima_muda);
    int resposta_nativo_exotico;
    cout << "O animal em questão é nativo ou exotico?" << endl << "(1) Nativo" << endl << "(2) Exotico" << endl;
    cin >> resposta_nativo_exotico;
    if(resposta_nativo_exotico == 1){
      Novo_Animal->setNativo_ou_exotico("Nativo");
    }else{
      Novo_Animal->setNativo_ou_exotico("Exotico");
    }
    Lista_de_Animais.insert(pair<int, Animal*>(id, Novo_Animal));
  }else if(resposta ==2){
    Classe = "Ave";
    double tamanho_do_bico, envergadura_asas;
    cout << "Insira o tamanho, em centimetros, do bico do animal: ";
    cin >> tamanho_do_bico;
    cout << "Insira a envergadura, em centimetros, das asas do animal: ";
    cin >> envergadura_asas;
    Animal* Novo_Animal = new Ave(id, Classe, nome_cientifico, sexo, tamanho, dieta, Novo_Veterinario, Novo_Tratador, nome_batismo, tamanho_do_bico, envergadura_asas);
    int resposta_nativo_exotico;
    cout << "O animal em questão é nativo ou exotico?" << endl << "(1) Nativo" << endl << "(2) Exotico" << endl;
    cin >> resposta_nativo_exotico;
    if(resposta_nativo_exotico == 1){
      Novo_Animal->setNativo_ou_exotico("Nativo");
    }else{
      Novo_Animal->setNativo_ou_exotico("Exotico");
    }
    Lista_de_Animais.insert(pair<int, Animal*>(id, Novo_Animal));
  }else if(resposta == 3){
    Classe = "Mamifero";
    std::string cor_pelo;
    cout << "Insira a cor do pelo do animal: ";
    cin >> cor_pelo;
    Animal* Novo_Animal = new Mamifero(id, Classe, nome_cientifico, sexo, tamanho, dieta, Novo_Veterinario, Novo_Tratador, nome_batismo, cor_pelo);
    int resposta_nativo_exotico;
    cout << "O animal em questão é nativo ou exotico?" << endl << "(1) Nativo" << endl << "(2) Exotico" << endl;
    cin >> resposta_nativo_exotico;
    if(resposta_nativo_exotico == 1){
      Novo_Animal->setNativo_ou_exotico("Nativo");
    }else{
      Novo_Animal->setNativo_ou_exotico("Exotico");
    }
    Lista_de_Animais.insert(pair<int, Animal*>(id, Novo_Animal));
  }else if(resposta == 4){
    Classe = "Reptil";
    int resposta_venenoso;
    bool venenoso;
    cout << "O animal em questão é venenoso?" << endl << "(1) Sim" << endl << "(2) Não" << endl;
    cin >> resposta_venenoso;
    if(resposta_venenoso == 1){
      venenoso = true;
    }else{
      venenoso = false;
    }
    std::string tipo_veneno;
    cout << "Insira o tipo de veneno que o animal possui: ";
    cin >> tipo_veneno;
    Animal* Novo_Animal = new Reptil(id, Classe, nome_cientifico, sexo, tamanho, dieta, Novo_Veterinario, Novo_Tratador, nome_batismo, venenoso, tipo_veneno);
    int resposta_nativo_exotico;
    cout << "O animal em questão é nativo ou exotico?" << endl << "(1) Nativo" << endl << "(2) Exotico" << endl;
    cin >> resposta_nativo_exotico;
    if(resposta_nativo_exotico == 1){
      Novo_Animal->setNativo_ou_exotico("Nativo");
    }else{
      Novo_Animal->setNativo_ou_exotico("Exotico");
    }
    Lista_de_Animais.insert(pair<int, Animal*>(id, Novo_Animal));
  }
}

void Petfera::extrair_animais(){
  ifstream dados;
  dados.open("../Data/Animais.csv");
  std::string temp;
  getline(dados, temp);
  Veterinario* Vet_Pointer;
  Tratador* Tra_Pointer;
  int id, total_mudas, vet_id, tra_id, venenoso_teste;
  std::string classe, nome_cientifico, dieta, nome_batismo, nativo_ou_exotico, ultima_muda, cor_pelo, tipo_veneno;
  double tamanho_do_bico, envergadura_asas, tamanho;
  bool venenoso;
  char sexo;
  while(dados.good()){
  	getline(dados, temp, ',');
  	id = std::stoi(temp);
  	getline(dados, classe, ',');
  	getline(dados, nome_cientifico, ',');
  	dados.get(sexo);
  	getline(dados, temp, ',');
  	tamanho = std::stod(temp);
  	getline(dados, dieta, ',');
  	getline(dados, temp, ',');
  	vet_id = std::stoi(temp);
  	map<int, Animal*>::iterator busca = Lista_de_Animais.find(vet_id);
  	Vet_Pointer = (Veterinario*) busca->second;
  	getline(dados, temp, ',');
  	tra_id = std::stoi(temp);
  	busca = Lista_de_Animais.find(tra_id);
  	Tra_Pointer = (Tratador*) busca->second;
  	getline(dados, nome_batismo, ',');
  	getline(dados, nativo_ou_exotico, ',');
  	getline(dados, temp, ',');
  	total_mudas = std::stoi(temp);
  	getline(dados, ultima_muda, ',');
  	getline(dados, temp, ',');
  	tamanho_do_bico = std::stod(temp);
  	getline(dados, temp, ',');
  	envergadura_asas = std::stod(temp);
  	getline(dados, cor_pelo, ',');
  	getline(dados, temp, ',');
  	venenoso_teste = std::stoi(temp);
  	if(venenoso_teste == 1){
  		venenoso = true;
  	}else{
  		venenoso = false;
  	}
  	getline(dados, tipo_veneno);
    if(classe == "Anfibio"){
      Animal* Novo_Animal = new Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, *Vet_Pointer, *Tra_Pointer, nome_batismo, total_mudas, ultima_muda);
      Novo_Animal->setNativo_ou_exotico(nativo_ou_exotico);
      Lista_de_Animais.insert(pair<int, Animal*>(id, Novo_Animal));
    }else if(classe == "Ave"){
      Animal* Novo_Animal = new Ave(id, classe, nome_cientifico, sexo, tamanho, dieta, *Vet_Pointer, *Tra_Pointer, nome_batismo, tamanho_do_bico, envergadura_asas);
      Novo_Animal->setNativo_ou_exotico(nativo_ou_exotico);
      Lista_de_Animais.insert(pair<int, Animal*>(id, Novo_Animal));
    }else if(classe == "Mamifero"){
      Animal* Novo_Animal = new Mamifero(id, classe, nome_cientifico, sexo, tamanho, dieta, *Vet_Pointer, *Tra_Pointer, nome_batismo, cor_pelo);
      Novo_Animal->setNativo_ou_exotico(nativo_ou_exotico);
      Lista_de_Animais.insert(pair<int, Animal*>(id, Novo_Animal));
    }else{
      Animal* Novo_Animal = new Reptil(id, classe, nome_cientifico, sexo, tamanho, dieta, *Vet_Pointer, *Tra_Pointer, nome_batismo, venenoso, tipo_veneno);
      Novo_Animal->setNativo_ou_exotico(nativo_ou_exotico);
      Lista_de_Animais.insert(pair<int, Animal*>(id, Novo_Animal));
    }
  }
  dados.close();
}

void Petfera::extrair_funcionarios(){
  ifstream dados;
  dados.open("../Data/Funcionarios.csv");
  std::string temp, funcao, nome, cpf, tipo_sanguineo, especialidade, crmv;
  char fator_rh;
  int id, nivel_de_seguranca;
  short idade;
  getline(dados, temp);
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
          Funcionario* Novo_Funcionario = new Veterinario(id, funcao, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade, crmv);
          Lista_de_Funcionarios.insert(pair<int, Funcionario*>(id, Novo_Funcionario));
      }else{
          Funcionario* Novo_Funcionario = new Tratador(id, funcao, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade, nivel_de_seguranca);
          Lista_de_Funcionarios.insert(pair<int, Funcionario*>(id, Novo_Funcionario));
      }
  }
  dados.close();
}

void Petfera::registrar_funcionarios(){
  ofstream dados;
  dados.open("../Data/Funcionarios.csv", std::ios::out | std::ios::trunc);
  dados.close();
  dados.open("../Data/Funcionarios.csv", std::ios::out | std::ios::app);
  dados << "id,funcao,nome,cpf,idade,tipo_sanguineo,fator_rh,especialidade,crmv,nivel_segurança" << std::endl;
  map<int, Funcionario*>::iterator func_itt;
  for(func_itt = Lista_de_Funcionarios.begin(); func_itt != Lista_de_Funcionarios.end(); ++func_itt){
    if((func_itt->second)->getFuncao() == "Veterinario"){
      Veterinario* Veterinario_Pointer = (Veterinario *) (func_itt->second);
      dados << Veterinario_Pointer->getId() << "," << Veterinario_Pointer->getFuncao() << "," << Veterinario_Pointer->getNome() << "," << Veterinario_Pointer->getCpf() << "," << Veterinario_Pointer->getIdade() << "," << Veterinario_Pointer->getTipoSanguineo() << "," << Veterinario_Pointer->getFatorRh() << "," << Veterinario_Pointer->getEspecialidade() << "," << Veterinario_Pointer->getM_crmv() << "," << "" << std::endl;
    }else{
      Tratador* Tratador_Pointer = (Tratador *) (func_itt->second);
      dados << Tratador_Pointer->getId() << "," << Tratador_Pointer->getFuncao()  << "," << Tratador_Pointer->getNome() << "," << Tratador_Pointer->getCpf() << "," << Tratador_Pointer->getIdade() << "," << Tratador_Pointer->getTipoSanguineo() << "," << Tratador_Pointer->getFatorRh() << "," << Tratador_Pointer->getEspecialidade() << "," << "" << "," << Tratador_Pointer->getM_nivel_de_seguranca() << std::endl;
    }
  }
  dados.close();
}

bool Petfera::funcionario_busca_id(int my_id){
  map<int, Funcionario*>::iterator busca = Lista_de_Funcionarios.find(my_id);
  if(busca->first == my_id){
    return true;
  }else{
    return false;
  }
}

void Petfera::cadastrar_veterinario(){
  int id;
  bool teste = true;
  while(teste == true){
    cout << "Insira o id do funcionário: ";
    cin >> id;
    teste = funcionario_busca_id(id);
    if(teste == true){
      cout << "Id já existe. Tente novo valor.";
    }
  }
  cout << "Insira o nome do funcionário: ";
  string nome;
  cin >> nome;
  cout << "Insira o cpf do funcionário: ";
  std::string cpf;
  cin >> cpf;
  cout << "Insira a idade do funcionário: ";
  short idade;
  cin >> idade;
  cout << "Insira o tipo sanguineo do funcionário: ";
  std::string tipo_sanguineo;
  cin >> tipo_sanguineo;
  cout << "Insira o fator RH do funcionário: ";
  char fator_rh;
  cin >> fator_rh;
  cout << "Insira a especialidade do funcionário: ";
  std::string especialidade;
  cin >> especialidade;
  cout << "Insira o crmv do funcionário: ";
  std::string crmv;
  cin >> crmv;
  Funcionario* Novo_Funcionario = new Veterinario(id, "Veterinario", nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade, crmv);
  Lista_de_Funcionarios.insert(pair<int, Funcionario*>(id, Novo_Funcionario));
}

void Petfera::cadastrar_tratador(){
  int id;
  bool teste = true;
  while(teste == true){
    cout << "Insira o id do funcionário: ";
    cin >> id;
    funcionario_busca_id(id);
  }
  cout << "Insira o nome do funcionário: ";
  string nome;
  cin >> nome;
  cout << "Insira o cpf do funcionário: ";
  std::string cpf;
  cin >> cpf;
  cout << "Insira a idade do funcionário: ";
  short idade;
  cin >> idade;
  cout << "Insira o tipo sanguineo do funcionário: ";
  std::string tipo_sanguineo;
  cin >> tipo_sanguineo;
  cout << "Insira o fator RH do funcionário: ";
  char fator_rh;
  cin >> fator_rh;
  cout << "Insira a especialidade do funcionário: ";
  std::string especialidade;
  cin >> especialidade;
  cout << "Insira o nível de segurança do funcionário: ";
  int nivel_de_seguranca;
  cin >> nivel_de_seguranca;
  Funcionario* Novo_Funcionario = new Tratador(id, "Tratador", nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade, nivel_de_seguranca);
  Lista_de_Funcionarios.insert(pair<int, Funcionario*>(id, Novo_Funcionario));
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