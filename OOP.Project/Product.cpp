#include <iostream>
#include<list>
#include"Product.h"
using namespace std;

Product::Product(int type,int price, int height, string name)
{
	idGenerator++;
	this->m_id = idGenerator;
	this->m_name = name;
	this->m_height = height;
}


int Product::getId() const
{
	return this->m_id;
}

int Product::getType() const
{
	return this->m_type;
}


void Product::setName(string name)
{
	this->m_name = name;
}

string Product::getName() const
{
	return this->m_name;
}

void Product::setHeight(int height)
{
	this->m_height = height;
}

int Product::getHeight() const
{
	return this->m_height;
}

void Product::setPrice(int price)
{
	this->m_name = price;
}

int Product::getPrice() const
{
	return this->m_price;
}








