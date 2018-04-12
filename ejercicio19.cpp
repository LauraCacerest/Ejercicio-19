#include <iostream>
#include <ctime>
#include <cstdlib>


//Metodo Runge Kutta 4(Ecuacion Diferencial de Primer Orden)
using std::cout;
using std::endl;

float funcion (float x, float y);

int main(){
	float y=1.0;
	float x=0.0;
	float h=0.1;
	int N=3/h;
	float k1,k2,k3,k4;
	int i;
	

	for (int i=0; i<N;i++){
	k1=funcion(x,y);
	k2=funcion(x+h/2,y+h/2*k1);
	k3=funcion(x+h/2, y+h/2*k2);
	k4=funcion(x+h,y+h*k3);
	y=y+(h/6)*(k1+2*k2+2*k3+k4);
	x=x+h;
	
	cout <<x << "  " <<y <<endl;
      }
 return 0;
}


float funcion (float x,float y){
	return -y;
}



