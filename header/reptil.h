#ifndef REPTIL_H
#define REPTIL_H

class Reptil : public Animal{
	protected:
		bool m_venenoso;
		std::string m_tipo_veneno;
	public:
		Reptil();
		~Reptil();
};

#endif
