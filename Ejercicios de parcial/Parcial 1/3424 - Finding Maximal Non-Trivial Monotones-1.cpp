#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n,cantidadTotal=0,cantidad=0;
	
	char x;
	
	cin>>n;
	
	for (int i=1;i<=n;i++){
		cin>>x;
		while(x=='a' and i<=n){
			cantidad++;
			i++;
			if (i<=n){
				cin>>x;
			}
		}
		if (cantidad>=2){
			cantidadTotal+=cantidad;
		}
		if(x=='b'){
			cantidad=0;
		}
	}
	cout<<cantidadTotal<<endl;
	return 0;
}
