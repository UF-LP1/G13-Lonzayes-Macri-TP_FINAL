#include "Funciones.h"

void CargarFabricantes(cListas<cFabricante>& ListaFabricantes)
{

	cFabricante* ImplantesOrtopedicos = new cFabricante("IMECO", "Calle Combet 7391", 8429);

	cFabricante* ProtesisDental = new cFabricante("MHC Odontologia", "Av. José Gervasio Artigas 5014", 8474);

	cFabricante* ProtesisQuirurgica = new cFabricante("FICO ALEMANA", "Montevideo 865", 8436);

	ListaFabricantes.Agregar(ImplantesOrtopedicos);
	ListaFabricantes.Agregar(ProtesisDental);
	ListaFabricantes.Agregar(ProtesisQuirurgica);


}

void CargarMedicos(cListas<cMedico>& ListaMedicos)
{
	cMedico* Medico1 = new cMedico("Callie", "Torres", "44456");
	cMedico* Medico2 = new cMedico("Derek", "Shepherd", "33467");
	cMedico* Medico3 = new cMedico("Miranda", "Bailey", "28906"); 
	cMedico* Medico4 = new cMedico("Arizona", "Robins", "45120"); 
	cMedico* Medico5 = new cMedico("Meredith", "Grey", "66892");

	ListaMedicos.Agregar(Medico1);
	ListaMedicos.Agregar(Medico2);
	ListaMedicos.Agregar(Medico3);
	ListaMedicos.Agregar(Medico4);
	ListaMedicos.Agregar(Medico5);


}

void CargarHospitales(cListas <cHospital>& ListaHospitales)
{

	cListas <cMedico> ListaMedicos_favaloro; 
	cListas <cMedico> ListaMedicos_clinicas;
	cListas<cMedico> ListasMedicos_swiss; 
	cListas <cMedico> ListasMedicos_modelo; 

	cMedico* Medico1 = new cMedico("Callie", "Torres", "44456");
	cMedico* Medico2 = new cMedico("Derek", "Shepherd", "33467");
	cMedico* Medico3 = new cMedico("Miranda", "Bailey", "28906");
	cMedico* Medico4 = new cMedico("Arizona", "Robins", "45120");
	cMedico* Medico5 = new cMedico("Meredith", "Grey", "66892"); 
	cMedico* Medico6 = new cMedico("Owen", "Haunt", "333456");
	cMedico* Medico7 = new cMedico("Cristina", "Yang", "123456");
	cMedico* Medico8 = new cMedico("Teddy", "Atman", "333567");
	cMedico* Medico9 = new cMedico("Mark", "Stone", "332246");
	cMedico* Medico10 = new cMedico("Adison", "Montgomery", "677456");
	cMedico* Medico11= new cMedico("Amelia", "Shepherd", "847456");
	cMedico* Medico12= new cMedico("Geoge", "Omali", "284456");
	cMedico* Medico13= new cMedico("Richard", "webber", "691456");
	cMedico* Medico14 = new cMedico("Alex", "karev", "288457");
	cMedico* Medico15= new cMedico("April", "Kepner", "453531");
	cMedico* Medico16 = new cMedico("Izzie", "Stevens", "333456");


	ListaMedicos_favaloro.Agregar(Medico1); 
	ListaMedicos_favaloro.Agregar(Medico2);
    ListaMedicos_favaloro.Agregar(Medico3);
	ListaMedicos_favaloro.Agregar(Medico4);
	ListaMedicos_clinicas.Agregar(Medico5);
	ListaMedicos_clinicas.Agregar(Medico6);
	ListaMedicos_clinicas.Agregar(Medico7);
	ListaMedicos_clinicas.Agregar(Medico8);
	ListasMedicos_modelo.Agregar(Medico9);
	ListasMedicos_modelo.Agregar(Medico10);
	ListasMedicos_modelo.Agregar(Medico11);
	ListasMedicos_modelo.Agregar(Medico12);
	ListasMedicos_swiss.Agregar(Medico13);
	ListasMedicos_swiss.Agregar(Medico14);
	ListasMedicos_swiss.Agregar(Medico15);
	ListasMedicos_swiss.Agregar(Medico16);



	 
	cHospital* Hospital1 = new cHospital("Hospital Favaloro", "Avenida Belgrano 234", ListaMedicos_favaloro);
	cHospital* Hospital2 = new cHospital("Hospital de clinicas", "Avenida Paso 123", ListaMedicos_clinicas);
	cHospital* Hospital3 = new cHospital("Hospital swiss Medical", "Solis 223", ListasMedicos_swiss);
	cHospital* Hospital5 = new cHospital("Sanatorio Modelo", "Colon 348", ListasMedicos_modelo);
}

