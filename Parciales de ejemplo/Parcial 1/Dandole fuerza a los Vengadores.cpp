#include <iostream>
using namespace std;

void Ordenar(long long v[], int tl);
void cargarVector(long long v[], int tl);
void Intercambio(long long& a, long long& b);
void InfinityWar(int vA[], int vT[],int tl);

int main() {
	int n;
	cin >> n;
	
	long long vA[500000];
	long long vT[500000];
	
	cargarVector(A,n);
	cargarVector(T,n);
	
	Ordenar(vA, n);
	Ordenar(vT, n);
	
	InfinityWar(vA,vT,n);
	
	
	return 0;
}
void InfinityWar(int vA[], int vT[],int tl){
	
	long long pv = 0;
	long long pe = 0;
	int a = 0, e = 0;
	
	for(int i = 0; i < n; i++){
		
		while(a < n && vT[a] < vA[i]) {
			a++;
		}
		while(e < n && vT[e] <= vA[i]) {
			e++;
		}
		
		pv += a;	// Vengadores estrictamente más fuertes que los enemigos
		pe += (e - a);
	}
	
	long long total = (long long)n * n;
	long long pt = total - pv - pe;
	
	if(pv > pt){
		cout << "Avengers" << endl;
		cout << pv - pt << endl;
	} else {
		cout << "Thanos" << endl;
		cout << (pt - pv) + 1 << endl;
	}
}


void Intercambio(long long& a, long long& b) {
	long long aux = a;
	a = b;
	b = aux;
}
void cargarVector(long long v[], int tl){
	for(int i=0;i<tl;i++) { 
		cin>>v[i];
	}
}
void Ordenar(long long z[], int tl) {//Para ordenarlo preferí usar un Quicksort pero tratandolo como una pila. Te lo dejo más o menos descripto para que entiendas como funciona
	if (tl <= 1) return;//Para evitar errores
	
	int pila[1000000]; 
	int tope = -1;
	
	pila[++tope] = 0;
	pila[++tope] = tl - 1;
	
	while (tope >= 0) {
		int fin = pila[tope--];
		int inicio = pila[tope--];
		
		int i = inicio;
		int j = fin;
		long long pivote = z[(inicio + fin) / 2];
		
		while (i <= j) {
			while (z[i] < pivote) i++;
			while (z[j] > pivote) j--;
			
			if (i <= j) {
				Intercambio(z[i], z[j]);
				i++;
				j--;
			}
		}
		
		if (inicio < j) {
			pila[++tope] = inicio;
			pila[++tope] = j;
		}
		
		if (i < fin) {
			pila[++tope] = i;
			pila[++tope] = fin;
		}
	}
}
