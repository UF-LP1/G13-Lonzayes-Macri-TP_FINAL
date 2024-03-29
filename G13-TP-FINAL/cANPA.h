#ifndef _CANPA_H_
#define _CANPA_H_

#include <iostream>
#include <string>
#include <list>
#include "cRegistros.h"
#include "cOrtopedia.h"
#include "cHospital.h"
#include "cFabricante.h"

using namespace std;


class cANPA
{
private:

	list <cRegistros> *Lista_Registros;
	list <cHospital> *Lista_Hospitales;
	list <cFabricante>* ListaFabricantes;

	//friend class cPaciente;

public:

	cANPA(list <cHospital> &_Lista_Hospitales, list <cFabricante> &_ListaFabricantes);

	~cANPA();

	void AgregarPaciente(cPaciente* Paciente);

	void Registrar(cHospital Hospital, cMedico Medico, cFecha FechaS, int FechaE, bool Entregado, cPaciente Paciente);

	cHospital AsignarHospital();

	cFabricante AsignarFabricante();

	list <cHospital>* GetListaHospital();

	void operator+(cRegistros* Registro);


};
#endif
