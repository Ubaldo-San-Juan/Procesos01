#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

typedef struct Pintor{					//////////////////Declarando la estructura///////////////77
	
	string Nombre;
	string Actividad;
	bool Exponer;
	bool Pintar;
	
}pintor;


void menu();						///////////////Declarando funciones////////////
void alta();
void consultar()



int main(){	

	
menu();	
	
	getch();
	return 0;
}




void menu(){
	
	int opc;
	cout<<"*****Bienvenido al registro de Pintores*****"<<endl;
	cout<<"1) Dar alta "<<endl;
	cout<<"2) Consultar"<<endl;
	cout<<"3) Modificar datos";
	cin>>opc;
	
	
	switch(opc){
		
		case 1:
		alta();	
			
		break;
			
		case 2:
		consultar();
		break;
		
		
		case 3:
		modificar();
		break;
		
		case 4:
		cout>>"Adios gracias por usar el programa de registros de pintores :)"
		break;	
		
	} 

}
