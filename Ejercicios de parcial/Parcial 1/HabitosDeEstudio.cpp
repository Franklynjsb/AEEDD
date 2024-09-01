#include <iostream>
#include <iomanip>

using namespace std;

void ObtenerDatosAlumnos(int&, int& , char&, char&, int&, int& ,int&, int&, int&, int&);

int Distinguidos(int);

int main(int argc, char *argv[]) {
	
	int edad=0, anioCarrera=0, contadorM=0, contadorV=0, contadorN=0, contadorAlumnos=0, alumnoMayor=0, contadorDias=0, cantidadAlumnos;
	float promedio;
	char carrera, horarioCarrera;
	
	ObtenerDatosAlumnos(edad, anioCarrera, carrera, horarioCarrera, contadorAlumnos, contadorM, contadorV, contadorN, contadorDias, alumnoMayor);
	
	promedio = contadorDias/contadorAlumnos;
	
	cout << fixed << setprecision(2);
	cout << "Promedio = " << promedio << " días por semana" << endl;
	
	if(contadorM >= contadorV && contadorM >= contadorN){
		cout << "Turno más elegido = Matutino" << endl;
	} else if (contadorV >= contadorM && contadorV >= contadorN){
		cout << "Turno más elegido = Vespertino" << endl;
	} else {
		cout << "Turno más elegido = Nocturno" << endl;
	}
	
	cout << "Edad alumno mayor " << alumnoMayor << endl;
	
	cout << "" << endl;
	
	cout << "Ingrese la cantidad de alumnos a disntinguir:" << endl;
	
	cin >> cantidadAlumnos;
	
	int distinguidos = Distinguidos(cantidadAlumnos);
	
	cout << "Alumnos disntinguidos = " << distinguidos << endl;
	
	return 0;
}


/*SI piden todo junto*/
int Distinguidos(int cantidadAlumnos){
	
	int cursadas, aprobadas;
	float promedio=0, promedioAprobado=0;
	
	if(cantidadAlumnos == 0){
		
		return 0;
		
	}else {
		
		cin >> cursadas >> aprobadas >> promedio ;
		
		promedioAprobado = (aprobadas*100)/cursadas;
		
		if(cursadas >= 20 && promedioAprobado >= 80 && promedio>=8.5) {
			return 1 + Distinguidos(--cantidadAlumnos);
		}else {
			return 0 + Distinguidos(--cantidadAlumnos);
		}
		
	}
	
}
	
void ObtenerDatosAlumnos(int& edad, int& anioCarrera, char& carrera, char& horarioCarrera, int& contadorAlumnos, int& contadorM, int& contadorV, int& contadorN, int& contadorDias,int& alumnoMayor){
	
	while(cin >> edad){
		
		cin >> anioCarrera;
		cin >> carrera;
		
		if(anioCarrera==1){
			contadorAlumnos++;
		}
		
		while(cin >> horarioCarrera, horarioCarrera!='F') {
			if(anioCarrera==1) {
				contadorDias++;
			}else if (anioCarrera>=3 && carrera== 'S'){
				if (horarioCarrera == 'M') {
					contadorM++;
				}else if (horarioCarrera == 'V'){
					contadorV++;
				}else {
					contadorN++;
				}
			}
		}
		
		if(edad > alumnoMayor){
			alumnoMayor=edad;
		}
	}
}
