//ANKITH_KUMAR-00: Calculator :
#include<iostream>
#include<iomanip> 

using namespace std;

int main()       
{	
	float a,b,c;
	int opr;
	char opre;
//(DO-WHILE LOOP)	
do{
 	cout<<"\n\t- - - - * C A L C U L A T O R * - - - -\n";
 
	cout<<"\n  To Continue Enter [1]";
	cout<<"\n  For Exit Enter    [5] ";

	cout<<"\n\n  Enter [1] OR [5] =";
	cin>>opr;
//If Condition is TRUE:
  if(opr==1){
	cout<<"\n  Enter Any Operator[+ - * /] =";
	cin>>opre; 
	cout<<"\n  Enter No-1:";
	cin>>a;
	cout<<"  Enter No-2:";
	cin>>b;
//(SWITCH CASE):
  switch(opre){
//Case's For Arithematic Operation:  	
				case '+': c=a+b; cout<<"\n\t\tANS="<<c; break;
				case '-': c=a-b; cout<<"\n\t\tANS="<<c; break;
				case '*': c=a*b; cout<<"\n\t\tANS="<<c; break;
				case '/': c=a/b; cout<<"\n\t\tANS="<<c; break;
				
default: 
		cout<<"\n\t - - - - * I N V A L I D  O P E R A T O R * - - - -\n"; break; 
			}			
		cout<<"\n------------------------------------------------------------------\n";

	}else if(opr==5){
//Greating: 
		cout<<"\n\t\t - - - * T H A N K  Y O U ! * - - - \n";
	}
	
}while(opr!=5); //...:
	return 0;
}