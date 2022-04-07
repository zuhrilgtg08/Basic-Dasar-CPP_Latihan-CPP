#include <iostream>
using namespace std;

char frame[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int cekPemenang();
void board();

int main(){
	int player = 1,i,choice;
	char mark;
	do{
		board();
		player = (player%2)?1:2;

		cout << "Player " <<player << " Masukkan Angka: ";
		cin>>choice;
		mark = (player == 1)? 'X' : 'O';

		if(choice == 1 && frame[1] == '1')
			frame[1] = mark;
		else if(choice == 2 && frame[2] == '2')
			frame[2] = mark;
		else if(choice == 3 && frame[3] == '3')
			frame[3] = mark;
		else if(choice == 4 && frame[4] == '4')
			frame[4] = mark;
		else if(choice == 5 && frame[5] == '5')
			frame[5] = mark;
		else if(choice == 6 && frame[6] == '6')
			frame[6] = mark;
		else if(choice == 7 && frame[7] == '7')
			frame[7] = mark;
		else if(choice == 8 && frame[8] == '8')
			frame[8] = mark;
		else if(choice == 9 && frame[9] == '9')
			frame[9] = mark;
		else{
			cout << "Salah Langkah";
			player--;
			cin.ignore();
			cin.get();
		}
		i=cekPemenang();
		player++;
	}while(i==1);
	board();

	if(i==1)
		cout << "==>\aPlayer " <<--player << "Win";
	else{
		cout << "==>\aGame Draw";
		cin.ignore();
		cin.get();
		return 0;
	}
	return 0;
}

int cekPemenang(){
		if(frame[1] == frame[2] && frame[2] == frame[3])
			return 1;
		else if(frame[4] == frame[5] && frame[5] == frame[6])
			return 1;
		else if(frame[7] == frame[8] && frame[8] == frame[9])
			return 1;
		else if(frame[1] == frame[4] && frame[4] == frame[7])
			return 1;
		else if(frame[2] == frame[5] && frame[5] == frame[8])
			return 1;
		else if(frame[3] == frame[6] && frame[6] == frame[9])
			return 1;
		else if(frame[1] == frame[5] && frame[5] == frame[9])
			return 1;
		else if(frame[3] == frame[5] && frame[5] == frame[7])
			return 1;
		else if(frame[1] != '1' && frame[2] != '2' && frame[3] != '3' && frame[4] != '4' && frame[5] != '5' && frame[6] != '6' && frame[7] != '7' && frame[8] != '8' && frame[9] != '9')
			return 0;
		else{
			return -1;
		}
	}

void board(){
		system("cls");
		cout << "\n\n\tTic Tac Toe\n\n";

		cout << "Player 1 (X) - Player 2 (O)" <<endl <<endl;
		cout <<endl;

		cout << "| |" <<endl;
		cout <<frame[1] << "|" <<frame[2] << "|" <<frame[3] <<endl;

		cout << "_____|_____|_____" <<endl;
		cout << "_____|_____|_____" <<endl;

		cout <<frame[4] << "|" <<frame[5] << "|" <<frame[6] <<endl;

		cout << "_____|_____|_____" <<endl;
		cout << "_____|_____|_____" <<endl;

		cout <<frame[7] << "|" <<frame[8] << "|" <<frame[9] <<endl;

		cout << "| |" <<endl <<endl;
	}
