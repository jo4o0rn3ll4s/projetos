#include<iostream>
#include<conio.h>

using namespace std;

int posx, posy;

char cmd;
char mp[10][20]={{'M','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','M'},
				 {'|','W','W',' ',' ',' ','W','W',' ',' ','W','W',' ',' ',' ','W','W','|'},
				 {'|',' ',' ',' ',' ',' ',' ','W',' ',' ',' ',' ',' ',' ',' ',' ','W','|'},
				 {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
				 {'|',' ','W','W',' ',' ',' ',' ',' ',' ',' ','W','W',' ',' ',' ',' ','|'},
				 {'|',' ',' ','W',' ',' ',' ',' ',' ','W',' ',' ','W',' ',' ',' ',' ','|'},
				 {'|',' ',' ',' ',' ',' ','W',' ','W','W',' ',' ',' ',' ',' ','W','W','|'},
				 {'|','W',' ',' ',' ',' ',' ',' ',' ',' ','W',' ',' ',' ',' ','W',' ','|'},
				 {'M','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','M'}};

int main()
{
	
 posx = 4;
 posy = 8;
 
 do
 {
 	for(int i = 0; i < 10; i++){
  		for(int j = 0; j < 20; j++){
  			if(posx == i && posy == j)
  				cout << 'O';
  			else
  				cout << mp[i][j];
	    }
	cout << endl;
    }
  cout << "->";
  cmd = getch();
  
  switch(cmd){
  	case 'w':
  		posx--;
  		break;
  	case 's':
  		posx++;
  		break;
  	case 'd':
  		posy++;
  		break;
  	case 'a':
  		posy--;
  		break;
  	default:
  	break;
  }
  
  if(posx > 8)
  	posx = 8;
  if(posx < 1)
  	posx = 1;
  if(posy > 16)
  	posy = 16;
  if(posy < 1)
  	posy = 1;
  
	system("cls");
  //cout << endl << endl;
 }
  while(cmd != 'n');
}
