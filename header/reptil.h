#ifndef REPTIL_H
#define REPTIL_H

class Reptil : public Animal{
	protected:
		bool m_venenoso;
		std::string m_tipo_veneno;
	public:
		Reptil();
		~Reptil();
    bool getM_venenoso();
    void setM_venenoso(bool venenoso);
    std::string getM_tipo_veneno();
    void setM_tipo_veneno(std::string tipo_veneno);
};

#endif