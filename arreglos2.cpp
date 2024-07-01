#include<iostream>

using namespace std;

int main(){
	float n,a,arreglo[100],s=0,c=0;
	cout<<"Ingresa la cantidad de elementos de un arreglo: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Ingresa el elemento #"<<i<<" : ";cin>>arreglo[i];
		s+=arreglo[i];
		if(arreglo[i]==0){
			c++;
		}
	}
	cout<<"La suma de los elementos del arreglo es: "<<s<<endl;
	cout<<"El porcentaje de ceros en el arreglo es: "<<(c/n)*100<<"%"<<endl;
	return 0;
}