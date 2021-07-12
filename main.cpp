/*
	SISTEMA QUE GUARDA LA CITA DE UN PACIENTE
	PARA UN DENTISTA.
	EDUARDO MISAEL RAMOS 2020
*/

#include <iostream>	//DATOS DE ENTRADA Y SALIDA
#include <conio.h>	//PARA POSICIONAR EL TEXTO
using namespace std;

struct paciente{
	char	nombre[8];
	char	apellido[10];
	int	edad;
	char	fechaCita;
	int	hora;
}pacientes[5];

int main(){
	for(int i = 0; i <= 5; i++){
		cout<<"Paciente No "<<i+1<<endl;
		
		cout<<"Nombre del paciente: "<<endl;
		cin>>pacientes[i].nombre;
		cout<<endl;
		
		cout<<"Ingrese apellido: "<<endl;
		cin>>pacientes[i].apellido;
		cout<<endl;
		
		cout<<"Edad: "<<endl;
		cin>>pacientes[i].edad;
		cout<<endl;
		
		cout<<"Fecha de la cita: "<<endl;
		cin>>pacientes[i].fechaCita;
		cout<<endl;
		
		cout<<"Hora: "<<endl;
		cin>>pacientes[i].hora;
		cout<<endl;
		
		cout<<endl;
	}
	
	return 0;
}

