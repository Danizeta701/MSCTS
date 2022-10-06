#include <iostream>
#include<iostream>
#include<math.h>
#define PI 3.141592653
using namespace std;

class Calcular {
private:
	int cose, tang, seno;
public:
	void holi();
	void cos();
	void tanguita();
	void sin();
};


void Calcular::holi(){
	
	int f1, c1, f2, c2;

	system("cls");

	cout << "Calculando Matrices\n" << endl;
	cout << "Filas de A: ";
	cin >> f1;
	cout << "Columnas de B: ";
	cin >> c1;
	cout << "Filas de B: ";
	cin >> f2;
	cout << "columanas de B: ";
	cin >> c2;
	
	int A[100][100], B[100][100], C[100][100];
	
	if (c1 == f2) {
		cout << endl;
		cout << "Matriz 'A'" << endl;
		for (int i = 0; i < f1; i++) {
			for (int j = 0; j < c1; j++) {
				cout << "Elemento [" << i << "]" << "[" << j << "]: ";
				cin >> A[i][j];
			}
		}

		cout << endl;
		cout << "Matriz 'B'" << endl;
		for (int i = 0; i < f2; i++) {
			for (int j = 0; j < c2; j++) {
				cout << "Type the date [" << i << "]" << "[" << j << "]: ";
				cin >> B[i][j];
			}
		}

		system("cls");
		cout << "Matris 'A'\n" << endl;
		for (int i = 0; i < f1; i++) {
			for (int j = 0; j < c1; j++) {
				cout << A[i][j] << " ";
			}
			cout << endl;
		}

		cout << "\nMatriz 'B'\n" << endl;
		for (int i = 0; i < f2; i++) {
			for (int j = 0; j < c2; j++) {
				cout << B[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < f1; i++) {
			for (int j = 0; j < c2; j++) {
				C[i][j] = 0;
			}
		}

		for (int i = 0; i < f1; i++) {
			for (int j = 0; j < c2; j++) {
				for (int z = 0; z < c1; z++) {
					C[i][j] = C[i][j] + A[i][z] * B[z][j];
				}
			}
		}

		cout << "\nVALOR " << endl;
		for (int i = 0; i < f1; i++) {
			for (int j = 0; j < c2; j++) {
				cout << C[i][j] << " ";
			}
			cout << endl;
		}

	}
	else {
		cout << "\nEsta Matriz no se puede resolver :(" << endl;
	}

}
void Calcular::cos() {
	float x, n, resultado;

	system("cls");
	cout << "  COSENO" << endl; 
	cout << "Ingresa el angulo: ";
	cin >> x;
	x = x * PI / (180);
	cout << "Num de terminos: ";
	cin >> n;

	resultado = 0;
	for (int i = 0; i < n; i++) {
		int fact = 1;
		for (int j = 1; j <= (2 * i); j++) {
			fact *= j;
		}

		resultado += pow(-1, i) * pow(x, 2 * i ) / fact;
	}

	cout << "El coseno de " << x << " es: " << resultado << endl;


}


void Calcular::sin() {
	float x, radial, n, sin;
	
	system("cls");
	cout << "  SENO" << endl;
	cout << "Ingresa el angulo: ";
	cin >> x;
	x = x * PI / (180);
	cout << "Num de terminos: ";
	cin >> n;

	sin = 0;
	for (int i = 0; i < n; i++) {
		int fact = 1;
		for (int j = 1; j <= (2 * i + 1); j++) {
			fact *= j;
		}

		sin += pow(-1, i) * pow( x, 2 * i + 1) / fact;
	}

	cout << "El seno de " << n <<" es: "<< sin << endl;
}

void Calcular::tanguita() {
	float x, n, resultado;

	system("cls");
	cout << "  TANGENTE" << endl;
	cout << "Ingresa el angulo: ";
	cin >> x;
	x = x * PI / (180);
	
	resultado = tan(x);
	

	cout << "El tangente de " << x << " es: " << resultado << endl;



}



int main() {

	Calcular hip;
	int exit = 0, opc = 0;

	while (exit != 2) {

		cout << "\t\t\t\t-Bienvenido-" << endl;
		cout << " 1. Multipilicacion de matriz" << endl;
		cout << " 2. Cos " << endl;
		cout << " 3. Sen" << endl;
		cout << " 4. Tan" << endl;
		cin >> opc;


		system("cls");
		switch (opc) {
		case 1:
			hip.holi();
			break;

		case 2:
			hip.cos();
			break;
		case 3:
			hip.sin();
			break;
		case 4:
			hip.tanguita();
			break;
				
		}
		
		cout << "1) Salir al menu: " << endl;
		cout << "2) Salir del programa:  ";
		cin >> exit;
		system("cls");
	}

	return 0;

}