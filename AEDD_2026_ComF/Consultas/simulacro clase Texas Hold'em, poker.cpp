#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	
	//string lista_cartas = " ";
	string lista_cartas="";//Esto es vacío
	
	//int carta, apuesta, ganadora, carta_final, time,  balance = 0;
	int carta, apuesta, carta_final,  balance = 0; //Saqué la declaración de la variable "time" y de "ganadora" por que lo redeclaraste abajo para el uso del rand ****
	
	//srand = (time ());		//Esto no se escribe así
	srand(time(0));				//Se escribe así
	
	
	
	while (cin >> carta >> apuesta) {
		
		int ganadora = rand () % 13 - 1; //**** acá esta redeclarada
		
		if (carta > ganadora) {
			balance += apuesta;
			carta_final = carta;//No utilizás carta_final en ningún otro lado
		}
		else {
			balance -= apuesta;
			carta_final = ganadora;//No utilizás carta_final en ningún otro lado
		}
		
		
//		switch (carta) { Lo comento todo por que no deberían ser couts todo debería guardarse en tu variable lista_cartas para usarla en el cout final, si lo ejecutas como está el switch te tira un cout cada que pongas una de esas cartas
//			
//			case 11: cout << "J" << " - " ; 
//				break;
//			case 12: cout << "K" << " - " ;
//				break;
//			case 13: cout << "Q" << " - " ;
//				break;
////			case 1: cout << "a" << " - ",
////				break;
//				
//			case 1: cout << "a" << " - "; //Acá era ; y no ,
//			break;
//		
//		}
//				gano += to_string(cartas)
		
	}
	
	/*cout << "cartas ganadoras: " << lista_cartas += gano << " - " << endl;*/
	cout << "cartas ganadoras: " << gano << endl; //Acá vá sin la operación de asignación (=) dentro del cout ni el lista_cartas por que ya está en gano
	cout << "balace: $" << balance << endl;
	
	if (balance > 0){
		cout << "mensaje: Tiburón de la mesa" << endl;
	}
	else {
		if (balance < 0) {
			cout << "mensaje: Día de pérdida" << endl;
		}
		else {
			cout << "mensaje: Cuentas saldadas" << endl;
		}
	}
	
	
	return 0;
}

