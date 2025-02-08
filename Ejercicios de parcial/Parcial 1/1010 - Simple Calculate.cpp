#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	double valor, product1, product2;
	int code1,items1;
	int code2,items2;
	
	cin >> code1 >> items1 >> product1;
	cin >> code2 >> items2 >> product2;
	
	valor = (items1*product1)+(items2*product2);
	
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << valor << endl;
	
	return 0;
}

