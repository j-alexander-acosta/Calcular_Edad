#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    // Variables para almacenar la información del usuario
    string nombre, apellido;
    int dia, mes, ano;

    // Captura de información
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su apellido: ";
    getline(cin, apellido);

    cout << "Ingrese su fecha de nacimiento: (DD MM AAAA): ";
    cin >> dia >> mes >> ano;

    // Obtención de la fecha actual
    time_t now = time(0);
    tm* fecha_actual = localtime(&now);
    int ano_actual = fecha_actual->tm_year + 1900;

    // Cálculo de la edad
    int edad = ano_actual - ano;

    // Verificación de la edad y mensaje resultante
    if (edad >= 18) {
        cout << "\n¡" << nombre << " " << apellido << ", usted tiene " << edad << " años y puede votar!\n";
    } else {
        cout << "\nLo siento, " << nombre << " " << apellido << ", usted no tiene la edad suficiente para votar.\n";
    }

    return 0;
}
