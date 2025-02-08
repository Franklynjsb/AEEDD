#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int casos, vector[2001]={0}, numero;
	
	cin >> casos;
	
	while (casos--) {
		cin >> numero;
		
		vector [numero] ++;
	}
	
	
	for (int i=1; i<2001; i++){
		if(vector[i]!=0){
			cout << i << " aparece " << vector[i] << " vez(es)" << endl;
		}
	}
	
	return 0;
}

