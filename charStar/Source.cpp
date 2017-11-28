#include <iostream>
#include<string>

using namespace std;

class A {
private:
	int x;
	char * str;
public:
	/*
	A() {
		x = 97;  str = new char[5]; str = "NONE";
	}
	*/
	A(int x) :x(x) {}
	void setX(int x1) { x = x1; }
	int getX() const { return x; }
	
	operator char*() const;

	// operator int() ;

};

A::operator char *() const { return (char*)(this->x); }


int main() {
	A n(97);

	cout << n << endl;
	
	system("pause");
	return 0;
}