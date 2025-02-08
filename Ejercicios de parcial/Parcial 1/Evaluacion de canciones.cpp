#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int ID, C;
	char genero;
	long R;
	
	int mejorCalif=-1, mayorRep=-1, mejorCalifP=-1, mejorCalifR=-1, mejorCalifH=-1;
	
	while (cin >> ID, ID != 9999){
		
		cin >> C >> R >> genero;
		
		switch(genero){
		case 'P':
			if(C>mejorCalifP){
				mejorCalifP = ID;
			}
			break;
		case 'H':
			if(C>mejorCalifH){
				mejorCalifH = ID;
			}
			break;
		case 'R':
			if(C>mejorCalifR){
				mejorCalifR = ID;
			}
			break;
		}
		
		if(C>mejorCalif){
			mejorCalif=C;
		}
		
		if(R>mayorRep){
			mayorRep=R;
		}
		
	}
	
	
	if(mejorCalif!=-1) {
		cout << "Mejor calificacion: " << mejorCalif << endl;
	}else {
		cout << "Mejor calificacion: --" << endl;
	}
	if(mayorRep!=-1){
		cout << "Mayor cantidad de reproducciones: " << mayorRep << endl;
	}else {
		cout << "Mayor cantidad de reproducciones: --" << endl;
	}
	if(mejorCalifP!=-1){
		cout << "Genero P: Mejor cancion calificada: " << mejorCalifP << endl;
	}else {
		cout << "Genero P: Mejor cancion calificada: --" << endl;
	}
	if(mejorCalifR!=-1){
		cout << "Genero R: Mejor cancion calificada: " << mejorCalifR << endl;
	}else {
		cout << "Genero R: Mejor cancion calificada: --"<< endl;
		
	}
	if(mejorCalifH!=-1){
		cout << "Genero H: Mejor cancion calificada: " << mejorCalifH << endl;
	}else {
		cout << "Genero H: Mejor cancion calificada: -" << endl;
		
	}
	
	
	return 0;
}

