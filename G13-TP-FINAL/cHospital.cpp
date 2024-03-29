#include "cHospital.h"

cHospital::cHospital(string _Nombre, string _Direccion, const unsigned int _Num_identificacion, list <cMedico>& _Lista_Medicos, list<cOrtopedia>&_lista_ortopedias, list <cPaciente>& _Lista_Pacientes) :Num_identificacion(_Num_identificacion)

{
	this->nombre = _Nombre;
	this->direccion = _Direccion;
	this->lista_Medicos = &_Lista_Medicos; 
	this->lista_ortopedias = &_lista_ortopedias;
	this->Lista_Pacientes = &_Lista_Pacientes;
}


cHospital :: ~cHospital() {}

string cHospital::GetNombre()
{
	return this->nombre;
}

cMedico cHospital::AsignarMedico()
{
	cMedico *Medico = NULL;

	int Aux = rand() % this->lista_Medicos->size();

	int Contador = 0;

	typename::list<cMedico>::iterator it;

	for (it = this->lista_Medicos->begin(); it != this->lista_Medicos->end(); it++) {

		if (Aux == Contador)return *it;
	}

	return *Medico;
}

cProtesis cHospital::ElegirProtesis(cPaciente* Paciente)
{
	cMedico Medico = AsignarMedico();

	if (&Medico != NULL){

		return Medico.AsiganarTipoProtesis(Paciente->GetRadio());

		}
}

cProtesis* cHospital::PedirProtesis(cPaciente* Paciente)
{
	cProtesis Protesis = ElegirProtesis(Paciente);

	cProtesis* Aux = nullptr;

	std::list<cOrtopedia>::iterator it = this->lista_ortopedias->begin();

	for (it; it != this->lista_ortopedias->end(); it++) {

		if (it->BuscarProtesis(Protesis, Paciente->GetRadio(), Paciente->GetAlergia()) != nullptr) {

			return it->BuscarProtesis(Protesis, Paciente->GetRadio(), Paciente->GetAlergia());
		}
	}
	return Aux;
}

bool cHospital::BuscarPaciente(int DNI)
{
	std::list<cPaciente>::iterator it = this->Lista_Pacientes->begin();

	for (it; it != this->Lista_Pacientes->end(); it++) {

		if (it->GetDNI() == DNI)return true;
	}
	return false;
}

cPaciente cHospital::GetPaciente(int DNI)
{

	for (std::list<cPaciente>::iterator it = this->Lista_Pacientes->begin(); it != this->Lista_Pacientes->end(); it++) {

		if (it->GetDNI() == DNI)return *it;

	}
	
}

void cHospital::ImprimirListaPacientes()
{
	//cout << (*Lista_Pacientes) << endl;   asi se implementaria la sobrecarga del cout (tira error)

	typename::list<cPaciente>::iterator it = this->Lista_Pacientes->begin();

	for (it; it != this->Lista_Pacientes->end(); it++) {


		cout << "--------------------"
			<< "\nNombre: " << it->GetNombre()
			<< "\nApellido: " << it->GetApellido()
			<< "\nDNI: " << to_string(it->GetDNI())

			<< "--------------------" << endl;
	}
}



void cHospital::operator+(cPaciente* Paciente)
{
	this->Lista_Pacientes->push_back(*Paciente);
}

cPaciente cHospital::operator[](int pos)
{
	typename::list<cPaciente>::iterator it;

	int Cont = 0;

	if (this->Lista_Pacientes->size() >= pos) {

		for (it = this->Lista_Pacientes->begin(); it != this->Lista_Pacientes->end(); it++) {

			if (Cont == pos)return *it;

			Cont++;
		}
	}
}

ostream& operator<<(ostream& out, list<cPaciente>& Lista)
{

	typename::list<cPaciente>::iterator it;

	for (it = Lista.begin(); it != Lista.end(); it++) {


		out << "--------------------"
			<< "\nNombre: " << it->GetNombre()
			<< "\nApellido: " << it->GetApellido()
			<< "\nDNI: " << to_string(it->GetDNI())

			<< "--------------------" << endl;
	}

	return out;
}
