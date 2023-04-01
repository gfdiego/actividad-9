#include <iostream>
using namespace std;
const char *nombre_archivo = "notas.dat";
struct Promedioarchivo
{

    int nota1[40];
    int nota2[40];
    int nota3[40];
    int nota4[40];

    int id[10];
    string nombre[20];
    string apellido[20];
};
  void Crear();
    void Leer();

int main(int argc, char const *argv[])
{
   Crear();
    Leer();
    system("pause");
}
void Crear(){
    FILE* archivo = fopen(nombre_archivo, "a+b");
    Promedioarchivo estudiante;
    int tam=0; 
   cout<<"Cuantos estudiantes desea agregar"<<endl;
    cin>>tam;
   
    for (int i = 0; i < tam; i++)
    {
        fflush(stdin);
        cout<<"Estudiante: "<<i+1<<endl;
        cout<<"ingrese id:";
        cin>>estudiante.id[i];
         cin.ignore();
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
       
       fwrite(&estudiante,sizeof(Promedioarchivo),1,archivo);  
    }
     
        fclose(archivo);
}

        void Leer(){
    system("cls");
    FILE* archivo = fopen(nombre_archivo,"rb");
    if (!archivo)
    {
        archivo=fopen(nombre_archivo, "w+b");
       }
        Promedioarchivo estudiante;
        int id=0, promedio[40];
        int i=0;
         
        fread(&estudiante,sizeof(Promedioarchivo),1, archivo);
        cout<<"_________________________________________"<<endl;
        cout<<"ID"<<"|"<<"codigo"<<"|"<<"nombre"<<"|"<<"apellidos"<<"|"<<"telefono"<<endl;
        do
        {

            promedio[i]=(estudiante.nota1[i] + estudiante.nota2[i] + estudiante.nota3[i] + estudiante.nota4[i])/4;
           
            cout<<id<<"|"<<estudiante.id[i]<<"|"<<estudiante.nombre[i]<<"|"<<estudiante.apellido[i]<<"|"<<promedio[i]<<endl;
              if (promedio[i]>= 60) {
            cout << "Resultado: Aprobado" << endl;
        } else {
            cout << "Resultado: Reprobado" << endl;
        }
            fread(&estudiante,sizeof(Promedioarchivo),1, archivo);
            id+=1;
            i++;
        } while (feof(archivo)==0);
        fclose(archivo);
        

    
       }

    

       
