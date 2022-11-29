#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int tam = 11, flag = 0;
	int cpf[tam];
	int verif[2]  = {0,0};
	char resp;
	
	//entrada cpf
	do{
	
	input:
	cout << "Entre com seu cpf: " << endl;
	for(int i = 0; i < tam; i++) cin >> cpf[i];
	
	//verificacao cpf
	cout << "Seu CPF e: ";
	for(int i = 0; i < tam; i++) cout << cpf[i];
	cout << " ? " << endl << "s - esta correto" << endl << "n - digitar novamente" << endl;
	resp = getch();
	if(resp == 'n') flag = 1;
	else flag = 0;
	}
	while(flag);
	
	int checkcpf[tam];
	int val[2];
	
	//validacao dos digitos verificadores
	for(int j = 2; j > 0; j--){
		int valsom = 0, modsom = 0, valck;
		if(j == 2) valck = 10;
		if(j == 1) valck = 11;
		//multiplica os digitos
		for(int i = 0 ; i < tam - j; i++){
			checkcpf[i] = cpf[i]*valck;
//			cout << valck  << " ";
			valck = valck - 1;
			//cout << checkcpf[i] << " ";
		}
			cout << endl;
		
		//soma todos os resultados
		for(int i = 0; i < tam - j; i++) valsom = valsom + checkcpf[i];
	
//		cout << valsom << endl;
		modsom = valsom % 11;
		val[j] = 11 - modsom;
//		cout << "mod da soma: " << modsom << endl << "valor da subtracao de 11 por mod "<< val[j] << endl;
		if( modsom >= 10) verif[j] = 0;
		else verif[j] = val[j];	
//		cout << "valor verif " << verif[j] << endl;
		
//		cout << endl << endl;
	}
	
//	cout << verif[2] << verif[1] << endl << cpf[9] << cpf[10] << endl;
	 
	//fim do programa
	if(cpf[9] == verif[2] && cpf[10] == verif[1]) cout << "CPF valido, parabens!"; 
	else cout << "CPF invalido";
		
	cout << endl << "Deseja entrar com um novo cpf ? s/n" << endl;
	resp = getch();
	if(resp == 's') goto input;
}
