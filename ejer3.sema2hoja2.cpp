//ejercicio 5 de la hoja 2 semana 2
/*
5. El gerente de planta de l�pices Faber Castell, desea contar con un programa en C++ que le
permita calcular el menor n�mero de cajas que se necesitar�an para colocar cierta cantidad
de l�pices utilizando cajas de un ciento, medio ciento, una decena y bolsas de un l�piz.
Por ejemplo:
Ingrese cantidad de l�pices: 347
Cajas de un ciento: 3
Cajas de medio ciento: 0
Cajas de una decena: 4
L�pices sin embolsar: 7
*/



#include<iostream>
#include<conio.h>


using namespace std;

int main()

{
	int nlapices;
	int cajaciento, cajamediociento, cajadecena,bolsadeuno;
	cout << "ingrese numero de lapices:"; cin >> nlapices;
	
	cajaciento= nlapices / 100;
	cajamediociento = ( nlapices % 100) / 50;
	cajadecena = ((nlapices % 100) % 50) / 10;
	bolsadeuno = ((nlapices % 100) % 50) % 10;

		cout << "cajas de 100:" <<cajaciento  << endl;
		cout << "pcajas de 50:" << cajamediociento << endl;
		cout << "pcajas de 10:" << cajadecena<<endl;
		cout << "bolsas de unidad:" << bolsadeuno;
		
		
		_getch();
		
	}
		
		
		
		
		
		
		
		
		
		

