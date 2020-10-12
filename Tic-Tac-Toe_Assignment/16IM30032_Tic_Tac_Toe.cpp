// Shubham Mawa
// 16IM30032
// Tic-Tac-Toe Assignment

#include <iostream>

using namespace std;


// Function to decide who will play first
int player_choice(){
    int n;
    cout << "Choose whether to play as:\nPlayer 1: (X)\nPlayer 2: (O)\n";
    cout << "Enter choice (1 or 2): "; cin >> n;
    
    while(n!=1 || n!=2){
        if(n == 1){
            cout << "\nYou are player 1: (X)" << endl;
            return n;
        }
        else if(n==2){
            cout << "\nYou are player 2: (O)" << endl;
            return n;
        }
        else{
            cout << "\nInvalid choice.\nPlease enter choice again." << endl;
            cin >> n;
        }
    }
}


// Function to show sample tic-tac-toe grid and display the instructions
void show_rules(){
    cout << "\n\n";
    cout << "\t\t TIC-TAC-TOE" << endl;
    cout << "In each turn choose a cell numbered from 1 to 9 to place your mark\n";

    cout << "\t-------------" << endl;
    cout << "\t  " << "1 | 2 | 3 "  << endl;
    cout << "\t-------------" << endl;
    cout << "\t  " << "4 | 5 | 6 "  << endl;
    cout << "\t-------------" << endl;
    cout << "\t  " << "7 | 8 | 9 "  << endl;
    cout << "\t-------------" << endl;
    
}

// Function to show the current state of the tic-tac-toe grid
void showgrid(char grid[][3]){
    cout << "\t-------------" << endl;
    cout << "\t  " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << endl;
    cout << "\t-------------" << endl;
    cout << "\t  " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2] << endl;
    cout << "\t-------------" << endl;
    cout << "\t  " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2] << endl;
    cout << "\t-------------" << endl;
}


// Function for player move
void player_move(int choice, char grid[][3]){
    int num, row, col;
    char symbol;
    if(choice == 1){
        symbol = 'X';
    }
    else if(choice == 2){
        symbol = 'O';
    }
    cout << "Enter a cell number from 1 to 9 where cell is empty: "; cin >> num;
    
    // Check valid choice
    while(num < 1 || num > 9){
        cout << "Invalid choice. Please enter again" << endl;
        cout << "Enter cell number: "; cin >> num;
    }

    int flag = 0;
    while(flag == 0){
        // Compute the cell
        // Row
        if(num <= 3)
            row = 0;
        else if(num >=4 && num <= 6)
            row = 1;
        else if(num >= 7 && num <= 9)
            row = 2;

        // Column
        if(num == 1 || num == 4 || num == 7)
            col = 0;
        else if(num == 2 || num == 5 || num == 8)
            col = 1;
        else if(num == 3 || num == 6 || num == 9)
            col = 2;

        // Check if the cell is not already filled
        if(grid[row][col] != ' '){
            cout << "Cell already filled.\nEnter another cell number which is empty: "; cin >> num;
        }
        else{
            flag = 1;
        }
    }
    grid[row][col] = symbol;
    showgrid(grid);
}


// Function for computer move
int computer_move(int choice, char grid[][3], int human_move_count, int computer_move_count){
    cout << "Computer moves\n";
    char symbol;
    char human_symbol;
    if(choice == 1){
        symbol = 'O';
        human_symbol = 'X';
    }
    else{
        symbol = 'X';
        human_symbol = 'O';
    }

// if(grid[0][0] == ' ' && grid[0][1] == ' ' && grid[0][2] == ' ' && grid[1][0] == ' ' && grid[1][1] == ' ' && grid[1][2] == ' ' && grid[2][0] == ' ' && grid[2][1] == ' ' && grid[2][2] == ' '){
    // First move by computer if player 1
    //cout << "Human: " << human_move_count << "\nComputer: " << computer_move_count << endl;
    if(human_move_count == 0 && computer_move_count == 0){
        grid[1][1] = symbol;
    }
    
    else if(human_move_count == 1 && computer_move_count == 0){
        if(grid[1][1] == ' ')
            grid[1][1] = symbol;
        else if(grid[0][0] == ' ')
            grid[0][0] = symbol;
        else if(grid[0][2] == ' ')
            grid[0][2] = symbol;
        else if(grid[2][0] == ' ')
            grid[2][0] = symbol;
        else if(grid[2][2] == ' ')
            grid[2][2] = symbol;
    }

    else if(human_move_count == 2 && computer_move_count == 1){
        // If computer occupies centre
        if(grid[1][1] = symbol){
            // Take a corner cell
            if(grid[0][0] == ' ')
                grid[0][0] = symbol;
            else if(grid[0][2] == ' ')
                grid[0][2] = symbol;
            else if(grid[2][0] == ' ')
                grid[2][0] = symbol;
            else if(grid[2][2] == ' ')
                grid[2][2] = symbol;            
        }
        // If human occupies centre
        else if(grid[1][1] = human_symbol){
            //
        }

    }
    else{
        grid[0][1] = symbol;
    }
    showgrid(grid);
    return 0;
}



void result(int choice, char grid[][3]){
    int n;
    char symbol = ' ';

    // If any of the rows has same values
    if(grid[0][0] == grid[0][1]){
        if(grid[0][1] == grid[0][2])
            symbol = grid[0][0];
    }

    else if(grid[1][0] == grid[1][1]){
        if(grid[1][1] == grid[1][2])
            symbol = grid[1][0];
    }

    else if(grid[2][0] == grid[2][1]){
        if(grid[2][1] == grid[2][2])
            symbol = grid[2][0];
    }

    // If any column has same value
    else if(grid[0][0] == grid[1][0]){
        if(grid[1][0] == grid[2][0])
            symbol = grid[0][0];
    }

    else if(grid[0][1] == grid[1][1]){
        if(grid[1][1] == grid[2][1])
            symbol = grid[1][1];
    }

    else if(grid[0][2] == grid[1][2]){
        if(grid[1][2] == grid[2][2])
            symbol = grid[2][2];
    }

    // If any diagonal has same value
    else if(grid[0][0] == grid[1][1]){
        if(grid[1][1] == grid[2][2])
            symbol = grid[2][2];
    }

    else if(grid[0][2] == grid[1][1]){
        if(grid[1][1] == grid[2][0])
            symbol = grid[2][0];
    }

    if(symbol == 'X' && choice == 1)
        cout << "Human wins!" << endl;
    else if(symbol == 'X' && choice == 2)
        cout << "Computer wins!" << endl;
    else if(symbol = 'O' && choice == 1)
        cout << "Computer wins!" << endl;
    else if(symbol = 'O' && choice == 2)
        cout << "Human wins!" << endl;
    else if(symbol == ' ')
        cout << "It is a draw!" << endl;
}

int main(){
    char grid[3][3] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};

    //char grid[3][3];
    int choice;
    show_rules();
    choice = player_choice();
    int human_move_count= 0;
    int computer_move_count = 0;
    if(choice == 1){
        // human moves first
        // 1
        player_move(choice, grid);
        human_move_count++;
        
        // 2
        computer_move(choice, grid, human_move_count, computer_move_count);
        computer_move_count++;
        
        // 3
        player_move(choice, grid);
        human_move_count++;

        // 4
        computer_move(choice, grid, human_move_count, computer_move_count);
        computer_move_count++;

        // 5
        player_move(choice, grid);
        human_move_count++;

        // 6
        computer_move(choice, grid, human_move_count, computer_move_count);
        computer_move_count++;

        // 7
        player_move(choice, grid);
        human_move_count++;
        // 8
        computer_move(choice, grid, human_move_count, computer_move_count);
        computer_move_count++;

        // 9
        player_move(choice, grid);
        human_move_count++;
    }
    else{
        // computer moves first
        // 1
        computer_move(choice, grid, human_move_count, computer_move_count);
        computer_move_count++;

        // 2
        player_move(choice, grid);
        human_move_count++;

        // 3
        computer_move(choice, grid, human_move_count, computer_move_count);
        computer_move_count++;

        // 4
        player_move(choice, grid);
        human_move_count++;

        // 5
        computer_move(choice, grid, human_move_count, computer_move_count);
        computer_move_count++;

        // 6
        player_move(choice, grid);
        human_move_count++;

        // 7
        computer_move(choice, grid, human_move_count, computer_move_count);
        computer_move_count++;

        // 8
        player_move(choice, grid);
        human_move_count++;
    }

    // Call the result function to evaluate and show the result
    result(choice, grid);
    //showgrid(grid);
}