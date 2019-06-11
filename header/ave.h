#ifndef AVE_H
#define AVE_H

class Ave : public Animal{
	protected:
		double m_tamanho_do_bico_cm;
		double m_envergadura_das_asas;
	public:
		Ave();
		~Ave();
    double getM_tamanho_do_bico_cm();
    void setM_tamanho_do_bico_cm(double tamanho_do_bico_cm)
    double getM_envergadura_das_asas();
    void setM_envergadura_das_asas(double envergadura_das_asas);
};	

#endif