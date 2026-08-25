#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int N,X,Y;
	int naranjas=0;
	int bananas=0;
	string respuesta="";
	
	cin>>N;
	//PRIMERA CONDICION
	if(N==0){
		cout << "No comiste nada\n";
	}else{
		for(int i=0;i<N;i++) { 
			
			//SEGUNDA CONDICION ETC
			cout<<"Itero " << i << " veces \n";
			cin>>X>>Y;
			naranjas=naranjas+X;
			bananas=bananas+Y;
			
			respuesta+="Día "+to_string(i+1)+" comiste "+to_string(X)+" naranjas y "+to_string(Y)+" bananas, total "+to_string(X+Y)+" frutas.\n";
			
		}
		cout << "Has comido " << naranjas << " naranjas" << endl;
		cout << "Has comido " << bananas << " bananas" << endl;
		cout << respuesta;
	}
	
	
	return 0;
}

