#include <iostream>
using namespace std;

void Calculos(){

    int a;
    cout << "Digite um numero: ";
    cin >> a;

    int b;
    cout << "Digite outro numero: ";
    cin >> b;

    string operacao;
    cout << "Digite a operacao (+, -, *, /): ";
    cin >> operacao;

    if (operacao == "+") {
        cout << "Resultado: " << a + b << endl;
    } else if (operacao == "-") {
        cout << "Resultado: " << a - b << endl;
    } else if (operacao == "*") {
        cout << "Resultado: " << a * b << endl;
    } else if (operacao == "/") {
        if (b != 0) {
            cout << "Resultado: " << a / b << endl;
        } else {
            cout << "Erro: Divisão por zero!" << endl;
        }
    } else {
        cout << "Operação inválida!" << endl;
    }
}

int main() {

    Calculos();
    return 0;
}