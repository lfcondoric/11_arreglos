#include<iostream>

using namespace std;

int main(){
	
	int n,a,x=0,y=0;
	int IMPARES[100],PARES[100];
	
	cout<<"Ingrese la cantidad de elementos: ";cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese el primer elemento: ";cin>>a;
		if(a%2==0){
			PARES[x]=a;	
			x++;
		}else{
			IMPARES[y]=a;	
			y++;
		}
	}
	cout<<"El arreglo con elementos impares es: \n";
	for(int i=0;i<y;i++){
		cout<<IMPARES[i]<<", ";
	}
	cout<<endl;
	cout<<"El arreglo con elementos pares es: \n";
	for(int i=0;i<x;i++){
		cout<<PARES[i]<<", ";
	}

	return 0;
}