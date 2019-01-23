#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int suma ;
    int num;
    int num2;
    int multi;
    int contador = 1;
    ofstream fo;
    fo.open("trabajo.txt");
    if (fo.is_open()){
            while(contador <= 4){
                cout << "Ingrese un numero: " << endl;
                cin >> num;
                cout << "Ingrese un numero: " << endl;
                cin >> num2;
                suma = num + num2;
                multi = num * num2;
                contador = contador + 1;
                fo << num << " - "<< num2 << " - " << " suma = " << suma << " , multiplicacion = " << multi << endl;
            }
    fo.close();
    }
    return 0;
}
