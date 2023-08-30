#include <iostream>

using namespace std;

int main(void){
    float a, b;

    cout << "Digite um Numero"<< endl;
    cin >> a;
    cout << "Digite um Numero"<< endl;
    cin >> b;

    cout << "A soma de " << a << " + " << b << " = " <<  a + b << endl; 
    cout << "A subtracao de " << a << " - " << b << " = " <<  a - b << endl;
    cout << "A multiplicacao de " << a << " x " << b << " = " << a * b << endl;
    cout << "A divisao de " << a << " / " << b << " = " << a / b << endl;
   
    
    return 0;
}