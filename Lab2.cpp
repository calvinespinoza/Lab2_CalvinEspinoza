#include <iostream>
#include <math.h>

using namespace std;

void Ejercicio1()
{
	int num1, num2;
	int suma1 = 0, suma2 = 0;
	cout << "\nNUMEROS AMIGOS\n\nVerifiquemos si dos numeros son amigos\n\nIngrese un numero: ";
	cin >> num1;
	cout << "Ingrese otro numero: ";
	cin >> num2;
	
	cout << "\n\n" << num1 << ": ";
	for(int i = 1; i < num1; i++)
	{
		if(num1%i == 0)
		{
			cout << i << " ";
			suma1 += i;
			
		}
	}
	
	cout << endl << num2 << ": ";
	for(int j = 1; j < num2; j++)
        {
                if(num2%j == 0)
		{                        cout << j << " ";
                        suma2 += j;
		}
        }

	cout << "\n\nLa suma de los divisores de " << num1 << " es: " << suma1;
	cout << "\nLa suma de los divisores de " << num2 << " es: " << suma2;

	
	if (suma1 == num2 && suma2 == num1)
		cout << "\n\nLos numeros son amigos\n";
	else
		cout << "\n\nLos numeros no son amigos\n";			
}

double E2_radianes(double ladoA, double ladoB, double ladoC)
{
	double angulo;

	angulo = acos((pow(ladoA,2) - pow(ladoB,2) - pow(ladoC,2)) / -(2*ladoB*ladoC));

	return angulo;
	
}

double E2_grados(double ladoA, double ladoB, double ladoC)
{
	double angulo;
	double pi = M_PI;

	angulo = acos((pow(ladoA,2) - pow(ladoB,2) - pow(ladoC,2)) / -(2*ladoB*ladoC));
	
	return angulo*180/pi;


}


void Ejercicio3(){
	 		int tam = 0;
                        do
                        {
                                cout << "Ingrese el tamaño del arreglo mayor a 5: ";
                                cin >> tam;

                        } while (tam < 5);

                        int array[tam];
                        int num;
                        for(int i = 0; i <= tam - 1; i++){

                                cout << "Ingrese posicion " << i + 1 << ": ";
                                cin >> num;

                                array[i] = num;
                        }
                        int max = 0, min = 0;
                        int temp;
			for(int k = 0; k <= tam - 1; k++){
                                for (int j = k + 1; j < tam - 1; j++){
                                        if (array[k] > array[j]){
                                                temp = array[k];
                                                array[k] = array[j];
                                                array[j] = temp;
                                        }
                                }
                        }
                        for(int l = 0;l < tam -1; l++){
                                cout << array[l];
                        }
                        min = array[0];
                        max = array[tam - 1];
                        cout << "El valor minimo es: " << min << endl;
                        cout << "El valor maximo es: " << max << endl;
                        cout << "La diferencia entre estos valores es de: " << max - min << endl;

}

int menu()
{
        cout << "MENU\n1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\nIngrese el numero de ejericio: ";
        int menu;
        cin >> menu;

        switch(menu)
        {
                case 1: {
                        Ejercicio1();
			break;
			}
		case 2:{
			double ladoA, ladoB, ladoC;
			double angA1 = 0, angB1 = 0, angC1 = 0;
			double angA2 = 0, angB2 = 0, angC2 = 0;
	
			cout << "Ingrese el valor del lado a: ";
        		cin >> ladoA;
        		cout << "Ingrese el valor del lado b: ";
        		cin >> ladoB;
        		cout << "Ingrese el valor del lado c: ";
        		cin >> ladoC;
			
			angA1 = E2_grados(ladoA, ladoB, ladoC);
			angB1 = E2_grados(ladoB, ladoA, ladoC);
			angC1 = E2_grados(ladoC, ladoA, ladoB);
		
			cout << angA1 << angB1 << angC1;
	
			angA2 = E2_radianes(ladoA, ladoB, ladoC);
                        angB2 = E2_radianes(ladoB, ladoA, ladoC);
                        angC2 = E2_radianes(ladoC, ladoA, ladoB);

			cout << angA2 << angB2 << angC2;			
			int suma = angA1 + angB1 + angC1, total = 180;
			cout << suma;
			if (suma != total)
			{
				cout << endl << "ERROR: Los tres lados no hacen un triangulo" << endl;
			}
			else
			{
				cout << endl <<"Angulo en radianes\nAngulo A: " << angA2 << "\nAngulo B: "
					<< angB2 << "\nAngulo C: " << angC2;
				cout << "\n\nAngulos en grados\nAngulo A: " << angA1 << "\nAngulo B: "
                                        << angB1 << "\nAngulo C: " << angC1 << endl;

			}
			break;
			}
		case 3:
			{
				Ejercicio3();
				break;
			}
        }
        return 0;
}



int main()
{
	return menu();
}
