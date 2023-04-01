#include <iostream>

using namespace std;
struct promediopunteros
{
    int *id;
    string *nombre;
    string *apellido;
    int *nota1;
    int *nota2;
    int *nota3;
    int *nota4;
};

int main(int argc, char const *argv[])
{
 promediopunteros estudiante;
  
  int tam=0, promedio=0 , ja=5;
 
 
   cout<<"Cuantos estudiantes desea agregar"<<endl;
    cin>>tam;
    estudiante.id= new int[tam];
   estudiante.nombre= new string[tam];
    estudiante.apellido= new string[tam];
     estudiante.nota1= new int[tam];
      estudiante.nota2= new int[tam];
       estudiante.nota3= new int[tam];
       estudiante.nota4= new int[tam];
   
    for (int i = 0; i < tam; i++)
    {
        cout<<"Estudiante: "<<i+1<<endl;
        cout<<"ingrese id:";
        cin>>estudiante.id[i];
        cout<<"ingrese nombre:";
        cin>>estudiante.nombre[i];
        cout<<"ingrese apellido:";
        cin>>estudiante.apellido[i];
        cout<<"ingrese nota 1:";
        cin>>estudiante.nota1[i];
        cout<<"ingrese nota 2:";
        cin>>estudiante.nota2[i];
         cout<<"ingrese nota 3:";
        cin>>estudiante.nota3[i];
         cout<<"ingrese nota 4:";
        cin>>estudiante.nota4[i];
      
       
    }
    for(int i=0; i <tam; i++){
         promedio=(estudiante.nota1[i] + estudiante.nota2[i] + estudiante.nota3[i] + estudiante.nota4[i])/4;
        cout<<"------------------------------"<<endl;  
        cout<<"Estudiante"<<i+1<<endl;
        cout<<"Id: "<<estudiante.id[i]<<endl;
        cout<<"Nombre"<< estudiante.nombre[i]<<endl;
        cout<<"Apellido: "<<estudiante.apellido[i]<<endl;
        cout<<"Promedio: "<<promedio<<endl;
          if (promedio>= 60) {
            cout << "Resultado: Aprobado" << endl;
        } else {
            cout << "Resultado: Reprobado" << endl;
        }
       

        }
 delete []  estudiante.id;
 delete[]  estudiante.nombre;
 delete[ ] estudiante.apellido;
  delete []  estudiante.nota1;
   delete []  estudiante.nota2;
    delete []  estudiante.nota3;
     delete []  estudiante.nota4;

  
    
       

    system("pause");
}
