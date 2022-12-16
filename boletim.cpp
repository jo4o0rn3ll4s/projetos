#include<iostream>
using namespace std;

int main(){
	
	bool flag;
	
	do{
		int nota[4], som = 0, med = 0;
		char resp;
		
		cout << "Entre com as notas de cada etapa";
		for(int i = 0; i<4;i++){
			cin >> nota[i];
			som += nota[i];
			cout << endl;
		}
			
		med = som/4;
		cout << som << endl << med << endl;
		
		if(med >= 6) cout << "Aprovado";
				
		else cout << "Reprovado";
	
		cout << "Deseja realizar um novo boletim ? s/n";
		cin >> resp;
		
		if(resp == 'n') flag = 0;
		else flag = 1;
	}while(flag);
}
