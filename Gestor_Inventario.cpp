#include<iostream>

using namespace std;
string nombre;

//clases
class mercancia{
    private:
    string marca;
    float cantidad;
};

//Funciones
void clear(){
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void registroMerc(){
    int opcion;
    clear();
    cout<<"---------------------------------"<<endl;
    cout<<"Registro de ingreso de mercancia"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Que producto desea registrar?"<<endl;
    cout<<"(1) Cacahuates\n(2) Gomitas\n(3) Frituras";
}

void menu(){
    int opcion;
    cout<<"Hola, "<<nombre<<" bienvenido al gestor de inventario de la dulceria"<<endl;
    cout<<"Que deseas realizar hoy?"<<endl;
    cout<<"(1) Registrar un ingreso de mercancia"<<endl;
    cout<<"(2) Registrar ventas "<<endl;
    cout<<"Selecciona una opcion: ";
    cin>>opcion;
    if(opcion==1)
    registroMerc();
}


int main(){
    clear();
    cout<<"Hola, cual es tu nombre? ";
    getline(cin, nombre);
    clear();
    menu();


    return 0;
}