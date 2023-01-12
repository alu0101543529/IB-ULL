/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Raúl González Acosta (alu0101543529@ull.edu.es)
 * @date 19/12/22
 * @brief Programa cliente de la clase Banco.
*/

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class bank {
	int numero_cuenta;
	char nombre[100], tipo_de_cuenta[100];
	float balance_cuenta;  
	public:
		bank(int numero_de_cuenta, char *name, char *tipo_cuenta, float balance)  //Parameterized Constructor
		{
			numero_cuenta=numero_de_cuenta;
			strcpy(nombre, name);
			strcpy(tipo_de_cuenta, tipo_cuenta);
			balance_cuenta=balance;
		}
		void deposito();
		void retirar();
		void mostrar();
};
void bank::deposito()   //depositar una cantidad
{
	int deposito1;
	cout<<"\n Deposite una cantidad = ";
	cin>>deposito1;
	balance_cuenta+=deposito1;
}
void bank::retirar()  //retirar una cantidad
{
	int retirada1;
	cout<<"\n Inserte la cantidad a retirar= ";
	cin>>retirada1;
	if(retirada1>balance_cuenta) {
		cout<<"\n No se puede retirar la cantidad";
	}
	balance_cuenta-=retirada1;
}
void bank::mostrar()  //muestra los detalles de la cuenta
{
	cout<<"\n ----------------------";
	cout<<"\n Numero de cuenta: "<<numero_cuenta;
	cout<<"\n Nombre: "<<nombre;
	cout<<"\n Tipo de cuenta: "<<tipo_de_cuenta;
	cout<<"\n Balance: "<<balance_cuenta;  
}
int main()
{
	int numero_de_cuenta;
	char name[100], tipo_de_cuenta[100];
	float balance;
	cout<<"\n Rellene los campos: \n";
	cout<<"-----------------------";
	cout<<"\n Numero de cuenta: ";
	cin>>numero_de_cuenta;
	cout<<"\n Nombre: ";
	cin>>name;
	cout<<"\n Tipo de cuenta: ";
	cin>>tipo_de_cuenta;
	cout<<"\n Balance: ";
	cin>>balance;
  
	bank cuenta1(numero_de_cuenta, name, tipo_de_cuenta, balance);
	cuenta1.deposito();
	cuenta1.retirar();
	cuenta1.mostrar();
	return 0;
}
