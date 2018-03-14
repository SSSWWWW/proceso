
#include "Proceso.h"
#include <iostream>
#include <list>
using namespace std;

int main(int, char*[]) {


	Proceso p1("r", "nin", "a");
	Proceso p2("a", "r", "s");
	Proceso p3("c", "nin", "s");
	Proceso p4("s", "a, c, f, d", "ninguno");
	Proceso p5("f", "w", "s");
	Proceso p6("w", "ninguno", "f");


	Proceso p7("d", "u", "s,t");
	Proceso p8("u", "nin", "d,g");
	Proceso p9("t", "d,b", "e");
	Proceso p10("b", "ninguno", "t");
	Proceso p11("e", "t", "v");
	Proceso p12("v", "e", "g");
	Proceso p13("g", "v", "u");

	std::list<Proceso> lp;

	lp.push_back(p1);
	lp.push_back(p2);
	lp.push_back(p3);
	lp.push_back(p4);
	lp.push_back(p5);
	lp.push_back(p6);
	lp.push_back(p7);
	lp.push_back(p8);
	lp.push_back(p9);
	lp.push_back(p10);
	lp.push_back(p11);
	lp.push_back(p12);
	lp.push_back(p13);



	for (list<Proceso>::iterator i = lp.begin(); i != lp.end(); ++i) {
		cout << i->getNombre() << endl;
	    cout << i->getPosee() << endl;
		cout << i->getDesea() << endl;
		cout << endl;
	}

	/*lp.add_end(p1);
	lp.add_end(p2);
	lp.add_end(p3);
	lp.add_end(p4);
	lp.add_end(p5);
	lp.add_end(p6);
	lp.add_end(p7);
	lp.add_end(p8);
	lp.add_end(p9);
	lp.add_end(p10);
	lp.add_end(p11);
	lp.add_end(p12);
	lp.add_end(p13);

	lp.print();*/





	std::system("pause");
}