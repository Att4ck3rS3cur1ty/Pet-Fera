#include "animal.h"
#include <string>

class animalsilvestre : public animal{
	protected:
		std::string autorizacao_ibama;
	public:
		animalsilvestre();
		~animalsilvestre();
};