#include <iostream>
using namespace std;

int main() {
	int AmountOfShirts;
	cin >> AmountOfShirts;
	
	while (AmountOfShirts--) {
		int AmountOfStudents, SecretNumber;
		cin >> AmountOfStudents >> SecretNumber;
		
		int Guess;
		int PositionRight = -1; // Indica si alguien adivin� correctamente
		int CloseNumber = 1000; // Diferencia m�s cercana (inicialmente un valor grande)
		int Position = -1; // Posici�n del m�s cercano
		
		for (int i = 0; i < AmountOfStudents; i++) {
			cin >> Guess;
			
			int diff = Guess - SecretNumber;
			if (diff < 0) {
				diff = -diff; // Obtener el valor absoluto
			}
			
			if (Guess == SecretNumber) {
				PositionRight = i + 1; // La posici�n es 1-based
				break;
			} else if (diff < CloseNumber) {
				CloseNumber = diff;
				Position = i + 1; // La posici�n es 1-based
			}
		}
		
		if (PositionRight != -1) {
			cout << PositionRight << endl;
		} else {
			cout << Position << endl;
		}
	}
	
	return 0;
}
