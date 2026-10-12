# Mini Game Project - Tic Tac Toe

## About the Project

This is a simple Tic Tac Toe game developed using C++. It allows two players to play against each other on a 3 × 3 board. Players take turns marking their cells with X and O until one player wins or the game ends in a draw.

I developed this project to practise basic C++ programming concepts and understand how game logic works.

## Features

* Two-player gameplay
* Dynamic 3 × 3 game board
* Win detection for rows, columns, and diagonals
* Draw detection
* Input validation to prevent invalid moves
* Option to play again after a game ends

## Technologies Used

* **Programming Language:** C++
* **Concepts:** Arrays, loops, functions, conditional statements
* **Compiler:** GCC / MinGW

## How to Run

1. Download or clone this repository.

2. Open the project folder in VS Code.

3. Open the terminal.

4. Compile the program:

   ```bash
   g++ -std=c++11 tic_tac_toe.cpp -o tic_tac_toe.exe
   ```

5. Run the game on Windows:

   ```powershell
   .\tic_tac_toe.exe
   ```

## How to Play

1. Player X starts the game.
2. Enter a number from 1 to 9 to select a cell.
3. Player O takes the next turn.
4. The first player to get three marks in a row, column, or diagonal wins.
5. If all cells are filled without a winner, the game ends in a draw.
6. Choose Y to play again or N to exit.

## Project Structure

```text
Mini-Game-Project/
├── tic_tac_toe.cpp
├── README.md
└── .gitignore
```

## Learning Outcomes

Through this project, I practised using arrays, loops, functions, conditional statements, and input validation to build an interactive console-based game.

## Future Improvements

* Add a single-player mode against the computer
* Add a score tracker
* Introduce different difficulty levels

## Author

Developed as a C++ mini game project.
