//nombre:Ramos Mamani Alejandra Del Rosario
#include <iostream>
using namespace std;
int main(){
    int n1,n2,c=0, i=1;
    do{
	system("cls");
    cout<<"Ingrese el primer numero:";cin>>n1;
    cout<<"Ingrese el segundo numero:";cin>>n2;
    	while(i<=n1 && i<=n2){
        	if(n1%i==0 && n2%i==0){
            c++;
        }
        i++;
    	}
    	if (c==1){
    		cout<<"Los numeros son PESI.";
    		system("pause");
		} 
		if (c>1 && c!=0){
			cout<<"Los numeros no son PESI.";
			system("pause");
		}
	} while(n1>0 && n2>0);
	cout<< "Se cerrara el programa."<<endl; 
	return 0;
 	} 