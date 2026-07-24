#include <iostream>

using namespace std;

bool XmenorY (int x, int y);
bool MismosDigitos (int x, int y);
bool ValorDigitos(int x,int y);
int gradoNum(int x,int y);

int main() {
	int n;
	cin >> n;
	
	while(n--){
		int x, y;
		cin >> x >> y;
		
		
		if(XmenorY(x,y)){
			
			if(MismosDigitos(x,y)){
				
				if(ValorDigitos(x,y)){
					
					//Si finalmente resulta ampliable
					cout << "Ampliable\n";
					
					int grado = gradoNum(x,y);
					
					cout << grado << "\n";
					
					
				}else {
					cout << "No Ampliable\n";
				}
				
			}else {
				cout << "No Ampliable\n";
			}
		}else {
			cout << "No Ampliable\n";
		}
	}
	
	return 0;
}

//X debe ser menor que Y
bool XmenorY (int x, int y){
	bool resultado = true;
	
	if (x >= y) {
		resultado = false;
	}
	
	return resultado;
}
	
	bool MismosDigitos (int x, int y){
		bool resultado = true;
		int digitosX=0, digitosY=0;
		
		while(x>0){
			digitosX++;
			x/=10;
		}
		while(y>0){
			digitosY++;
			y/=10;
		}
		
		if(digitosX!=digitosY){ resultado=false; }
		
		return resultado;
	}
		
		bool ValorDigitos(int x,int y){
			bool resultado = true;
			int digitoX, digitoY;
			
			while(x>0 && y>0){
				digitoX = x%10;
				digitoY = y%10;
				
				if(digitoX > digitoY){
					resultado = false;
				}
				
				x/=10;
				y/=10;
			}
			
			return resultado;
			
		}
			
			
			int gradoNum(int x,int y) {
				int resultado = 0, digitoX, digitoY;
				
				while(x>0 && y>0){
					digitoX = x%10;
					digitoY = y%10;
					
					resultado += (digitoY - digitoX);
					
					x/=10;
					y/=10;
				}
				
				return resultado;
			}
