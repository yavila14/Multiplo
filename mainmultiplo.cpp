#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int numero,i,res;
cout <<"Digite un numero entero ";
cin>> numero;
for(i=3;i<=5;i=i+1)
{res=numero%i;
if(res==0){
cout <<"Es el numero es multiplo de" <<i <<"\n";
}	
}
	return 0;
}
