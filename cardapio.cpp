#include<iostream>
using namespace std;
#include<string>
#include<conio.h>

int main(){
	
	char input;
	
	string prato[5] = {"Peixe","Bife","Frango","Vegano","Basico"};
	string bebida[3] = {"Agua","Cerveja","Refrigerante"};
	
	cmc:
	cout << "Opcoes:\n 1- Prato\n 2- Bebida" << "\n\n";
	input = getch();
	
	switch(input){
		case '1':
			for(int i = 0; i < 5; i++)
			cout << " " << i+1 << "-" << prato[i] << endl;
			break;
		case '2':
			for(int i = 0; i < 3; i++)
			cout << " " <<  i+1 << "-" << bebida[i] << endl;
			break;
		default:
			cout << "Responda uma das opcoes ofertadas\n";
			goto cmc;
	}
}
