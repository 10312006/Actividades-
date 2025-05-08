#include <iostream>
#include <cmath> // Para funciones matemáticas como sin, cos, etc.

using namespace std;

// Cambia esta función por la que quieras integrar
double f(double x) {
    return x * x; // Por ejemplo, f(x) = x^2
}

// Método del Trapecio para integración numérica
double integrar(double a, double b, int n) {
    double h = (b - a) / n; // Tamaño del paso
    double suma = (f(a) + f(b)) / 2.0;

    for (int i = 1; i < n; ++i) {
        double xi = a + i * h;
        suma += f(xi);
    }

    return suma * h;
}

int main() {
    double a, b;
    int n;

    cout << "Ingrese el limite inferior de integracion a: ";
    cin >> a;
    cout << "Ingrese el limite superior de integracion b: ";
    cin >> b;
    cout << "Ingrese el numero de intervalos n (mayor n = mas precision): ";
    cin >> n;

    double resultado = integrar(a, b, n);
    cout << "El valor aproximado de la integral es: " << resultado << endl;

    return 0;
}