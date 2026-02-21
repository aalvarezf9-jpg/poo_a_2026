#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
    string nit,nombres,apellidos,direccion;
    int telefono;

    cout<<"Ingresar Nit: ";
    cin>>nit;
    cout<<"Ingresar Nombres: ";
    cin>>nombres;
    cout<<"Ingrese Apellidos: ";
    cin>>apellidos;
    cout<<"Ingrese Direccion: ";
    cin>>direccion;
    cout<<"Ingrese Telefono: ";
    cin>>telefono;
    //instancia de un objeto

    /*Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
    obj.mostrar();

    cout<<"Ingresar Nit: ";
    cin>>nit;
    obj.setNit(nit);
    obj.mostrar();
    */
    Cliente obj = Cliente();
    
    obj.setNit(nit);
    obj.setNombres(nombres);
    obj.setApellidos(apellidos);
    obj.setDireccion(direccion);
    obj.setTelefono(telefono);
    obj.mostrar();
}
