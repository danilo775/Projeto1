#include <iostream>
#include <string>
using namespace std;

int main(void){
    
    int a, b;
    
    cout << "Digite um Numero"<< endl;
    cin >> a;
    cout << "Digite um Numero"<< endl;
    cin >> b; 
    cout << "A soma de " << a << " + " << b << " = " << a + b << endl; 

    string soma, somaA, somaB ;
    somaA = std::to_string(a);
    somaB = std::to_string(b);
    soma= somaA+somaB;
    cout << "A soma de caracter " << a << " + " << b << " = " << soma << endl; 
    
    
    return 0;
}