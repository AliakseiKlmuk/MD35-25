#include <iostream>
#include <typeinfo>

class where
{
public:
	void reval() {
		std::cout << "\nMy adress: " << this;
	}

private:
	char chararr[10];

};
class what
{
public:
	void tester() {
		this->alpha = 11;
		std::cout << this->alpha;
	}

private:
	int alpha;

};
class alpha
{
public:
	alpha() {}

	alpha(int d) {
		data = d;
	}

	void display() {
		std::cout << data;
	}

	alpha& operator = (alpha& a) {
		data = a.data;
		std::cout << "Operator = ";
		return*this;
	}
private:
	int data;

};

class Base
{
	virtual void vertFunc() {}
};
class Derv1 : public Base
{
};
class Derv2 : public Base
{
};
bool isDerv(Base* pUnknown) {
	Derv1* pDerv1;
	if (pDerv1 = dynamic_cast<Derv1*>(pUnknown))
		return true;
	else
		return false;
}

void displayName(Base* pb) {
	std::cout << "pointer";
	std::cout << typeid(*pb).name() << std::endl;
}

int main()
{
	Base* pbBase = new Derv1;
	displayName(pbBase);

	pbBase = new Derv2;
	displayName(pbBase);



	return 0;
	Derv1* d1 = new Derv1;
	Derv2* d2 = new Derv2;

	if (isDerv(d1))
		std::cout << "d1";
	else
		std::cout << "no d1";

	if (isDerv(d2))
		std::cout << "d2";
	else
		std::cout << "no d2";


	return 0;
	alpha a1(137);
	alpha a2, a3;

	a3 = a2 = a1;

	std::cout << "\na3 "; a3.display();
	std::cout << "\na2 "; a2.display();

	return 0;
	what w;
	w.tester();

	return 0;
	where w1, w2, w3;
	w1.reval();
	w2.reval();
	w3.reval();

	//std::cout << "Hello World!\n";
}
