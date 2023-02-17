#include <iostream>
#include <stdlib.h>

using namespace std;
int cantidad = 0;
int a = 0;
int b = 1;
int c = 1;

int main(){
cout<<"DIGITE LOS NUMEROS: ";
cin>>cantidad;

cout<<"1 ";
for(int i = 1; i < cantidad; i++){
	c = a + b;
	cout<<c<<" ";
	a = b;
	b = c;
}
cout<< "\n" << endl;
system("pause");
return 0;
}


