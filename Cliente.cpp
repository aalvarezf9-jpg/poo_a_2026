#include "Persona.cpp"
#include <iostream>

using namespace std;
//nombre de la clase
class cliente : persona{
	//Atributos
	private :
		string nit;
	//Constructores
	public :
		cliente(){
			
		}
		cliente(string nom, string ape, string dir, int tel, string fn, string n) : persona(nom,ape,dir,fn,tel){
			nit = n;
		}
	//metodos
	void leer(){
		cout<<"Nit: "<<nit<<endl;
		cout<<"Nombres: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		cout<<"Fecha Nacimiento: "<<fecha_nacimiento<<endl;
	}
};
	
