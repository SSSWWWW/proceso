
#include "Proceso.h"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main(int, char*[]) {


	Proceso p1("r", "ninguno", "a");
	Proceso p2("a", "r", "s");
	Proceso p4("c", "ninguno", "s");
	Proceso p3("s", "a, c, f, d", "ninguno");
	Proceso p5("f", "w", "s");
	Proceso p6("s", "ninguno", "ninguno");
	Proceso p7("w", "ninguno", "f");
	Proceso p8("f", "w", "s");

	Proceso p9("d", "u", "s,t");

	Proceso p10("t", "d,b", "e");
	Proceso p11("e", "t", "v");
	Proceso p12("v", "e", "g");
	Proceso p13("g", "v", "u");
	Proceso p14("u", "ninguno", "d,g");
	Proceso p15("b", "ninguno", "t");

	Proceso p16("e", "t", "v");
	Proceso p17("u", "ninguno", "d,g");

	

	std::vector<Proceso> lp;

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
	lp.push_back(p14);
	lp.push_back(p15);
	lp.push_back(p16);
	lp.push_back(p17);
	string proc = "";

	list<std::string> p;

	

	

	
	for (vector<Proceso>::iterator i = lp.begin()+8; i != lp.end(); ++i) {


		cout << "Proceso : " << i->getNombre() << "->" << "Desea : " << i->getDesea() << endl;

		p.push_back(i->getNombre());


		


		if ((std::find(p.begin(), p.end(), i->getDesea()) != p.end())) {

			cout << i->getNombre() << " hay ciclo, termina proceso" << endl;

			for (list<std::string>::iterator it = p.begin(); it != p.end(); ++it) {

				cout << *it;

			}


			cout << endl;
			cout << endl;

			system("pause");
			return 0;

		}


		if (i->getDesea() == "ninguno") {
		
			cout << i->getNombre() << " no tiene arcos" << endl;

			for (list<std::string>::iterator it = p.begin(); it != p.end(); ++it) {

				cout << *it;

			}
			

			cout << endl;
			cout << endl;

			system("pause");
			return 0;
		
		}
		
	
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