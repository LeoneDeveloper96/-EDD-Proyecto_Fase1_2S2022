#include <iostream>
using namespace std;

void carga(){

}
void registrarUsuario(){

}

void login(){

}

void reportes(){

}

void menu(){
    bool salir = false;
    cout << "***** Menu ***** \n";
    cout << "1. Carga masiva \n";
    cout << "2. Registrar usuario \n";
    cout << "3. Login \n";
    cout << "4. Reportes \n";
    cout << "5. Salir del juego \n";
    cout << "***** Menu ***** \n";
    cout << "Ingrese una opcion \n";
    int entrada;
    cin >> entrada;
    while (!salir)
    {
        if (entrada == 1){
            carga();
        }else if (entrada == 2){
            registrarUsuario();
        }else if (entrada == 3){
            login();
        }else if (entrada == 4){
            reportes();
        }else if (entrada == 5){
            break;
        } else {
            return menu();
        }
        salir = true;
    }

}

int main() {
    menu();
    return 0;
}




