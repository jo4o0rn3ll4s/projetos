#include<iostream>
using namespace std;
#include<string>
#include<conio.h>
#include<unistd.h>

int main(){
	
	char menu, esco, resp;
	int valcont = 0, diverCom = 5, diverBeb = 3;
	float temp = 1.5;
	bool flag0, flag1;
	
	string prato[diverCom] = {"Peixe..........r$ 18","Bife...........r$ 18","Frango.........r$ 12","Vegano.........r$ 10","Basico.........r$ 12"};
	string bebida[diverBeb] = {"Agua...........r$ 3","Cerveja........r$ 10","Refrigerante...r$ 5"};
	
	do{
		flag0 = 0;
				
		system("cls");
		cout << "####################" << endl;
		cout << "Opcoes:\n 1- Prato\n 2- Bebida" << endl;
		cout << "####################\n";
		menu = getch();
	
		switch(menu){
		
			case '1':
				do{
					flag1 = 0;
					system("cls");
					cout << "--------------------" << endl;
					for(int i = 0; i < diverCom; i++)
					cout << " " << i+1 << "-" << prato[i] << endl;
					cout << "--------------------" << endl;
				
					esco = getch();
					
						switch(esco){
							case '1':
								valcont += 18;
								break;
								
							case '2':
								valcont += 18;
								break;
								
							case '3':
								valcont += 12;
								break;
								
							case '4':
								valcont += 10;	
								break;
								
							case '5':
								valcont += 12;
								break;
							
							default:
								cout << "Responda uma das opcoes\n";
								sleep(temp);
								flag1 = 1;
						}
				}while(flag1);
						
				cout << "Deseja escolher mais coisas? s/n" << endl;
				resp = getch();
				if(resp == 's' || resp == 'S') flag0 = true;	
				break;
				
			case '2':
				do{
					flag1 = 0;
					system("cls");
					cout << "--------------------" << endl;
					for(int i = 0; i < diverBeb; i++)
					cout << " " <<  i+1 << "-" << bebida[i] << endl;
					cout << "--------------------" << endl;
					
					esco = getch();
						
						switch(esco){
							case '1':
								valcont += 3;
								break;
								
							case '2':
								valcont += 10;
								break;
								
							case '3':
								valcont += 5;
								break;
								
							default:
								cout << "Responda uma das opcoes\n";
								sleep(temp);
								flag1 = 1;
						}
				}while(flag1);
				
				cout << "Deseja escolher mais coisas? s/n" << endl;
				resp = getch();
				if(resp == 's' || resp == 'S') flag0 = true;
				break;
				
			default:
				cout << "Responda uma das opcoes ofertadas\n";
				sleep(temp);
				flag0 = 1;
		}
	} while(flag0);
	
	system("cls");
	cout << "##############################" << endl;
	cout << "TOTAL DA CONTA : r$ " << valcont << endl << "OBRIGADO POR COMPRAR CONOSCO!" << endl;
	cout << "##############################";
}
