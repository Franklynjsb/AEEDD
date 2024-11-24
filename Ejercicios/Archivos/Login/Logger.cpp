#include <iostream>
#include <fstream>
using namespace std;

struct usuario {
	string nick;
	string pass;
}

int main(int argc, char *argv[]) {
	
	int intentos=3, contador=0;
	string usuarioIngresado, contrasenaIngresada, estado;
	char usuario, contrasena;
	bool acabado=false;
	
	ifstream usuarios;
	usuarios.open("usuarios.txt");
	
	ofstream Log;
	Log.open("log.txt");
	
	while (!acabado) {
		cin >> usuarioIngresado >> contrasenaIngresada;
		intentos--;
		
		//Login
		for(int i=0;i<tope;i++) { 
			
		}
		
		if(intentos==0) {
			break;
		}
	}
	
	Log << intentos <<" | "<< usuarioIngresado << " " << contrasenaIngresada << " | " << estado;
	
	
	
	
	usuarios.close();
	Log.close();
	return 0;
}
