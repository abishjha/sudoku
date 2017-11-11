#include "Sudoku.h" //this header file contains the Sudoku class
#include "data.h" // data file includes all the solutions and questions to the sudokus

void Sudoku::setData(int curr[][9], int sol[][9]) {
     for (int i = 0; i < 9; i++) {
          for (int j = 0; j < 9; j++) {
               current[i][j] = curr[i][j];
               solution[i][j] = sol[i][j];
          }
     }
}

void Sudoku::startGame() {
     srand(time(NULL));

     int data_set = (rand() % 10) + 1; //generates a random number in between 1 and 10 to select the sudoku
     int level = welcome_screen(); //this returns the level that the user selects which is either 1, 2, 3, or 4

     if (level == 1) {
          switch (data_set) //chooses one of the data sets at random
          {
          case 1:
               cout << "\tBeginner Sudoku 1" << endl;
               setData(beginner_1, data1_ans);
               break;
          case 2:
               cout << "\tBeginner Sudoku 2" << endl;
               setData(beginner_2, data2_ans);
               break;
          case 3:
               cout << "\tBeginner Sudoku 3" << endl;
               setData(beginner_3, data3_ans);
               break;
          case 4:
               cout << "\tBeginner Sudoku 4" << endl;
               setData(beginner_4, data4_ans);
               break;
          case 5:
               cout << "\tBeginner Sudoku 5" << endl;
               setData(beginner_5, data5_ans);
               break;
          case 6:
               cout << "\tBeginner Sudoku 6" << endl;
               setData(beginner_6, data6_ans);
               break;
          case 7:
               cout << "\tBeginner Sudoku 7" << endl;
               setData(beginner_7, data7_ans);
               break;
          case 8:
               cout << "\tBeginner Sudoku 8" << endl;
               setData(beginner_8, data8_ans);
               break;
          case 9:
               cout << "\tBeginner Sudoku 9" << endl;
               setData(beginner_9, data9_ans);
               break;
          case 10:
               cout << "\tBeginner Sudoku 10" << endl;
               setData(beginner_10, data10_ans);
               break;
          }
     }
     else if (level == 2) {
          switch (data_set) //chooses one of the data sets at random
          {
               cout << "\tEasy Sudoku 1" << endl;
               setData(easy_1, data1_ans);
               break;
          case 2:
               cout << "\tEasy Sudoku 2" << endl;
               setData(easy_2, data2_ans);
               break;
          case 3:
               cout << "\tEasy Sudoku 3" << endl;
               setData(easy_3, data3_ans);
               break;
          case 4:
               cout << "\tEasy Sudoku 4" << endl;
               setData(easy_4, data4_ans);
               break;
          case 5:
               cout << "\tEasy Sudoku 5" << endl;
               setData(easy_5, data5_ans);
               break;
          case 6:
               cout << "\tEasy Sudoku 6" << endl;
               setData(easy_6, data6_ans);
               break;
          case 7:
               cout << "\tEasy Sudoku 7" << endl;
               setData(easy_7, data7_ans);
               break;
          case 8:
               cout << "\tEasy Sudoku 8" << endl;
               setData(easy_8, data8_ans);
               break;
          case 9:
               cout << "\tEasy Sudoku 9" << endl;
               setData(easy_9, data9_ans);
               break;
          case 10:
               cout << "\tEasy Sudoku 10" << endl;
               setData(easy_10, data10_ans);
               break;
          }
     }
     else if (level == 3) {
          switch (data_set) //chooses one of the data sets at random
          {
          case 1:
               cout << "\tMedium Sudoku 1" << endl;
               setData(medium_1, data1_ans);
               break;
          case 2:
               cout << "\tMedium Sudoku 2" << endl;
               setData(medium_2, data2_ans);
               break;
          case 3:
               cout << "\tMedium Sudoku 3" << endl;
               setData(medium_3, data3_ans);
               break;
          case 4:
               cout << "\tMedium Sudoku 4" << endl;
               setData(medium_4, data4_ans);
               break;
          case 5:
               cout << "\tMedium Sudoku 5" << endl;
               setData(medium_5, data5_ans);
               break;
          case 6:
               cout << "\tMedium Sudoku 6" << endl;
               setData(medium_6, data6_ans);
               break;
          case 7:
               cout << "\tMedium Sudoku 7" << endl;
               setData(medium_7, data7_ans);
               break;
          case 8:
               cout << "\tMedium Sudoku 8" << endl;
               setData(medium_8, data8_ans);
               break;
          case 9:
               cout << "\tMedium Sudoku 9" << endl;
               setData(medium_9, data9_ans);
               break;
          case 10:
               cout << "\tMedium Sudoku 10" << endl;
               setData(medium_10, data10_ans);
               break;
          }
     }
     else if (level == 4) {
          switch (data_set) //chooses one of the data sets at random
          {
          case 1:
               cout << "\tHard Sudoku 1" << endl;
               setData(hard_1, data1_ans);
               break;
          case 2:
               cout << "\tHard Sudoku 2" << endl;
               setData(hard_2, data2_ans);
               break;
          case 3:
               cout << "\tHard Sudoku 3" << endl;
               setData(hard_3, data3_ans);
               break;
          case 4:
               cout << "\tHard Sudoku 4" << endl;
               setData(hard_4, data4_ans);
               break;
          case 5:
               cout << "\tHard Sudoku 5" << endl;
               setData(hard_5, data5_ans);
               break;
          case 6:
               cout << "\tHard Sudoku 6" << endl;
               setData(hard_6, data6_ans);
               break;
          case 7:
               cout << "\tHard Sudoku 7" << endl;
               setData(hard_7, data7_ans);
               break;
          case 8:
               cout << "\tHard Sudoku 8" << endl;
               setData(hard_8, data8_ans);
               break;
          case 9:
               cout << "\tHard Sudoku 9" << endl;
               setData(hard_9, data9_ans);
               break;
          case 10:
               cout << "\tHard Sudoku 10" << endl;
               setData(hard_10, data10_ans);
               break;
          }
     }
     game_play(); //initiates the game play after the above if and switch statement set the appripriate data
}

int Sudoku::welcome_screen() {
     int choice;
     int level;

     cout << "+----------------------------------+" << endl;
     cout << "|              SUDOKU              |" << endl;
     cout << "+----------------------------------+" << endl;
     cout << "        start : 1 || quit : 0       " << endl;

     do {
          cout << ": ";
          cin >> choice;
          if (choice == 0) { //quits the game
               cout << "\t**Thank you for playing Sudoku!**" << endl;
               return 0;
          }
          else if (choice != 1) //prompts the user to enter a valid input
               cout << "\t**Please enter a valid input!**" << endl;
     } while (choice != 1);

     cout << "Chose your level (quit : 0) : \n"
          << "\t1 beginner \t2 easy \n\t3 medium \t4 hard" << endl; //prompts the user to enter a difficulty level
     do {
          cout << ": ";
          cin >> level;

          if (level > 0 && level < 5) //returns the level if the input is valid
               return level;
          else if (level == 0) {
               cout << "\t**Thank you for playing Sudoku!**" << endl;
               return -1;
          }
          else
               cout << "\t**Please enter a valid input!**" << endl;
     } while (1);
}

void Sudoku::print(int arr[][9]) //the print function with the parameter being the array to be printed
{
     for (int i = 0; i < 9; i++) { //row starts from 1 elsewhere in the code which makes it easier for the user to comprehend the game
          for (int j = 0; j < 9; j++) { //column starts from 1 elsewhere in the code which makes it easier for the user to comprehend the game
               if (arr[i][j] == 0) cout << "? "; //? is printed for the values to be input by the player
               else cout << arr[i][j] << " ";
          }
          cout << endl;
     }
}

bool Sudoku::judge_end() // judge if it is the right answer.
{
     for (int i = 0; i < 9; i++) {
          for (int j = 0; j < 9; j++) {
               if (current[i][j] != solution[i][j])
                    return false;
          }
     }
     return true;
}

void Sudoku::game_play() {
     int score = 100, errorNum = 0, row = 0, col = 0, numberToInsert = 0;
     bool right;

     print(current);
     while (!judge_end() && score > 40) {
          cout << "where do you want to insert: (<row> space <column>)" << endl;
          do {
               right = true;
               cout << "\t: ";
               cin >> row >> col;
               if (!(1 <= row <= 9) || !(1 <= col <= 9)) {
                    cout << "\t**please re-enter row and column**\n";
                    right = false;
               }
               if (current[row - 1][col - 1] != 0) {
                    cout << "\t**please re-enter row and column**\n";
                    right = false;
               }
          } while (!right);

          cout << "input number : ";
          do {
               cin >> numberToInsert;
          } while (numberToInsert < 1 || numberToInsert > 9);

          current[row - 1][col - 1] = numberToInsert;
          if (current[row - 1][col - 1] == solution[row - 1][col - 1]) {
               cout << "\tright answer. keep going." << endl;
               cout << "\tscore = " << score << endl << endl; // display the current score
               print(current);
               cout << endl;
          }
          else {
               cout << "\twrong answer. 5 points deducted." << endl;
               score -= 5;
               errorNum += 1; //keeping track of the number of errors
               cout << "\tscore = " << score << endl << endl;
               current[row - 1][col - 1] = 0;
               print(current);
               cout << endl;
          }
     }

     if (score >= 40)
          cout << "\t***YOU WIN***" << endl;
     else
          cout << "\t***YOU LOST***" << endl;

     cout << "\tYou made " << errorNum << " mistakes!" << endl;

     if (score == 100) cout << "Excellent game. You should try the next level!" << endl;
     else if (80 <= score < 100) cout << "Good game. Practice this level a bit more before you move to the next!" << endl;
     else if (60 <= score < 80) cout << "Ok game. You should practice previous levels before you do this again!" << endl;
     else if (40 <= score < 60) cout << "Poor game. Move to a lower level and practice better!" << endl;

     ofstream outScore("score.txt"); //export the score to a external file
     outScore << score;
     outScore.close();

     ofstream outMistakes("mistakes.txt"); //export the number of mistakes to a external file
     outMistakes << errorNum;
     outMistakes.close();
}