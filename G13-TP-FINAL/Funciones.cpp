/*#include "Funciones.h"

list<cFabricante> CargarFabricantes(list<cFabricante> &ListaFabricantes)
{

	cFabricante* ImplantesOrtopedicos = new cFabricante("IMECO", "Calle Combet 7391", 8429);

	cFabricante* ProtesisDental = new cFabricante("MHC Odontologia", "Av. José Gervasio Artigas 5014", 8474);

	cFabricante* ProtesisQuirurgica = new cFabricante("FICO ALEMANA", "Montevideo 865", 8436);

	ListaFabricantes.push_back(*ImplantesOrtopedicos);
	ListaFabricantes.push_back(*ProtesisDental);
	ListaFabricantes.push_back(*ProtesisQuirurgica);
	
	return ListaFabricantes;
}


list <cHospital> CargarHospitales(list <cHospital> &ListaHospitales) {

	



	list <cMedico> ListaMedicos_favaloro;
	list <cMedico> ListaMedicos_clinicas;
	list<cMedico> ListasMedicos_swiss;
	list <cMedico> ListasMedicos_modelo;

	list<cOrtopedia> ListaOrtopedias_favaloro;
	list<cOrtopedia> ListaOrtopedias_clinicas;
	list<cOrtopedia> ListaOrtopedias_swiss;
	list<cOrtopedia> ListaOrtopedias_modelo;

	list<cPaciente> ListaPacientes_favaloro;
	list<cPaciente> ListaPacientes_clinicas;
	list<cPaciente> ListaPacientes_swiss;
	list<cPaciente> ListaPacientes_modelo;

	list <cProtesis> ListaProtesis1;
	list <cProtesis> ListaProtesis2;
	list <cProtesis> ListaProtesis3;

	cPaciente* Paciente1 = new cPaciente("Rosario", "Lonzayes", 42833137, "titanio", 2);
	cPaciente* Paciente2 = new cPaciente("Ana", "Perez", 45833137, "plastico", 0.5);
	cPaciente* Paciente3 = new cPaciente("Clarita", "Crux", 42833667, "ninguna", 0);
	cPaciente* Paciente4 = new cPaciente("Poni", "Ponex", 44563137, "titanio", 3);
	cPaciente* Paciente5 = new cPaciente("Cindy", "Aldet", 42833987, "titanio", 2);
	cPaciente* Paciente6 = new cPaciente("Pampa", "Pamplix", 32433137, "ninguna", 0.7);
	cPaciente* Paciente7 = new cPaciente("Ezequiel", "Str", 42571137, "titanio", 0);
	cPaciente* Paciente8 = new cPaciente("Sol", "Segura", 42833222, "acero", 4);
	cPaciente* Paciente9 = new cPaciente("Sol", "Mala", 42831627, "cobalto", 2.6);
	cPaciente* Paciente10 = new cPaciente("Franco", "Pessana", 33233137, "ninguna", 0);
	cPaciente* Paciente11 = new cPaciente("Troy", "Bolton", 23543137, "ninguna", 0);
	cPaciente* Paciente12 = new cPaciente("Sharpay", "Evans", 65233137, "ninguna", 0.9);

	ListaPacientes_favaloro.push_back(*Paciente1);
	ListaPacientes_favaloro.push_back(*Paciente2);
	ListaPacientes_favaloro.push_back(*Paciente3);

	ListaPacientes_clinicas.push_back(*Paciente4);
	ListaPacientes_clinicas.push_back(*Paciente5);
	ListaPacientes_clinicas.push_back(*Paciente6);

	ListaPacientes_swiss.push_back(*Paciente7);
	ListaPacientes_swiss.push_back(*Paciente8);
	ListaPacientes_swiss.push_back(*Paciente9);

	ListaPacientes_modelo.push_back(*Paciente10);
	ListaPacientes_modelo.push_back(*Paciente11);
	ListaPacientes_modelo.push_back(*Paciente12);


	cMedico* Medico1 = new cMedico("Callie", "Torres", 44456);
	cMedico* Medico2 = new cMedico("Derek", "Shepherd", 33467);
	cMedico* Medico3 = new cMedico("Miranda", "Bailey", 28906);
	cMedico* Medico4 = new cMedico("Arizona", "Robins", 45120);
	cMedico* Medico5 = new cMedico("Meredith", "Grey", 66892);
	cMedico* Medico6 = new cMedico("Owen", "Haunt", 333456);
	cMedico* Medico7 = new cMedico("Cristina", "Yang", 123456);
	cMedico* Medico8 = new cMedico("Teddy", "Atman", 333567);
	cMedico* Medico9 = new cMedico("Mark", "Stone", 332246);
	cMedico* Medico10 = new cMedico("Adison", "Montgomery", 677456);
	cMedico* Medico11 = new cMedico("Amelia", "Shepherd", 847456);
	cMedico* Medico12 = new cMedico("Geoge", "Omali", 284456);
	cMedico* Medico13 = new cMedico("Richard", "webber", 691456);
	cMedico* Medico14 = new cMedico("Alex", "karev", 288457);
	cMedico* Medico15 = new cMedico("April", "Kepner", 453531);
	cMedico* Medico16 = new cMedico("Izzie", "Stevens", 333456);


	ListaMedicos_favaloro.push_back(*Medico1);
	ListaMedicos_favaloro.push_back(*Medico2);
	ListaMedicos_favaloro.push_back(*Medico3);
	ListaMedicos_favaloro.push_back(*Medico4);
	ListaMedicos_favaloro.push_back(*Medico16);

	ListaMedicos_clinicas.push_back(*Medico5);
	ListaMedicos_clinicas.push_back(*Medico6);
	ListaMedicos_clinicas.push_back(*Medico7);
	ListaMedicos_clinicas.push_back(*Medico8);


	ListasMedicos_modelo.push_back(*Medico9);
	ListasMedicos_modelo.push_back(*Medico10);
	ListasMedicos_modelo.push_back(*Medico2);
	ListasMedicos_modelo.push_back(*Medico11);
	ListasMedicos_modelo.push_back(*Medico12);

	ListasMedicos_swiss.push_back(*Medico13);
	ListasMedicos_swiss.push_back(*Medico14);
	ListasMedicos_swiss.push_back(*Medico15);
	ListasMedicos_swiss.push_back(*Medico16);
	

	cFecha* Fecha1 = new cFecha("3", "5", "2021");
	cFecha* Fecha2 = new cFecha("3", "6", "2020");
	cFecha* Fecha3 = new cFecha("4", "7", "2023");
	cFecha* Fecha4 = new cFecha("4", "8", "2021");
	cFecha* Fecha5 = new cFecha("5", "9", "2021");
	cFecha* Fecha6 = new cFecha("6", "10", "2019");
	cFecha* Fecha7 = new cFecha("7", "11", "2020");
	cFecha* Fecha8 = new cFecha("8", "12", "2023");
	cFecha* Fecha9 = new cFecha("9", "13", "2022");
	cFecha* Fecha10 = new cFecha("9", "12", "2022");
	cFecha* Fecha11= new cFecha("10", "02", "2022");
	cFecha* Fecha12 = new cFecha("11", "05", "2022");
	cFecha* Fecha13 = new cFecha("31", "06", "2021");

	// protesis 

	cQuirurgico* protesis1 = new cQuirurgico(0, "Acero inoxidable", "IMECO", *Fecha1, true);
	cQuirurgico* protesis2 = new cQuirurgico(0, "titanio", "Bernet", *Fecha2, true);
	cQuirurgico* protesis3 = new cQuirurgico(0, "plastico", "IMECO", *Fecha3, true);
	cQuirurgico* protesis4 = new cQuirurgico(0, "titanio", "Diaz", *Fecha4, false);
	cQuirurgico* protesis5 = new cQuirurgico(0, "Acero inoxidable", "Rodriguez", *Fecha5, false);
	cQuirurgico* protesis6 = new cQuirurgico(0, "titanio", "Lala", *Fecha6, true);
	cQuirurgico* protesis7 = new cQuirurgico(0, "titanio", "Pony", *Fecha7, false);
	cQuirurgico* protesis8 = new cQuirurgico(0, "titanio", "Diaz", *Fecha8, false);
	cQuirurgico* protesis9 = new cQuirurgico(0, "Acero inoxidable", "IMECO", *Fecha9,true);
	cQuirurgico* protesis10 = new cQuirurgico(0, "Acero inoxidable", "Bernet", *Fecha10, true);

	cNo_Quirurgico*protesis11 = new cNo_Quirurgico(2.5, "Acero inoxidable", "Bernet", *Fecha10, true);
	cNo_Quirurgico* protesis12 = new cNo_Quirurgico(3.5, "plastico", "Bernet", *Fecha5, false);
	cNo_Quirurgico* protesis13 = new cNo_Quirurgico(4.5, "titanio", "Bernet", *Fecha4, true);
	cNo_Quirurgico* protesis14 = new cNo_Quirurgico(3.5, "Acero inoxidable", "Bernet", *Fecha2, true);
	cNo_Quirurgico* protesis15 = new cNo_Quirurgico(2.5, "Acero inoxidable", "Bernet", *Fecha9, false);
	cNo_Quirurgico* protesis16 = new cNo_Quirurgico(1.5, "Acero inoxidable", "Bernet", *Fecha11, true);
	cNo_Quirurgico* protesis17 = new cNo_Quirurgico(2.5, "plastico", "Bernet", *Fecha10, false);

	// cargo las distintas listas de protesis, asi no todas las ortopedias tienen las mismas listas 

	ListaProtesis1.push_back(*protesis1);
	ListaProtesis1.push_back(*protesis2);
	ListaProtesis1.push_back(*protesis3);
	ListaProtesis1.push_back(*protesis4);
	ListaProtesis1.push_back(*protesis5);
	ListaProtesis1.push_back(*protesis6);
	

	ListaProtesis2.push_back(*protesis4);
	ListaProtesis2.push_back(*protesis5);
	ListaProtesis2.push_back(*protesis6);
	ListaProtesis2.push_back(*protesis1);
	ListaProtesis2.push_back(*protesis2);

	ListaProtesis1.push_back(*protesis7);
	ListaProtesis1.push_back(*protesis8);
	ListaProtesis1.push_back(*protesis9);
	ListaProtesis1.push_back(*protesis10);
	ListaProtesis1.push_back(*protesis11);
	ListaProtesis1.push_back(*protesis12);




	//Hacer objetos para cargar en las listas

	cOrtopedia* ortopedia1 = new cOrtopedia("Ortopedia ASTRAL", "Lautaro 410", 8029, ListaProtesis1);
	cOrtopedia* ortopedia2 = new cOrtopedia("Ortopedia Rosario", "Rosario 888", 1474, ListaProtesis2);
	cOrtopedia* ortopedia3 = new cOrtopedia("Ortopedia Palminteri", "Av.La Plata 418", 8036, ListaProtesis3);
	cOrtopedia* ortopedia4 = new cOrtopedia("Ortopedia Baez", "Av 123 345", 8035, ListaProtesis3);
	cOrtopedia* ortopedia5 = new cOrtopedia("Ortopedia Casasco", "calle falsa 123", 8036, ListaProtesis3);
	cOrtopedia* ortopedia6 = new cOrtopedia("Ortopedia Pilot", "Av. 34 67", 8037, ListaProtesis3);
	cOrtopedia* ortopedia7 = new cOrtopedia("Ortopedia Todo para el manco", "islas malvinas 1454", 8036, ListaProtesis3);
	cOrtopedia* ortopedia8 = new cOrtopedia("Ortopedia Diaz", "Av.La Plata 567", 8038, ListaProtesis3);
	cOrtopedia* ortopedia9 = new cOrtopedia("Ortopedia Uno", " Plata 418", 8039, ListaProtesis1);
	cOrtopedia* ortopedia10 = new cOrtopedia("Ortopedia Sol", "belgrano 418", 8040, ListaProtesis1);
	cOrtopedia* ortopedia11 = new cOrtopedia("Ortopedia Rodriguez", "nueve de julio 418", 8041, ListaProtesis1);
	cOrtopedia* ortopedia12 = new cOrtopedia("Ortopedia San Martin", "San martin 418", 8042, ListaProtesis1);
	cOrtopedia* ortopedia13 = new cOrtopedia("Ortopedia Felicidad", "Miley 48", 8043, ListaProtesis1);


	// listas de ortopedias para cada hospital 

	ListaOrtopedias_favaloro.push_back(*ortopedia1);
	ListaOrtopedias_favaloro.push_back(*ortopedia2);
	ListaOrtopedias_favaloro.push_back(*ortopedia3);
	ListaOrtopedias_favaloro.push_back(*ortopedia4);
	ListaOrtopedias_favaloro.push_back(*ortopedia5);
	ListaOrtopedias_favaloro.push_back(*ortopedia6);
	

	ListaOrtopedias_clinicas.push_back(*ortopedia5);
	ListaOrtopedias_clinicas.push_back(*ortopedia6);
	ListaOrtopedias_clinicas.push_back(*ortopedia7);
	ListaOrtopedias_clinicas.push_back(*ortopedia8);
	ListaOrtopedias_clinicas.push_back(*ortopedia9);
	ListaOrtopedias_clinicas.push_back(*ortopedia10);

	ListaOrtopedias_swiss.push_back(*ortopedia10);
	ListaOrtopedias_swiss.push_back(*ortopedia11);
	ListaOrtopedias_swiss.push_back(*ortopedia12);
	ListaOrtopedias_swiss.push_back(*ortopedia13);

	ListaOrtopedias_modelo.push_back(*ortopedia2);
	ListaOrtopedias_modelo.push_back(*ortopedia3);
	ListaOrtopedias_modelo.push_back(*ortopedia7);
	ListaOrtopedias_modelo.push_back(*ortopedia5);
	ListaOrtopedias_modelo.push_back(*ortopedia8);
	ListaOrtopedias_modelo.push_back(*ortopedia9);
	ListaOrtopedias_modelo.push_back(*ortopedia11);

	cHospital* Hfavaloro = new cHospital("Hospital Favaloro", "Avenida Belgrano 234", 456789, ListaMedicos_favaloro, ListaOrtopedias_favaloro, ListaPacientes_favaloro);
	cHospital* Hclinicas = new cHospital("Hospital de clinicas", "Avenida Paso 123", 456723, ListaMedicos_clinicas, ListaOrtopedias_clinicas, ListaPacientes_clinicas);
	cHospital* Hswissmedical = new cHospital("Hospital swiss Medical", "Solis 223", 206789, ListasMedicos_swiss, ListaOrtopedias_swiss, ListaPacientes_swiss);
	cHospital* Hmodelo = new cHospital("Sanatorio Modelo", "Colon 348", 355689, ListasMedicos_modelo, ListaOrtopedias_modelo, ListaPacientes_modelo);

	
    ListaHospitales.push_back(*Hfavaloro);
	ListaHospitales.push_back(*Hclinicas);
	ListaHospitales.push_back(*Hswissmedical);
	ListaHospitales.push_back(*Hmodelo);
	
	return ListaHospitales;
}




*/
