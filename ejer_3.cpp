#include <iostream> 
#include <math.h> 
#include <stdlib.h> 


using namespace std; 

void ejercicio_3();

int cantidad, num; 
int suma = 0;
int elevacion = 0;

int main(){
 ejercicio_3();

system("pause");
return 0;
}

void ejercicio_3(){
	cout<<"Digite la cantidad para sumar: ";
cin>>cantidad;

for (int i=1;i<=cantidad;i++){
	elevacion= pow(2,i);
	suma += elevacion;
}
cout<<"La suma total es de " <<suma<<endl;
}
