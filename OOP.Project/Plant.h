#pragma once
#include "Product.h"

class Plant :public Product
{
public:
	Plant() :Product()
	{
		m_type = 1;
		m_pot = "generic pot";
	}
	Plant(int type, string name,int price,int height,string pot)
	{
		this->m_type = 1;
		this->m_pot = pot;
	}

	string getPot();
	void setPot(string pot);

private:
	 string m_pot;
     int m_type;

		





};