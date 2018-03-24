
#include "Proceso.h"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main(int, char*[]) {


	Proceso p1("r", "ninguno", "a");
	Proceso p2("a", "r", "s");
	Proceso p3 ("b" , "ninguno", "t");
	Proceso p4("c", "ninguno", "s");
	Proceso p5("s", "a, c, f, d", "ninguno");
	Proceso p6("d", "u", "s");
	Proceso p7("t", "d,b", "e");
	Proceso p8("e", "t", "v");
	Proceso p9("f", "w", "s");
	Proceso p10("u", "ninguno", "d"); //(d,g)
	Proceso p11("v", "e", "g");
	Proceso p12("w", "ninguno", "f");
	Proceso p13("g", "v", "u");
	

	

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
	//lp.push_back(p14);
	//lp.push_back(p15);
	//lp.push_back(p16);
	//lp.push_back(p17);
	string proc = "";
	
	std::vector<std::string> lpp;
	lpp.push_back("r");
	lpp.push_back("a");
	lpp.push_back("b");
	lpp.push_back("c");
	lpp.push_back("s");
	lpp.push_back("d");
	lpp.push_back("t");
	lpp.push_back("e");
	lpp.push_back("f");
	lpp.push_back("u");
	lpp.push_back("v");
	lpp.push_back("w");
	lpp.push_back("g");

	list<std::string> p;


	

	std::string nom="";
	std::string des="";
	std::string pos="";
	Proceso pp("", "", "");

	

	int op = 22;

	do {


		cout << " PROCESOS " << endl;
		cout << " 1 - Listar procesos " << endl;
		cout << " 2 - Escoger proceso " << endl;
		cout << " 3 - Agregar proceso proceso " << endl;
		cout << " 4 - Borrar proceso" << endl;
		
		cout << " 0 - salir " << endl;
		int con = 0;
	
		cin >> op;
		

		while (cin.fail()) {
			cout << "Digite un numero: ";
			cin >> op;
			if (cin.fail()) {
				cin.clear(); cin.ignore();
				cout << "Digite numero de nuevo! " << endl;
			}
			else break;
		}
		
		


		switch (op) {


		case 1:



			for (vector<Proceso>::iterator i = lp.begin(); i != lp.end(); ++i) {
			
				
				con++;
			

				cout << con << " Proceso : " << i->getNombre() << "   Posee : "<< i->getPosee() << "  Desea : " << i->getDesea() << endl;

			
			
			}

			system("pause");
			system("CLS");



			break;


		case 2: {

			int num =1;

			std::string des = "";
			cout << "digite proceso  ";
			cin >> num;
			
			int con = 0;

			
			while (1)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "numero incorrecto, digite el numero de proceso" << endl;
					cin >> num;
				}
				if (!cin.fail())
					break;
			}

			num = num - 1;

			for (vector<Proceso>::iterator i = lp.begin() + num; i != lp.end(); ++i) {

				con ++;
				

				if(con == 1){
					
				cout << "Proceso : " << i->getNombre() << "->" << "Desea : " << i->getDesea() << endl;
				
				des = i->getDesea();

				p.push_back(i->getNombre());
				i = lp.begin();
				
				}
				
				
				
				if(con > 1){
					
				
				//	cout << "prueba " << des << "  " << i->getNombre()<<endl;
					if(des == i->getNombre()){
						
						
						cout << "Proceso : " << i->getNombre() << "->" << "Desea : " << i->getDesea() << endl;
						
						des = i->getDesea();
						p.push_back(i->getNombre());
					}
					
				
					
				}
				
			/*	if((std::find(lp.begin(), lp.end(),  i->getDesea()) !=lp.end())){
					
					
					cout << "igual" << endl;
					
				}*/
				
				
			/*	for (vector<Proceso>::iterator it = lp.begin(); it != lp.end(); ++it){
					
					if(it->getNombre() == i->getDesea()){
						
						cout << "Proceso : " << i->getNombre() << "->" << "Desea : " << i->getDesea() << endl;
						
						p.push_back(i->getNombre());
						
					}
					
					
				}*/

              


				if (des == i->getNombre() && (std::find(p.begin(), p.end(), i->getDesea()) != p.end())) {

					i = lp.begin();
					cout << i->getNombre() << " hay ciclo, termina proceso" << endl;

					for (list<std::string>::iterator it = p.begin(); it != p.end(); ++it) {

						cout << *it;

					}


					cout << endl;
					cout << endl;

					system("pause");
					return 0;

				}
				
				


				if (des == i->getNombre() && i->getDesea() == "ninguno") {
					i = lp.begin();
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

			system("pause");
			system("CLS");

			break;

		}


		case 3: {

			

			cout << "digite nombre proceso ";
			cin >> nom;
			cin.get();

			cout << "digite a quien desea el proceso ";
			cin >> des;
			cin.get();

			cout << "digite a quien posee el proceso ";
			cin >> pos;
			cin.get();

			pp.setNombre(nom);
			pp.setDesea(des);
			pp.setPosee(pos);


			lp.push_back(pp);

			system("pause");
			system("CLS");
			break;

		}

		case 4: {
		
			std::string nom;
			cout << "digite numero de proceso " << endl;
			cin.get();
			cin >> nom;


			for (vector<Proceso>::iterator i = lp.begin(); i != lp.end(); ++i) {

				if (i->getNombre() == nom) {

					i = lp.erase(i);

				}



			}

			system("pause");
			system("CLS");
			break;
		
		
		
		
		
		}




		}

	} while (op != 0);





	std::system("pause");
}
