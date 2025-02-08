#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	int plano,subida,bajada, largoCamino, total=0;
	string camino;
	int tiempo[3]{};
	
	cin >> plano >> subida >> bajada;
	cin.ignore();
	getline(cin, camino);
	
	largoCamino =camino.length();
	
	for(int i=0;i<largoCamino;i++) { 
		
		if(camino[i]=='-') {
			tiempo[0]++;
		}else if (camino[i] == '/') {
			tiempo[1]++;
		}else {
			tiempo[2]++;
		}
	}
	tiempo[0]*=plano;
	tiempo[1]*=subida;
	tiempo[2]*=bajada;
	
	for(int i=0;i<3;i++) { 
		total+=tiempo[i];
	}
	
	cout << total << endl;
	
	return 0;
}

