#include <iostream>
using namespace std;

int main() {
	int primerNum, segundoNum, tercerNum;
	cin >> primerNum >> segundoNum >> tercerNum;
	
	bool condicion1 = false;
	bool condicion2 = false;
	bool condicion3 = false;
	bool condicion4 = false;
	bool condicion5 = false;
	
	if (primerNum < segundoNum){
		condicion1 = true;
	}
	if (tercerNum > primerNum){
		condicion2 = true;
	}
	if (primerNum == segundoNum){
		condicion3 = true;
	}
	if (primerNum != tercerNum){
		condicion4 = true;
	}
	if (tercerNum <= segundoNum){
		condicion5 = true;
	}
	
	if(condicion1){
		cout<<"True ";
	}else {
		cout << "False ";
	}
	if(condicion2){
		cout<<"True ";
	}else {
		cout << "False ";
	}
	if(condicion3){
		cout<<"True ";
	}else {
		cout << "False ";
	}
	if(condicion4){
		cout<<"True ";
	}else {
		cout << "False ";
	}
	if(condicion5){
		cout<<"True"<<endl;
	}else {
		cout << "False" << endl;
	}
	return 0;
}
