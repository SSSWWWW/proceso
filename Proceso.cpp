#include "Proceso.h"




Proceso::Proceso(char nom, std::string pos, std::string des) {

	nombre = nom;
	posee = pos;
	desea = des;


}

Proceso::Proceso getP(list<Proceso> _list, int _i) {
	list<Proceso>::iterator it = _list.begin();
	for (int i = 0; i<_i; i++) {
		++it;
	}
	return *it;
}




void Proceso::setNombre(char nom) {

	nombre = nom;

}

void Proceso::setPosee(std::string pos) {

	posee = pos;

}


void Proceso::setDesea(std::string des) {

	desea = des;

}




void Proceso::setEstado(std::string es) {

	estado = es;

}

void Proceso::setTipo(std::string t) {

	tipo = t;
}

void Proceso::setSecuencia(std::string sec) {

	secuencia = sec;

}



