#include"repository.h";
#include"Product.h";
using namespace std;
#include<fstream>
#include<string>

void Repository::addRepo(Product* p)
{
	m_repo.push_back(p);
}

void Repository::displayAll()
{
	int n = m_repo.size();
	cout << endl;
	for (int i = 0; i <= n; i++)
		cout << m_repo[i];

}


void Repository::displayByType(int type)            
{
	cout << endl;
	if (m_repo.size() == 0)
		throw exception("Nothing in repo");

	vector <Product*> Plants;
	vector <Product*> FlowerArrangements;

	for (int i = 0; i < m_repo.size(); i++)
	{
		if (m_repo[i]->getType() == type)
			cout << m_repo[i] << " ";
		else
			cout << m_repo[i] << " ";
			
			
	}


}

void Repository::displayByPrice(int a, int b)
{
	cout << endl;
	for (int i = 0; i <= m_repo.size(); i++)
		if ((m_repo[i]->getPrice()) >= a && (m_repo[i]->getPrice()) <= b)
			cout << m_repo[i] << " ";
}


Repository::~Repository()
{
	for (int i = 0; i < m_repo.size(); i++)
		delete m_repo[i];
}



