#include <iostream>

using namespace std;

int main(){
    int numero, suma;
    do{
        cout << "Introduzca un numero situado entre el 1 y el 10: ";
        cin >> numero;
    }while(numero<1 || numero>10);
    cout <<"TABLA DE MULTIPLICAR DEL NUMERO " << numero;
    cout << endl;
    for(int i=1;i<=10;i++){
        cout << numero << " x " << i << " = " << numero*i<<endl;
    }
    return 0;






}
