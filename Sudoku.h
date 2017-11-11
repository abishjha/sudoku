#ifndef Sudoku_h
#define Sudoku_h

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

class Sudoku {
private:
     int current[9][9];//the current sudoku
     int solution[9][9];//solution to the current sudoku
public:
     void setData(int curr[][9], int sol[][9]);
     void startGame();
     int welcome_screen();
     void print(int arr[][9]);
     void game_play();
     bool judge_end();
};

#endif