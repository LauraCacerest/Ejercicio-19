#include <iostream>
#include <ctime>
#include <cstdlib>

//Metodo Runge Kutta 4 (Ecuacion Diferencial de Segundo Orden)
using std::cout;
using std::endl;

float funcion (float x, float y);
float fz(float x, float y, float z);
int main(){
	float y=1.0;
	float x=0.0;
	float h=0.1;
	float z=0.0;
	int N=3/h;
	float k1,k2,k3,k4;
	float k_1,k_2,k_3,k_4;
	int i;
	

	for (int i=0; i<N;i++){
	float l1=y;
	float l2=z;
	k1=fz(x,y,z);
	k2=fz(x+h/2,y+h/2*k1,z+h/2*k1);
	k3=fz(x+h/2, y+h/2*k2,z+h/2*k2);
	k4=fz(x+h,y+h*k3,z+h*k3);
	
	k_1=funcion(x,y);
	k_2=funcion(x+h/2,l2+h/2*k_1);
	k_3=funcion(x+h/2, y+h/2*k_2);
	k_4=funcion(x+h,y+h*k_3);

	y=y+(h/6)*(k_1+2*k_2+2*k_3+k_4);	
	z=z+(h/6)*(k1+2*k2+2*k3+k4);	

	x=x+h;
	
	cout <<x << " " <<y << " " << z  <<endl;
      }
 return 0;
}


float funcion (float x,float y){
	return -y;
}
 
float fz (float x, float y, float z){
	return z; 
}


