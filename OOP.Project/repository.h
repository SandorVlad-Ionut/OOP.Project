#pragma once
#include <iostream>
#include "Product.h"
#include "FlowerArrangement.h"
#include "Plant.h"
#include<fstream>
#include <vector>
#include<string>
using namespace std;

class Repository

{
public:
	void addRepo(Product* p);
	int getPos(int);                                     
	int getPosObj(Product);
	void displayByType(int);
	void displayByPrice(int, int);
	void displayAll();

	Product* deleteRepo(int id);
	~Repository();
	 vector<Product*> m_repo;
};