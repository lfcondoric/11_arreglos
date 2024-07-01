#include<iostream>
using namespace std;

void multiplos(int x,int y,int arreglo[]);

int main(){

	int a,n,c;
	cout<<"Ingrese el tamano del arreglo: ";cin>>n;
	int arreglo[n];
	cout<<"Ingresa un numero: ";cin>>a;
	multiplos(a,n, arreglo);
	cout<<"El arreglo con los multiplos de "<<a<<endl;
	for(int i=0;i<n;i++){
		cout<<arreglo[i]<<", ";
	}

	return 0;
}

void multiplos(int x,int y,int arreglo[]){
	for(int i=0;i<y;i++){
		arreglo[i]=x*(i+1);
	}
}