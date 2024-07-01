#include<iostream>
using namespace std;

int main(){
	
	float tempm[7],tempmi[7],tempme,tempbaja=9999;
	
	for(int i=1;i<=7;i++){
		cout<<"Ingrese la temperatura minima del dia "<<i<<": ";cin>>tempmi[i-1];
		for(int e=0;e<i;e++){
			if(tempmi[i-1]==tempm[e]){
			cout<<"Esta temperatura coincide con la temperatura MAXIMA del dia: "<<e+1<<endl;
			}
		}
		cout<<"Ingrese la temperatura MAXIMA del dia "<<i<<": ";cin>>tempm[i-1];
		for(int e=0;e<i-1;e++){
			if(tempm[i-1]==tempm[e]){
			cout<<"Esta temperatura coincide con la temperatura MAXIMA del dia: "<<e+1<<endl;
			}
		}
		if(tempmi[i-1]<tempbaja){
			tempbaja=tempmi[i-1];
		}
	}
	for(int i=1;i<=7;i++){
		tempme=(tempm[i-1]+tempmi[i-1])/2;
		cout<<"La temperatura media del dia "<<i<<" es: "<<tempme<<endl;
	}
	cout<<"El dia con la temperatura mas baja es: "<<tempbaja<<endl;
	
	return 0;
}