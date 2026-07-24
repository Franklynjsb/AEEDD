//Posible solución
#include <bits/stdc++.h>

//funciones definidas
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

struct Atletas {
	string nombre;
	string apellido;
	
	int velocidad;
	int resistencia;
	double puntaje;
};

void intercambio(Atletas &a, Atletas &b){
	Atletas aux= a;
	a=b;
	b=aux;
}

double puntaje(int V, int Vmin, int Vmax, int R, int Rmax, int Rmin){
	
	double cincuenta = 50.00;
	
	return (cincuenta*(V-Vmin)/(Vmax-Vmin))+(cincuenta*(R-Rmin)/(Rmax-Rmin));
}
	
string nombreMayusculas (string nombre){
	
	string resultado= "";
	int tl = nombre.size();
	
	forn(i,tl){
		if(nombre[i] >= 'A' && nombre[i]<= 'Z'){
			resultado+= nombre[i];
		}else {
			resultado+= nombre[i] - 32;
		}
	}
	
	return resultado;
}
	
bool arregloOrdenado(Atletas lista[], int n){
	
	bool resultado = true;
	
	forn(i,n-1){
		if(lista[i].puntaje < lista[i+1].puntaje)	resultado = false;
	}
	
	return resultado;
}

int main() {
	//Esto es para acelerar milisegundos de la salida
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Atletas lista[101]{};
	Atletas copia[101]{};
	
	int n;
	double Vmax=0, Vmin=999, Rmax=0, Rmin=999;
	string nombre;
	
	cin >> n;
	cin.ignore();
	
	forn(i,n){
		
		getline(cin, lista[i].apellido, ',');
		cin.ignore();
		
		getline(cin, lista[i].nombre);
		
		cin >> lista[i].velocidad;
		if(lista[i].velocidad > Vmax) Vmax = lista[i].velocidad;
		if(lista[i].velocidad < Vmin) Vmin = lista[i].velocidad;
		
		cin >> lista[i].resistencia;
		if(lista[i].resistencia > Rmax) Rmax = lista[i].resistencia;
		if(lista[i].resistencia < Rmin) Rmin = lista[i].resistencia;
		
		cin.ignore();
	}
	
	forn(i,n){
		lista[i].nombre = nombreMayusculas(lista[i].nombre);
		lista[i].apellido = nombreMayusculas(lista[i].apellido);
		lista[i].puntaje = puntaje(lista[i].velocidad, Vmin, Vmax, lista[i].resistencia, Rmax, Rmin);
	}
	
	
	if(arregloOrdenado(lista, n)){
		
		cout << fixed << setprecision(2);
		if(n>=1) cout << "1ero: Nombre, Apellido: " << lista[0].nombre << ", " << lista[0].apellido << ". Puntaje final: " << lista[0].puntaje << "\n";
		if(n>=2) cout << "2do: Nombre, Apellido: " << lista[1].nombre << ", " << lista[1].apellido << ". Puntaje final: " << lista[1].puntaje << "\n";
		if(n>=3) cout << "3ero: Nombre, Apellido: " << lista[2].nombre << ", " << lista[2].apellido << ". Puntaje final: " << lista[2].puntaje << "\n";
		cout << "No hay que realizar intercambios.\n"; 
		
	}else {
		
		//copia de la lista
		forn(i,n) {	copia[i]=lista[i];	}
		
		//Hacer el podio
		forn(i,n){
			forn(j,n-1){
				if(lista[j].puntaje < lista[j+1].puntaje){
					intercambio(lista[j], lista[j+1]);
				}
			}
		}
		
		cout << fixed << setprecision(2);
		cout << "1ero: Nombre, Apellido: " << lista[0].nombre << ", " << lista[0].apellido << ". Puntaje final: " << lista[0].puntaje << "\n";
		if(n>=2) cout << "2do: Nombre, Apellido: " << lista[1].nombre << ", " << lista[1].apellido << ". Puntaje final: " << lista[1].puntaje << "\n";
		if(n>=3) cout << "3ero: Nombre, Apellido: " << lista[2].nombre << ", " << lista[2].apellido << ". Puntaje final: " << lista[2].puntaje << "\n";
		
		int pos = 0;
		bool encontrado = false;
		
		while(!encontrado){
			if((copia[0].apellido == lista[pos].apellido) && (copia[0].nombre == lista[pos].nombre)) {
				encontrado = true;
			}else {
				pos++;
			}
		}
		
		cout << "El atleta " << copia[0].apellido << ", " << copia[0].nombre << " que se encuentra en la posicion 0 pasa a la posicion " << pos-1 << "\n";
		cout << "El atleta " << lista[0].apellido << ", " << lista[0].nombre << " que se encuentra en la posicion " << pos-1 << " pasa a la posicion 0\n";
	}
	
	/*
	4
	perez, juan
	12
	20
	Gonzalez, mario
	16
	18
	rios, JOSE
	14
	21
	spock, SATURnino
	28
	5
	
	
	
	
	3
	Sol, ivana
	40
	10
	TERRICOLA, Pedro
	12
	16
	SATURNIano, exequiel
	41
	8
	*/
	
	
	
	return 0;
}


