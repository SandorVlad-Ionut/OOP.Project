#pragma once
#include "Product.h"

class FlowerArrangement :public Product
{
public:
	FlowerArrangement() :Product()
	{
		m_type = 2;
		m_use = "any use";
		m_colour = "any colour";
	}
	FlowerArrangement(int type, string name, int price, int height, string use,string colour)
	{
		this->m_type = 2;
		this->m_use = use;
		m_colour = colour;
	}

	string getColour();
	void setColour(string colour);
	string getUse();
	void setUse(string colour);

private:
	string m_use;
	string m_colour;
	int m_type;







};