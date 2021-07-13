/*
	SISTEMA QUE GUARDA LA CITA DE UN PACIENTE
	PARA UN DENTISTA.
	EDUARDO MISAEL RAMOS 2020
*/

#include <iostream>	//DATOS DE ENTRADA Y SALIDA
#include <conio.h>	//PARA POSICIONAR EL TEXTO
#include <fstream>

using namespace std;

struct paciente{
	char	nombre[8];
	char	apellido[10];
	int	edad;
	char	fechaCita;
	int	hora;
}pacientes[5];

int main(){
	ofstream registros("registros.txt");	//CREA Y ABRE EL ARCHIVO
	
	for(int i = 0; i <= 2; i++){
		cout<<"Paciente No "<<i+1<<endl;
		registros<<"Paciente No "<<i+1<<endl;
		
		cout<<"Nombre del paciente: "<<endl;
		cin>>pacientes[i].nombre;
		registros<<"Nombre: "<<pacientes[i].nombre<<endl;
		cout<<endl;
		
		cout<<"Ingrese apellido: "<<endl;
		cin>>pacientes[i].apellido;
		registros<<"Apellido: "<<pacientes[i].apellido<<endl;
		cout<<endl;
		
		cout<<"Edad: "<<endl;
		cin>>pacientes[i].edad;
		registros<<"Edad: "<<pacientes[i].edad<<endl;
		cout<<endl;
		
		cout<<"Fecha de la cita: "<<endl;
		cin>>pacientes[i].fechaCita;
		registros<<"Fecha de la cita: "<<pacientes[i].fechaCita<<endl;
		cout<<endl;
		
		cout<<"Hora: "<<endl;
		cin>>pacientes[i].hora;
		registros<<"Hora: "<<pacientes[i].hora<<endl;
		registros<<endl;
		cout<<endl;
		
		cout<<endl;
		
	}
	
	cout<<"Informacion Guardada con exito."<<endl;
	
	return 0;
}

