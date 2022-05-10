#pragma once
using namespace std;
#include <string>

class Product
{
   public:
	   Product();
	   Product(int type,int price, int height, string name);

	   void setName(string name);
	   string getName() const;

	   void setHeight(int height);
	   int getHeight() const;

	   void setPrice(int price);
	   int getPrice() const;

	   int getId() const;

	   int getType()const;

    protected:                      
	   string m_name;
	   int m_height;
	   int m_price;
	   int m_type;
	     
    private:
	   int m_id;
	   static int idGenerator;

};