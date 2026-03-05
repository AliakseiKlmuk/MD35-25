
#include <iostream>

class Base {
public:
	virtual void show() = 0;
};
class Derv1 : public Base
{
public:
	void show() { std::cout << "Derv1\n"; }
};
class Derv2 : public Base
{
public:
	void show() { std::cout << "Derv2\n"; }
};

class Person {
public:
	void getName() { std::cout << "Enter name."; std::cin >> name; };
	void putName() { std::cout << "Name: " << name << std::endl; };

	virtual void getData() = 0;
	virtual bool isOutstanding() = 0;

protected:
	char name[40];
};
class Student : public Person
{
public:
	void getData() {
		Person::getName();
		std::cout << "Gradies student."; std::cin >> gra;
	};
	bool isOutstanding() {
		return (gra > 3.5) ? true : false;
	};

private:
	float gra;
};
class Professor : public Person
{
public:
	void getData() {
		Person::getName();
		std::cout << "Number of publication."; std::cin >> numPubs;
	}

	bool isOutstanding() {
		return (numPubs > 100) ? true : false;
	}

private:
	int numPubs;
};

class beta;
class alfa
{
public:
	alfa() : data1(99) {}
	friend class beta;

private:
	int data1;
};
class beta
{
public:
	void func1(alfa a) { std::cout << "\ndata1 = " << a.data1; };
	void func2(alfa a) { std::cout << "\ndata1 = " << a.data1; };

private:
	int data;
};
//int frifunc(alfa a, beta b) {
//	return (a.data + b.data);
//}

class Distance
{
public:
	Distance() {
		feet = 0; inches = 0.0;
	}

	Distance(float fltfeet) {
		feet = int(fltfeet);
		inches = 12 * (fltfeet - feet);
	}

	Distance(int ft, float in) {
		feet = ft;	inches = in;
	}

	void showDist() { std::cout << feet << "\' - " << inches << '\"'; }

	friend Distance operator + (Distance, Distance);
	friend float square(Distance);

private:
	int feet;
	float inches;

};
float square(Distance d) {
	float fltfeet = d.feet + d.inches / 12;
	float feetsqrt = fltfeet * fltfeet;
	return feetsqrt;

}
Distance operator + (Distance d1, Distance d2) {
	int f = d1.feet + d2.feet;
	float i = d1.inches + d2.inches;
	if (i >= 12.0) {
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

class gamma
{
public:
	gamma() {
		total++;
		id = total;
	}

	~gamma() {
		total--;
		std::cout << "delete ID" << id << std::endl;
	}

	static void showtotal() {
		std::cout << "Total: " << total << std::endl;
	}

	void showid() {
		std::cout << "ID: " << id << std::endl;
	}
private:
	static int total;
	int id;
};

int gamma::total = 0;

int main()
{
	gamma g1;
	gamma::showtotal();

	gamma g2, g3;
	gamma::showtotal();

	g1.showid();
	g2.showid();
	g3.showid();

	return 0;
	alfa a;
	beta b;

	b.func1(a);
	b.func2(a);

}
//return 0;
//Distance dist(3, 6.0);
//float sqft;

//sqft = square(dist);

//dist.showDist();
//std::cout << std::endl;
//std::cout << sqft;

//return 0;

//Distance d1 = 2.5;
//Distance d2 = 1.25;
//Distance d3;

//std::cout << "\nd1 = "; d1.showDist();
//std::cout << "\nd2 = "; d2.showDist();

//d3 = d1 + 10.0;
//std::cout << "\nd3 = "; d3.showDist();

//d3 = 10.0 + d2;
//std::cout << "\nd3 = "; d3.showDist();

//return 0;

//alfa aa;
//beta bb;

//std::cout << frifunc(aa, bb);

//return 0;
//Person* persPTR[100];
//int n = 0;
//char choise;

//do {
//	std::cout << "Studies (s) or teacher (t)"; std::cin >> choise;

//	if (choise == 's') {
//		persPTR[n] = new Student;
//	}
//	else {
//		persPTR[n] = new Professor;
//	}
//	persPTR[n++]->getData();
//	std::cout << "Enter next person? (y or n)"; std::cin >> choise;

//} while (choise == 'y');

//for (int i = 0; i < n; ++i) {
//	persPTR[i]->putName();
//	if (persPTR[i]->isOutstanding()) {
//		std::cout << "This is outsdanding person.";
//	}
//}

//return 0;
//Derv1 dv1;
//Derv2 dv2;

//Base* arr[2];

//arr[0] = &dv1;
//arr[1] = &dv2;

//arr[0]->show();
//arr[1]->show();

//std::cout << "Hello World!\n";
//}