#include<iostream>
#include<string.h>

using namespace std;

int main(){
	string nombresFP[100];
	string nombresPG[100];
	string alumnoscomunes[100];
	int n,n1,s=0;
	cout<<"Ingrese la cantidad de alumnos de PG: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"ingrese el nombre del estudiante "<<i+1<<": ";cin>>nombresPG[i];
	}
	cout<<"Ingrese la cantidad de alumnos de FP: ";cin>>n1;
	for(int i=0;i<n1;i++){
		cout<<"ingrese el nombre del estudiante "<<i+1<<": ";cin>>nombresFP[i];
		for(int e=0;e<n;e++)
		if(nombresFP[i]==nombresPG[e]){
			alumnoscomunes[e]=nombresFP[i];
			s++;
		}
	}
	cout<<"Los alumnos comunes en los dos cursos son: "<<endl;
	if(s!=0){
	for(int i=0;i<s;i++){
		cout<<alumnoscomunes[i]<<endl;
	}
	}else{
		cout<<"No hay alumnos que lleven los dos cursos"<<endl;
	}
	return 0;
}