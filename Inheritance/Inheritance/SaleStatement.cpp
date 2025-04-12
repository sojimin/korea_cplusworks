#include<iostream>
#include<string>
using namespace std;

/*
	매출 전표(SaleStatement) 작성하기
*/

class Drink {
protected:
	string name;
	int price;
	int quantity;

public:
	Drink(string name, int price, int quantity) : 
		name(name), price(price), quantity(quantity) { }
};

class Alcohol : public Drink {
private:
	float alcper;

public:
	Alcohol(float alcper, string name, int price, int quantity) :
		 alcper(alcper), Drink(name, price, quantity){ }
};

int main()
{
	

	return 0;
}