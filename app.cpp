//Tic Tac Toe
//Left off on trying to clear the terminal and then show to table and request using "system("CLS");"

#include <iostream>
#include <stdlib.h>
using namespace std;

void P1PositionSelect(char board[][3], int selectedPos){

    int diffPos;

    switch(selectedPos) {
        case 1: 
            if (board[0][0] == '1'){
                board[0][0] = 'X';
                return;               
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P1PositionSelect(board, diffPos);
                break;
            }
        case 2:
            if (board[0][1] == '2'){
                board[0][1] = 'X';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P1PositionSelect(board, diffPos);
                break;
            }
        case 3:
            if (board[0][2] == '3'){
                board[0][2] = 'X';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P1PositionSelect(board, diffPos);
                break;
            }
        case 4:
            if (board[1][0] == '4'){
                board[1][0] = 'X';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P1PositionSelect(board, diffPos);
                break;
            }
        case 5:
            if (board[1][1] == '5'){
                board[1][1] = 'X';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P1PositionSelect(board, diffPos);
                break;
            }
        case 6:
            if (board[1][2] == '6'){
                board[1][2] = 'X';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P1PositionSelect(board, diffPos);
                break;
            }
        case 7:
            if (board[2][0] == '7'){
                board[2][0] = 'X';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P1PositionSelect(board, diffPos);
                break;
            }
        case 8:
            if (board[2][1] == '8'){
                board[2][1] = 'X';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P1PositionSelect(board, diffPos);
                break;
            }
        case 9:
            if (board[2][2] == '9'){
                board[2][2] = 'X';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P1PositionSelect(board, diffPos);
                break;
            }
        default:
            cout << "Invalid input. Try again: ";
            cin >> diffPos;
            P1PositionSelect(board, diffPos);
            break;
    }        
    
}

void P2PositionSelect(char board[][3], int selectedPos){

    int diffPos;

    switch(selectedPos) {
        case 1: 
            if (board[0][0] == '1'){
                board[0][0] = 'O';
                return;               
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P2PositionSelect(board, diffPos);
                break;
            }
        case 2:
            if (board[0][1] == '2'){
                board[0][1] = 'O';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P2PositionSelect(board, diffPos);
                break;
            }
        case 3:
            if (board[0][2] == '3'){
                board[0][2] = 'O';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P2PositionSelect(board, diffPos);
                break;
            }
        case 4:
            if (board[1][0] == '4'){
                board[1][0] = 'O';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P2PositionSelect(board, diffPos);
                break;
            }
        case 5:
            if (board[1][1] == '5'){
                board[1][1] = 'O';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P2PositionSelect(board, diffPos);
                break;
            }
        case 6:
            if (board[1][2] == '6'){
                board[1][2] = 'O';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P2PositionSelect(board, diffPos);
                break;
            }
        case 7:
            if (board[2][0] == '7'){
                board[2][0] = 'O';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P2PositionSelect(board, diffPos);
                break;
            }
        case 8:
            if (board[2][1] == '8'){
                board[2][1] = 'O';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P2PositionSelect(board, diffPos);
                break;
            }
        case 9:
            if (board[2][2] == '9'){
                board[2][2] = 'O';
                return;
            } else {
                cout << "That space has already been taken. Try again: ";
                cin >> diffPos;
                P2PositionSelect(board, diffPos);
                break;
            }
        default:
            cout << "Invalid input. Try again: ";
            cin >> diffPos;
            P2PositionSelect(board, diffPos);
            break;
    }        
    
}

bool P1WinCheck(char board[][3]){

    if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') || (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') || (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')){
        return true;
    } else if ((board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') || (board[0][1] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') || (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')){
        return true;
    } else if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')){
        return true;
    } else {
        return false;
    }

}

bool P2WinCheck(char board[][3]){

    if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') || (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') || (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')){
        return true;
    } else if ((board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') || (board[0][1] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') || (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')){
        return true;
    } else if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')){
        return true;
    } else {
        return false;
    }

}

void PrintBoard(char board[][3]){
    for (int i = 0; i < 3; i++){
        if (i > 0){
            cout << endl << "---------------";
        }
        cout << endl << " | ";
        for (int j = 0; j < 3; j++){
            cout << board[i][j] << " | ";
        }
    }
}

int main(){

    char board[3][3] = {'1', '2', '3', 
                        '4', '5', '6', 
                        '7', '8', '9'};

    int j = 0;

    int counter = 0;
    int selectedPos;
    bool running = true;
    bool p1Win;
    bool p2Win;

    while (running == true){
        system("CLS");
        PrintBoard(board);
        if (counter % 2 == 0){
            cout << endl << endl << "Player 1's turn please enter the position you'd like to place your 'X' in: ";
            cin >> selectedPos;
            P1PositionSelect(board, selectedPos);
        } else if (counter % 2 == 1){
            cout << endl << endl << "Player 2's turn please enter the position you'd like to placer your 'O' in: ";
            cin >> selectedPos;
            P2PositionSelect(board, selectedPos);
        }
        counter++;

        if (P1WinCheck(board)){
            system("CLS");
            PrintBoard(board);
            cout << endl << endl << "Player 1 wins!";
            running = false;
        }
        if (P2WinCheck(board)){
            system("CLS");
            PrintBoard(board);
            cout << endl << endl << "Player 2 wins!";
            running = false;
        }

        if (counter >= 9){
            system("CLS");
            PrintBoard(board);
            cout << endl << endl << "Looks like it ended in a tie!";
            running = false;
        }
    }

return 0;
}