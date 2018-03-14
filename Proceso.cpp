#include "Proceso.h"




Proceso::Proceso(std::string nom, std::string pos, std::string des) {

	nombre = nom;
	posee = pos;
	desea = des;


}

/*bool Proceso::sigue(Proceso pros, std::string secLis) {

if ( pros.getPosee == "ninguno") {

return false;
}

return true;


}*/

void Proceso::setNombre(std::string nom) {

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



