//Tic-Tac-Toe Game  

#include<iostream>
using namespace std;
char board [3][3]={
{'1','2','3'},
{'4','5','6'},
{'7','8','9'}
};
void displayBoard(){
	cout<<"\n";
	for(int i=0;i<3;i++){
		cout<<board[i][0]<<" | "
	        <<board[i][1]<<" | "
	        <<board[i][2]<<endl;
	        if(i<2)
	        cout<<"__|___|__"<<endl;
	        
	}
	cout<<"\n";
}
bool checkWin(char player){
	for(int i=0;i<3;i++){
		if ((board[i][0]==player&&
		board[i][1]==player&&
		board[i][2]==player)||
		(board[0][i]==player)&&
		board[1][i]==player&&
		board[2][i]==player)
		return true;
	}
	if((board[0][0]==player&&
	board[1][1]==player&&
	board[2][2]==player||
	(board[0][2]==player)&&
	board[1][1]==player&&
	board[2][0]==player))
	return true;
	return false;
}
int main(){
	char player='X';
	int move, count=0;
	while(true){
		displayBoard();
		cout<<"player"<<player<<",enter position(1-9):";
		cin>>move;
		int row=(move-1)/3;
		int col=(move-1)%3;
		if(move<1||move>9||
		  board[row][col]=='X'||
		  board[row][col]=='O'){
		  cout<<"Invalid move!Try again.\n";
		  continue;
		  }
		  board[row][col]=player;
	    count ++;
		  if(checkWin(player)){
		  	displayBoard;
			  cout<<"player"<<player<<"Win!\n";
			  break;
		  }
		  if(count==9){
		  	displayBoard();
		  	cout<<"Game Draw!\n";
		  	break;
		  }
		  if(player=='X')
		  player='O';
		  else
		  player='X';
	}
	return 0;
}
