#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	int guerreros,cantimag,m1,m2,m3,m4,m5;
	int vive = 0,sumaeliminados = 0;
	string vivientes = "", cantdig;
	
	cin >> guerreros >> cantimag;
	
	if (cantimag == 1){
		cin >> m1;
		for (int i = 1; i <= guerreros;i++){
			if (i%m1 != 0){
				vivientes += to_string(i) + " ";
				vive++;
			}else {
				sumaeliminados+=i;
			}
		}
	}
	else if (cantimag == 2){
		cin >> m1 >> m2;
		for (int i = 1; i <= guerreros;i++){
			if (i%m1 != 0 and i%m2 !=0){
				vivientes += to_string(i) + " ";
				vive++;
			}else {
				sumaeliminados+=i;
			}
		}
	}
	else if (cantimag == 3){
		cin >> m1 >> m2 >> m3;
		for (int i = 1; i <= guerreros;i++){
			if (i%m1 != 0 and i%m2 != 0 and i%m3 != 0){
				vivientes += to_string(i) + " ";
				vive++;
			}else {
				sumaeliminados+=i;
			}
		}
	}
	else if (cantimag == 4){
		cin >> m1 >> m2 >> m3 >> m4;
		for (int i = 1; i <= guerreros;i++){
			if (i%m1 != 0 and i%m2 != 0 and i%m3 != 0 and i%m4 != 0){
				vivientes += to_string(i) + " ";
				vive++;
			}else {
				sumaeliminados+=i;
			}
		}
	}
	else if (cantimag == 5){
		cin >> m1 >> m2 >> m3 >> m4 >> m5;
		for (int i = 1; i <= guerreros;i++){
			if (i%m1 != 0 and i%m2 != 0 and i%m3 != 0 and i%m4 != 0 and i%m5!=0){
				vivientes += to_string(i) + " ";
				vive++;
			}else {
				sumaeliminados+=i;
			}
		}
	}
	
	int aux = sumaeliminados;
	int aux1 = vive;
	
	cout << vivientes << endl;
	cout << vive << endl;
	cout << sumaeliminados << endl;
	cantdig = to_string(sumaeliminados);
	cout << cantdig.length() << endl;
	if (aux % 2 == 0){
		int mayor = 0;
		int dig = 0;
		while (aux > 0){
			dig = aux%10;
			aux/=10;
			if (dig > mayor){
				mayor = dig;
			}
		}
		cout << mayor << endl;
	}else if (aux % 2 != 0){
		int mayor = 0;
		int dig = 0;
		while (aux1 > 0){
			dig = aux1%10;
			aux1/=10;
			if (dig > mayor){
				mayor = dig;
			}
		}
		cout << mayor << endl;
	}
	
	
	return 0;
}

