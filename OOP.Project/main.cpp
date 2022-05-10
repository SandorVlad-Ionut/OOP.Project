#include <iostream>
#include<vector>
#include "string"
#include"repository.cpp"
using namespace std;
int main()
{
	Repository shop;
	Product a = Product(1, 24, 45, "tremya");
	shop.addRepo(&a);
	shop.displayAll();

}