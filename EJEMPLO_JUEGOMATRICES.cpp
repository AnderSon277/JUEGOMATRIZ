#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void matriz_0(int m[10][10]); 
//Crear la matriz llena de '0's

void llenar(int m[10][10]); 
//Llenar 10 posiciones con '1's aleatoriamente

bool adivinar(int m[10][10],int i, int j); 
// Comparar la respuesta del usuario en la matriz llena

int main(){

	int matriz[10][10];
    int i,j;
    int intentos=0;

	cout<<"\t               BIENVENIDO A:   "<<endl;
	cout<<"\tADIVINE LA POSICION PARA SALVAR EL SEMESTRE :v "<<endl;
	cout<<"\t 	QUE EMPIECE EL JUEGO :33"<<endl<<endl;

	matriz_0(matriz); 

	llenar(matriz); 


	/* Creamos un bucle con el numero de intentos
	   en cada interaccion se pide una nueva ubicacion
	   y se llama a la funcion adivinar() 	 
	*/
	while(intentos<3)
	{
		cout<<"Ingrese la posicion de la fila"<<endl;
		cin>>i;
		cout<<"Ingrese la posicion de la columna"<<endl;
		cin>>j;
		
		adivinar(matriz,i,j); 
		
		   intentos++;
    }
    cout<<"\tGAME OVER";

}

//Crear la matriz llena de '0's
void matriz_0(int m[10][10]){

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			m[i][j]=0;
		}
	}
	/*
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<m[i][j]<<"   ";
		}
		cout<<endl;
	} */
}


//Llenar 10 posiciones de la matriz con '1's
void llenar(int m[10][10]){
	
srand(time(NULL)); 
/*
 Inicializa el generador de números aleatorios utilizando el argumento time(NULL)
 recuperarando la hora del sistema (semilla lo suficientemente aleatoria)
*/

	for(int k=0;k<10;k++)
	{
			m[rand()%(10+0)][rand()%(10+0)]=1; 
			// Obtenemos posicion aleatoria mendiante rand()% y la llenamos con un '1' 
	}
	cout<<endl<<endl;
	
	/*
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
		{
			cout<<m[i][j]<<"   ";
		}
		cout<<endl;
	}
	*/
	
}

bool adivinar(int m[10][10],int i, int j){

	   bool estado=false;
	   
		if(m[i-1][j-1]==1) //Comparar la respuesta del usuario en la matriz
		{
			estado=true;
			cout<<"\tADIVINASTE!!"<<endl<<endl;
			return(estado);
		}else{
			cout<<"\tUbicacion incorrecta, vuelva a intentar"<<endl<<endl;
			return(estado);
		}
}
