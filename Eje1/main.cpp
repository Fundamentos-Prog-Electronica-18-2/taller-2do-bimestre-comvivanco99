#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string nombres;
    string apellidos;
    bool bandera = true;
    int valor = 0;
    ofstream fo;
    fo.open("mifichero.txt");
    if (fo.is_open()){
            while(bandera == true){
                cout << "Ingrese su nombre: " << endl;
                cin >> nombres;
                cout << "Ingrese su apellido: " << endl;
                cin >> apellidos;
                fo << nombres << " " << apellidos << endl;
                cout << "Desea ingresar mas nombres? si(1) o no(2): " << endl;
                cin >> valor;
                if(valor != 1){
                    bandera = false;
                //}else{
                    //bandera = false;
                }
             }
    fo.close();
    }
    return 0;
}
