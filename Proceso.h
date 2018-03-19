#pragma once
#pragma once


#include<string>
#include<iostream>
#include <list>

class Proceso
{
private:

	std::string nombre;
	std::string estado;
	std::string tipo;
	std::string secuencia;
	std::string recurso;
	std::string posee;
	std::string desea;




public:

	Proceso(std::string nombre, std::string posee, std::string desea);

	void setPosee(std::string posee);
	void setDesea(std::string desea);
	void setEstado(std::string estado);
	void setTipo(std::string tipo);
	void setSecuencia(std::string secuencia);
	void setNombre(std::string nombre);


	//bool sigue(Proceso pros, std::string secLis);

	std::string getDesea() { return desea; }
	std::string getPosee() { return posee; }

	std::string getEstado() { return estado; }
	std::string getTipo() { return tipo; }
	std::string getSecuencia() { return secuencia; }
	std::string getNombre() { return nombre; }



	Proceso getP(std::list<Proceso> _list, int _i);
	
	

};



inline std::ostream& operator<< (std::ostream &out, Proceso& p)
{
	
	out << "\nNombre : " << p.getNombre() << "\nPosee : " << p.getPosee() << "\nDesea : " << p.getDesea() <<  "\n";

	return out;
}
