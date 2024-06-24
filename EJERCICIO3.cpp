//nombre:Ramos Mamani Alejandra Del Rosario
#include <iostream>
using namespace std;
float suma(int);
int factorial(int);
int main(){
    int n;
    float sum;
	cout<<"Ingrese el numero:";cin>>n;
    if (n!=0){
    	sum=suma(n);
    	cout<<"La sumatoria total es:"<<sum;
    } else{
        cout<<"Finalizo el programa."<<endl;
    }	
}	
	
float suma(int a){
    float s=0;
    for(int i=1; i<=a; i++){
        s = s + (float(factorial(i)) / (2*i));
    }
    return s;
}

int factorial(int b){
    if (b != 0){
        return b * factorial(b-1);
    } else{
        return 1;
	}
}