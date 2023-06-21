#include "cPaciente.h"

cPaciente::cPaciente(string _Nombre, string _Apellido, const unsigned int _DNI, string _Alergia, float _Radio): DNI(_DNI)
{
	
	this->Nombre = _Nombre; 
	this->Apellido = _Apellido; 
	this->Alergia = _Alergia; 
	this->Radio = _Radio; 

	this->Protesis = NULL;
}

cPaciente:: ~cPaciente(){

	this->Protesis = NULL;
}

void cPaciente::PedirProtesis()
{
	//this->Hospital
}

ostream& operator<<(ostream& out, cListas<cPaciente>& Lista)
{

	for (int i = 0; i < Lista.Size(); i++) {


		out << "--------------------"
			<< "\nNombre: " << (Lista)[i].Nombre
			<< "\nApellido: " << (Lista)[i].Apellido
			<< "\nDNI: " << (Lista)[i].DNI
			<< "\nAlergia: " << (Lista)[i].Alergia
			<< "\nRadio: " << (Lista)[i].Radio
			<< "--------------------" << endl;
	}

	return out;
}