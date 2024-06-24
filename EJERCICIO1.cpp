//nombre:Ramos Mamani Alejandra Del Rosario
#include <iostream>
using namespace std;
int main(){
	int op1, op2, op;
	double r;
		cout<<"Menu de opciones:"<<endl;
        cout<<"1. Suma"<<endl;
        cout<<"2. Resta"<<endl;
        cout<<"3. Multiplicacion"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"Ingrese la operacion a realizar: "; cin>>op;
        cout<<"Ingrese el primer numero:"; cin>>op1;
        cout<<"Ingrese el segundo numero:"; cin>>op2;
        switch(op){
        case 1:
			r= op1 + op2;
			cout<<"El resultado es:";cin>>r;
			break;
		case 2:
			if (op1>=op2){
				r= op1 - op2;
				cout<<"El resultado es:"<<r<<endl;
			break;
			} else{
				r= op2 - op1;
				cout<<"El resultado es:"<<r<<endl;
			break;}
		case 3:
			r= op1 * op2;
			cout<<"El resultado es:"<<r<<endl;
			break;
		case 4:
			if (op2 != 0){
				r= op1 /  op2;
				cout<<"El resultado es:"<<r<<endl;
				break;
			} else{
				cout<<"No es posible esta division."<<endl;
				break;}
		}
		
		return 0;
	}