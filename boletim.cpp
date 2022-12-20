#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	bool flag;
	
	do{
		int nota[4], som = 0, med = 0;
		char resp;
		
		cout << "Entre com as notas de cada etapa\n";
		for(int i = 0; i<4;i++){
			
			do{
				cout << "Nota da etapa " << i+1 << ": \n";
				cin >> nota[i];
			} while(nota[i] < 0 || nota[i] > 10);
			
			som += nota[i];
			cout << endl;
		}
			
		med = som/4;
		cout << som << endl << med << endl;
		
		if(med >= 6) cout << "Aprovado";
				
		else cout << "Reprovado";
	
		cout << "\n\nDeseja realizar um novo boletim ? s/n";
		resp = getch();
		
		if(resp == 'n') flag = 0;
		
		else{
			flag = 1;
			system("cls");
		} 
		
	}while(flag);
}
