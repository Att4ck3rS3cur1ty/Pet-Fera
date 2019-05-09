#include "animalsilvestre"

class animalnativo : public animalsilvestre{
	protected:
		std::string UF_de_origem;
		std::string autorizacao_nativo;
	public:
		animalnativo();
		~animalnativo();
}