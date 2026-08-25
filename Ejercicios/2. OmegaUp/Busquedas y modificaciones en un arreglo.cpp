#include <iostream>
#include <string>
using namespace std;


//Plantilla del qs acomodada
void quicksort(long long arreglo[], int izq, int der) {
	int i = izq;
	int j = der;
	long long pivote = arreglo[(izq + der) / 2];
	
	while (i <= j) {
		while (arreglo[i] < pivote) i++;
		while (arreglo[j] > pivote) j--;
		
		if (i <= j) {
			long long temp = arreglo[i];
			arreglo[i] = arreglo[j];
			arreglo[j] = temp;
			i++;
			j--;
		}
	}
	
	if (izq < j) quicksort(arreglo, izq, j);
	if (i < der) quicksort(arreglo, i, der);
}


//una recursiva de la busqueda binaria - Ta gucci
bool existeNumero(long long a[], long long inicio, long long fin, long long k) {
	if (inicio > fin) return false;
	
	long long medio = inicio + (fin - inicio) / 2;
	
	if (a[medio] == k) return true;
	if (a[medio] < k) {
		return existeNumero(a, medio + 1, fin, k);
	} else {
		return existeNumero(a, inicio, medio - 1, k);
	}
}

void cargarArreglo(long long a[], long long n) {
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int main() {
	long long n, a[500000], k;
	
	cin >> n;
	cargarArreglo(a, n);
	quicksort(a, 0, n - 1);
	
	int m;
	cin >> m;
	
	bool pares_cambiados = false;
	string comando;
	
	for (int i = 0; i < m; i++) {
		cin >> comando;
		
		//La idea es no cambiarla a no ser que sease necesario para agilizar el código
		if (comando == "CAMBIA_PARES") {
			pares_cambiados = true;
		}
		else if (comando == "EXISTE") {
			cin >> k;
			
			if (!pares_cambiados) {//Sigo normal
				if (existeNumero(a, 0, n - 1, k)) {
					cout << 1 << "\n";//existe
				} else {
					cout << 0 << "\n";//No existe(?
				}
			} else {//Acá mantengo la mentira de que cambié los pares xD
				
				if (k % 2 == 0) {
					cout << 0 << "\n";//Si cambie los pares (supuestamente)sería impar por sumarle un 3(un impar xD)
				} else {
					bool impar = existeNumero(a, 0, n - 1, k); //Era impar antes...
					bool par = existeNumero(a, 0, n - 1, k - 3);//Era par antes..
					if (impar || par) {
						cout << 1 << "\n";
					} else {
						cout << 0 << "\n";
					}
				}
			}
		}
	}
	
	return 0;
}
