#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void valores_alatorios(double vec[], double tamanio) {

    for (int i = 0; i < tamanio; i++) {
        vec[i] = rand();
    }
}
void imprimir_vector(double vector[],double tamanio)
{
		cout<<"elementos del vector :"<<endl;
	for (int i=0;i<tamanio;i++){
	cout<<vector[i]<<endl;
	}
}
double ma_vector(double vector[],double tamanio){
		double ma =vector[0];
					for(int i=1; i<tamanio; i++){
						if(ma<vector[i]){
							ma = vector[i];
								}
					}
return ma;
}
double mi_vector(double vector[],double tamanio){
	double me = vector[0];
	for(int i=1; i<tamanio; i++){
		if(me>vector[i]){
			me = vector[i];
		}
	}
return me;
}
void maximo_min(double vector[], double tamanio, double &ma, double &mi) {
    ma = ma_vector(vector, tamanio);
    mi = mi_vector(vector, tamanio);
}
void orden_secuencial(double vector[],double tamanio){
		for(int i=1; i<tamanio; i++){
			
				for(int j=i+1;j<tamanio;j++){
					if(vector[i]>vector[i+1]){
						int aux;
							aux=vector[i];
								vector[i]=vector[i+1];
										vector[i+1]=aux;
										}	
									}				
								}
}
//busca un numero entero
bool verdadero_falso(double vector[], double tamanio) {
    int vec = true;
    for (int x = 0; x <tamanio; x++) {
        		int procesador = vector[x];
       		 if ((vector[x] - procesador) > 0) {
            vec = false;

        	} else {
        
		    		vec = true;
        break;
        }
    }
    return vec;
}
//Pocision del vector del numero
double pocision(double vector[], double tamanio) {
    int vect = 0;
    for (int x = 0; x <tamanio; x++) {
        int procesador = vector[x];
        if ((vector[x] - procesador) > 0) {
            vect = -1;
        } else {
            vect = x + 1;
            break;
        }
    }
    return vect;
}

int main (){
	const int max=7;
	double vec[max];
	valores_alatorios(vec,max);
	cout<<"////////////////"<<endl;
	cout<<"el mayor de los numeros es "<<ma_vector(vec,max)<<endl;
	cout<<"el menor de los numeros es "<<mi_vector(vec,max)<<endl;
	cout<<"////////////////"<<endl;
	
	double a, b;
    cout << endl << "Max y min por referencia: "<<endl;
    maximo_min(vec, max, a, b);
	cout<<"Mayor encontrado: "<<a<<endl;
	cout<<"Menor encontrado: "<<b<<endl;
	cout<<"////////////////"<<endl;
	cout<<"Vectores Desordenados: "<<endl;
	imprimir_vector(vec,max);
	cout<<"Orden de Vectores: "<<endl;
	orden_secuencial(vec,max);
	imprimir_vector(vec,max);
	cout<<"////////////////"<<endl;
		cout << endl << "Encontrar si el vector es verdadero o es falso" << endl;
    	int valoresreales = verdadero_falso(vec,max);
    	if (valoresreales == 1) {
        cout << endl << "El vector es verdadero" << endl;
    		} else {
        cout << endl << "El vector es falso" << endl;
    			}
    		int valores = pocision(vec,max);
   				 if (valores == -1) {
    				    cout << endl << "No se encontro ningun numero entero" << endl;
   					 } else {
        				cout << endl << "La posicion del numero entero encontrado es " << valores << endl;
   						 };	
return 0;
}
