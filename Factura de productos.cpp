#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
    int y=10;
	string articulos[10];
	float precio[10];
	float total,sb=0,iva,d;
//INGRESO DE NOMBRES Y PRECIOS
cout<<"**************COMERCIALES VANESA**************\n\n";	
	for(int e=0;e<y;e++)
	{	
	    cout<<"DIGITE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(e+1)<<":\n\n";
        cout<<"Digite el producto que desea comprar: "; getline(cin,articulos[e]);
		cout<<"Digite su precio: "; cin>>precio[e];
		cin.ignore();
		cout<<endl;
    }
    //IMPRESION DE LA FACTURA
    cout<<"***********SU FACTURA***********\n\n";
    for(int e=0;e<y;e++)
    {
    	sb=sb+precio[e];
    	iva=sb*0.12;	
	    d=sb*0.10;
    	total=sb+iva-d;
	}
	//MOSTRADO EN PANTALLA DE LOS VALOS A PAGAR
	for(int e=0;e<y;e++)
	{
		cout<<e+1<<".-     "<<articulos[e]<<"\t\t"<<precio[e]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<sb<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<d<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
	
cout<<"****************GRACIAS ESTIMADO USUARIO****************";
getch ();
return 0;
}