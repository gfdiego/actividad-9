#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int tam=0;
    int promedio;
    int nota1[40];
    int nota2[40];
    int nota3[40];
    int nota4[40];

    int id[10];
    string nombre[30];
    string apellido[30];
	
    cout<<"Cuantos estudiantes desea agregar"<<endl;
    cin>>tam;
    for(int i=0; i <tam; i++){
        cout<<"Estudiante"<<i+1<<endl;
        cout<<"ingrese id:";
        cin>>id[i];
        cout<<"ingrese nombre:";
	    cin>>nombre[i];
         cout<<"ingrese apellido:";
	    cin>>apellido[i];
         cout<<"ingrese nota 1:";
	    cin>>nota1[i];
         cout<<"ingrese nota 2:";
	    cin>>nota2[i];
         cout<<"ingrese nota 3:";
	    cin>>nota3[i];
         cout<<"ingrese nota 4:";
	    cin>>nota4[i];
    }   
     for(int i=0; i <tam; i++){
        promedio=(nota1[i] + nota2[i] + nota3[i] + nota4[i])/4;
        cout<<"------------------------------"<<endl;  
        cout<<"Estudiante"<<i+1<<endl;
        cout<<"Id: "<<id[i]<<endl;
        cout<<"Nombre:" <<nombre[i]<<endl;
        cout<<"Apellido: "<<apellido[i]<<endl;
        cout<<"Promedio: "<<promedio<<endl;
          if (promedio>= 60) {
            cout << "Resultado: Aprobado" << endl;
        } else {
            cout << "Resultado: Reprobado" << endl;
        }

        
        }
       

    system("pause");
}
