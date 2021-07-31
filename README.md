## Nombre del autor : :sunglasses:

# Emerson Joao Heredia Ruiz :alien:

![](https://avatars.githubusercontent.com/u/86270484?v=4)

### Nombres de los archivos que integran el proyecto.:star2:

  ####  Factura de productos.cpp :fire:
  #### Diagrama de flujo comerciales.jpg :fire:
  
# Descriccion. :scroll:

  Factura de productos. cpp:black_nib:

Este archivo cuenta con la funcion de elaborar una factura de 10 productos de compras ingresadas por el usuario. En el cual muestra el subtotal,  el incremento del iva y un descuento del 10% y la suma de todo esto que es el total a pagar.

Para ello primero se declararon las variables que son:  

int y=10, 
string articulos[10].
float precio[10].
float total,sb=0,iva,d.

Para poder ingresar el precio y el nombre de los productos se utilizo el ciclo "for" y el comando cout<< para mostrar el mensaje por pantalla pidiendole al usuario que ingrese el nombre y el precio del producto, cin>>articulo, precio para almacenar el nombre y el precio ingresado.
     
     for(int e=0;e<y;e++)
	{	
	    cout<<"INGRESE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(c+1)<<":\n";
        cout<<"Producto a comprar:\n "; 
		getline(cin,articulos[e]);
		cout<<"Precio:\n "; 
		cin>>precio[e];
		cin.ignore();
		cout<<endl;
   }
   
Se realizo otro ciclo for para calcular el iva, subtotal, descuento, total:
      
      for(int e=0;e<y;e++)
     {
    	sb=sb+precio[e];
    	iva=sb*0.12;	
	    d=sb*0.10;
    	total=sb+iva-d;
	}
  
Y  por ultimo se creo un ciclo for para generar la factura.
     
     for(int e=0;e<y;e++)
	{
  
		cout<<c+1<<".-     "<<articulos[c]<<"\t\t"<<precio[c]<<endl;
    
	}
  
	cout<<"\t SUBTOTAL \t"<<sb<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<d<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
  
Diagrama de flujo comerciales.jpg :black_nib:

En este archivo esta el diagrama de flujo del programa principal, donde esta estructurado paso a paso cada parte de la codificacion en c++, utilizando su respectivo simbolo  y codigo.

### Descarga. :gem:

Pasos para descargar los archivos.:paperclip:

1 . Click en "code".

![](https://raw.githubusercontent.com/Emerson-Joao-Heredia-Ruiz/IMAGENES/main/descarga.jpeg)

2 . Click en Download ZIP.

![](https://raw.githubusercontent.com/Emerson-Joao-Heredia-Ruiz/IMAGENES/main/descarga2.jpeg)

3 . Una vez descargado el archivo dar click en "extraer aquí".

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/3.jpeg)

4 . Estos son los archivos extraídos.

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/descarga.jpeg)

### Compilacion. :airplane:

Proceso para compilar.:wrench:

 1. Click  en el icono de copilar.
 
![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/copilar.jpeg)

2 . Click en el iconode ejecutar.

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/ejecutar0.jpeg)

3 . Mostrar programa por pantalla.

               3 .1 .  Ingresar arcticulo y sus precios.
               
   ![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/ejecutar5.jpeg)
   
4 . Mostrar por pantalla el resultado con el decuento del 10 % y el iva del 12 %.:warning:
            
   ![](https://raw.githubusercontent.com/patriciajama/imagenes/main/ejecutar6.jpeg)
            
			

