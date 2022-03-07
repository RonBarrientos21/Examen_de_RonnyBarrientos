#include <stdio.h>
#include <iostream>

using namespace std;
int factorial(int n)
{
    int i, //variable local//
    producto = 1;

    for (i = n; i > 1; --i) {
        producto *= i;
    }

    return producto;
}

int main(void) {


    int num, fact;
    printf("Ingrese un entero igual o mayor que cero: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("El factorial de un numero negativo (%d) es indefinido\n", num);
    } else if (num <= 30) {
        fact = factorial(num);
        printf("El factorial de %d es %d\n", num, fact);

    }
    int N;
    cout << "Ingrese un numero entero positivo: " << endl;
    cin >> N;
    cout << endl;
    for (int i = 1; i <= 10; i++) {
        cout << N << " x " << i << " = " << N * i << endl;
    }
    int N2;
    int numero;
    int contPares = 0;
    int contImpares = 0;


    cout<<"Ingresar la cantidad de numero para analizar:";
    cin>>N2;
    for(int i=1; i<= N2;i++) {
        cout << "ingrese un numero:";
        cin >> numero;
        if (numero % 2 == 0) { //es par
            contPares++;
        } else {
            contImpares++;

        }

    }
    cout << "La cant de pares es:" << contPares << endl;
    cout << "La cant de impares es:" << contImpares << endl;

    int num2;
    cout<<"ELIJA UN DIA DE LA SEMANA PARA SABER SI ES UN DIA LABORAL O NO: " <<endl;

    cout<<"PARA ELEGIR EL LUNES INGRESE EL NUMERO 1"<<endl;
    cout<<"PARA ELEGIR EL MARTES INGRESE EL NUMERO 2"<<endl;
    cout<<"PARA ELEGIR EL MIERCOLES INGRESE EL NUMERO 3"<<endl;
    cout<<"PARA ELEGIR EL JUEVES INGRESE EL NUMERO 4"<<endl;
    cout<<"PARA ELEGIR EL VIERNES INGRESE EL NUMERO 5"<<endl;
    cout<<"PARA ELEGIR EL SABADO INGRESE EL NUMERO 6"<<endl;
    cout<<"PARA ELEGIR EL DOMINGO INGRESE EL NUMERO 7"<<endl;
    cin>>num2;
    switch (num2) {
        case 1:
            cout << "LUNES es un dia laboral";
            break;
        case 2:
            cout << "MARTES es un dia laboral";
            break;
        case 3:
            cout << "MIERCOLES un dia laboral";
            break;
        case 4:
            cout << "JUEVES un dia laboral";
            break;
        case 5:
            cout << "VIERNES es un dia laboral ";
            break;
        case 6:
            cout << "SABADO no es un dia laboral";
            break;
        case 7:
            cout << "DOMINGO no es un dia laboral";
            break;
        default:
            cout << "Error de opcion.";
    }
    return (0);
}