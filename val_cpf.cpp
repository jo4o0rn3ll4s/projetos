#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int tam = 11, flag = 0;
	int cpf[tam];
	int verif[2];
	char resp;
	
	//entrada cpf
	do{
	
	input:
	cout << "Entre com seu cpf: " << endl;
	for(int i = 0; i < tam; i++) cin >> cpf[i];
	
	//verificação cpf
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
	
	//validação dos digitos verificadores
	for(int j = 0; j < 2; j++){
		int valck = 10, valsom = 0, modsom = 0;
		//multiplica os digitos
		for(int i = 0; i < tam - 2; i++){
			checkcpf[i] = cpf[i]*valck;
			valck--;
			cout << checkcpf[i];
		}
			cout << endl;
		
		//soma todos os resultados
		for(int i = 0; i < tam - 2; i++) valsom = valsom + checkcpf[i];
	
		cout << valsom;
		modsom = valsom % 11;
		val[j] = 11 - modsom;
		if( modsom >= 10) verif[j] = 0;
		else verif[j] = val[j];	
	}
	
	//fim do programa
	if(cpf[9] == verif[0] && cpf[10] == verif[1]) cout << "CPF valido, parabéns!";
	else{
		cout << "CPF invalido" << endl << "Deseja entrar com um novo cpf ? s/n" << endl;
		resp = getche();
		if(resp == 's') goto input;
	}
}
