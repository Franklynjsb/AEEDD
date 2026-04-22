#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string patente;
	cin >> patente;
	
	if (patente.length() != 7) cout << "Patente no valida: cantidad de caracteres incorrecta\n";
	else
		if(patente.at(0) >= 'A' && patente.at(0) <='Z'){
		if (patente.at(1) >= 'A' && patente.at(1) <='Z'){
			if (patente.at(2) >= '0' && patente.at(2) <='9'){
				if (patente.at(3) >= '0' && patente.at(3) <='9'){
					if (patente.at(4) >= '0' && patente.at(4) <='9'){
						if (patente.at(5) >= 'A' && patente.at(5) <='Z'){
							if (patente.at(6) >= 'A' && patente.at(6) <='Z'){
								
								cout << "Patente valida\n";
								
								
							}else cout << "Patente no valida: en la posicion " << 7 << " no corresponde el caracter esperado\n";//Muchos couts, me cansé
						}else cout << "Patente no valida: en la posicion " << 6 << " no corresponde el caracter esperado\n";
					}else cout << "Patente no valida: en la posicion " << 5 << " no corresponde el caracter esperado\n";
				}else cout << "Patente no valida: en la posicion " << 4 << " no corresponde el caracter esperado\n";
			}else cout << "Patente no valida: en la posicion " << 3 << " no corresponde el caracter esperado\n";
		}else cout << "Patente no valida: en la posicion " << 2 << " no corresponde el caracter esperado\n";
	}else cout << "Patente no valida: en la posicion " << 1 << " no corresponde el caracter esperado\n";
		
		
		
		return 0;
}
