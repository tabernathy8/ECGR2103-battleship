/* 
 * Group Name: Team.cpp
 * Group Members: -Tanner Abernathy
 *                -Brian Lewis
 *                -Howard Williams
 *                -James Tallett
 * Program: battleship_final.cpp
 * Version: 0.02
 * 
 */
 
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;


/* 
 * NOTE:
 * arrayName[ROW][COLUMN]
 */
  int point_row;
  int point_col;

//Easy Board Function
void easyBoard(int board[5][5], int comp[5][5]) 
{
  cout << " \tYOUR BOARD:" << endl << endl;
  cout << " \tA\tB\tC\tD\tE\t" << endl << endl;
  for(int a = 0; a < 5; a++)
  {
      cout << (a+1) << "\t";
      for(int j = 0; j < 5; j++)
      {
          if(board[a][j] == 0)
          {
            cout << "*\t";
          } else if(board[a][j] == 1)
          {
            cout << "M\t";
          } else if(board[a][j] == 2)
          {
            cout << "H\t";
          }
      }
      cout << endl << endl;
  }
  
  cout << " \tCOMP BOARD:" << endl << endl;
  cout << " \tA\tB\tC\tD\tE\t" << endl << endl;
  for(int a = 0; a < 5; a++)
  {
      cout << (a+1) << "\t";
      for(int j = 0; j < 5; j++)
      {
          if(comp[a][j] == 0)
          {
            cout << "*\t";
          } else if(comp[a][j] == 1)
          {
            cout << "M\t";
          } else if(comp[a][j] == 2)
          {
            cout << "H\t";
          }
      }
      cout << endl << endl;
  }
  return;
}

//Medium Board Function (Incomplete)
void medBoard(int board[6][6], int comp[6][6]) 
{
  cout << " \tYOUR BOARD:" << endl << endl;
  cout << " \tA\tB\tC\tD\tE\tF\t" << endl << endl;
  for(int a = 0; a < 6; a++)
  {
      cout << (a+1) << "\t";
      for(int j = 0; j < 6; j++)
      {
          if(board[a][j] == 0)
          {
            cout << "*\t";
          } else if(board[a][j] == 1)
          {
            cout << "M\t";
          } else if(board[a][j] == 2)
          {
            cout << "H\t";
          }
      }
      cout << endl << endl;
  }
  
  cout << " \tCOMP BOARD:" << endl << endl;
  cout << " \tA\tB\tC\tD\tE\tF\t" << endl << endl;
  for(int a = 0; a < 6; a++)
  {
      cout << (a+1) << "\t";
      for(int j = 0; j < 6; j++)
      {
          if(comp[a][j] == 0)
          {
            cout << "*\t";
          } else if(comp[a][j] == 1)
          {
            cout << "M\t";
          } else if(comp[a][j] == 2)
          {
            cout << "H\t";
          }
      }
      cout << endl << endl;
  }
  return;
}

//Hard Board Function
void hardBoard(int board[7][7], int comp[7][7]) 
{
  cout << " \tYOUR BOARD:" << endl << endl;
  cout << " \tA\tB\tC\tD\tE\tF\tG\t" << endl << endl;
  for(int a = 0; a < 7; a++)
  {
      cout << (a+1) << "\t";
      for(int j = 0; j < 7; j++)
      {
          if(board[a][j] == 0)
          {
            cout << "*\t";
          } else if(board[a][j] == 1)
          {
            cout << "M\t";
          } else if(board[a][j] == 2)
          {
            cout << "H\t";
          }
      }
      cout << endl << endl;
  }
  
  cout << " \tCOMP BOARD:" << endl << endl;
  cout << " \tA\tB\tC\tD\tE\tF\tG\t" << endl << endl;
  for(int a = 0; a < 7; a++)
  {
      cout << (a+1) << "\t";
      for(int j = 0; j < 7; j++)
      {
          if(comp[a][j] == 0)
          {
            cout << "*\t";
          } else if(comp[a][j] == 1)
          {
            cout << "M\t";
          } else if(comp[a][j] == 2)
          {
            cout << "H\t";
          }
      }
      cout << endl << endl;
  }
  return;
}

//Function for Column input
void input()
{
  string cLetter;
  int c;
  
  cout << "What is your guess?" << endl;
  cout << "COLUMN (LETTER):" << endl;
  cin >> cLetter;
  if (cLetter == "A" || cLetter == "a")
  {
    point_col = 0;
  } else if (cLetter == "B" || cLetter == "b")
  {
    point_col = 1;
  } else if (cLetter == "C" || cLetter == "c")
  {
    point_col = 2;
  } else if (cLetter == "D" || cLetter == "d")
  { 
    point_col = 3;
  } else if (cLetter == "E" || cLetter == "e" )
  {
    point_col = 4;
  } else if (cLetter == "F" || cLetter == "f")
  {
    point_col = 5;
  } else if (cLetter == "G" || cLetter == "g")
  {
    point_col = 6;
  }
  
  
  cout << "ROW (NUMBER):" << endl;
  cin >> point_row;
  
  while(point_row > 7 || point_row < 1)
  {
    
  cout << "INVALID INPUT, TRY AGAIN" << endl << endl;
  cout << "ROW (NUMBER):" << endl;
  cin >> point_row;
  
  }
  
  point_row = point_row - 1;
  return;
}






//Main Function
main() {
  srand(time(NULL));
  bool inGame = true;
  int board = rand() % 3 + 1;
  string colLetter;
  int row;
  int col;
  int over;
  int compRow;
  int compCol;
  bool subSunk = false;
  bool battSunk = false;
  bool destSunk = false;
  bool subSunkC = false;
  bool battSunkC = false;
  bool destSunkC = false;
  string hold;


  //Arrays


  //EASY DIFFICULTY:
  //PLAYER BOARDS (For player to guess on)
  int pOneEsyOne[5][5]=  {{1, 1, 0, 0, 1},
                          {0, 0, 0, 0, 1},
                          {0, 1, 0, 0, 1},
                          {0, 1, 0, 0, 1},
                          {0, 1, 0, 0, 0}};
                          
  int pOneEsyTwo[5][5]=  {{0, 0, 0, 1, 0},
                          {0, 0, 0, 1, 0},
                          {1, 1, 0, 1, 0},
                          {0, 0, 0, 0, 0},
                          {0, 1, 1, 1, 1}};     
                          
  int pOneEsyThre[5][5]= {{0, 0, 0, 0, 0},
                          {0, 1, 1, 1, 1},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 1},
                          {1, 1, 1, 0, 1}};
                          
                          
  //COMPUTER BOARDS (For computer to guess on)
  int compEsyOne[5][5]=  {{0, 1, 0, 1, 0},
                          {0, 1, 0, 1, 0},
                          {0, 0, 0, 1, 0},
                          {0, 0, 0, 0, 0},
                          {0, 1, 1, 1, 1}};
                          
  int compEsyTwo[5][5]=  {{1, 1, 1, 1, 0},
                          {0, 0, 0, 0, 0},
                          {0, 1, 0, 0, 0},
                          {0, 1, 0, 0, 0},
                          {0, 1, 0, 1, 1}};     
                          
  int compEsyThre[5][5]= {{1, 0, 0, 0, 0},
                          {1, 0, 0, 0, 1},
                          {1, 0, 1, 0, 1},
                          {0, 0, 1, 0, 1},
                          {0, 0, 0, 0, 1}};    
  /*
   * Easy Difficulty inPlay Boards
   *
   * inPlay Board Key:
   * 0 = no chosen;
   * 1 = miss;
   * 2 = hit;
   */
                          
  int inPlayEasy[5][5]=  {{0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0}};
                          
  int inPlayEasyC[5][5]= {{0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0}};
                          
                          
  //Medium Boards
  //PLAYER BOARDS (For player to guess on)         
                          
  int pOneMedOne[6][6]=  {{0, 0, 0, 0, 1, 0},
                          {0, 1, 1, 0, 1, 0},
                          {0, 0, 0, 0, 1, 0},
                          {0, 0, 0, 0, 1, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 1, 1, 1, 0, 0}};
                          
  int pOneMedTwo[6][6]=  {{0, 0, 0, 0, 0, 1},
                          {0, 0, 0, 0, 0, 1},
                          {0, 0, 0, 0, 0, 0},
                          {0, 1, 1, 1, 1, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 1, 1, 1}};
                          
  int pOneMedThre[6][6]= {{0, 0, 0, 0, 0, 0},
                          {0, 0, 1, 1, 1, 1},
                          {0, 0, 1, 0, 0, 0},
                          {0, 0, 1, 0, 0, 0},
                          {0, 0, 1, 0, 1, 1},
                          {0, 0, 0, 0, 0, 0}};
                          
  //COMPUTER BOARDS (For computer to guess on)         
  /*
   * These boards HAVE BEEN CHANGED AND ARE GOOD
   */
   
  int compMedOne[6][6]=  {{0, 0, 0, 1, 0, 0},
                          {0, 1, 0, 1, 0, 0},
                          {0, 1, 0, 1, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 1, 1, 1, 1},
                          {0, 0, 0, 0, 0, 0}};
                          
  int compMedTwo[6][6]=  {{0, 0, 0, 1, 1, 1},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 1, 0, 0, 0},
                          {0, 0, 1, 0, 0, 0},
                          {0, 0, 1, 0, 1, 1},
                          {0, 0, 1, 0, 0, 0}};
                          
  int compMedThre[6][6]= {{0, 0, 0, 1, 1, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 1, 1, 1, 1},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 1, 1, 1, 0}};
   
   
  /*
   * Medium Difficulty inPlay Boards
   *
   * inPlay Board Key:
   * 0 = no chosen;
   * 1 = miss;
   * 2 = hit;
   */
                          
  int inPlayMed[6][6]=   {{0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0}};
                          
  int inPlayMedC[6][6]=  {{0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0}};
                          
                          
  //HARD BOARDS:
  //Player boards (For Player to guess on)
                          
  int pOneHardOne[7][7]=  {{0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 1, 1, 1, 1, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 1, 0, 0},
                          {0, 0, 0, 0, 1, 0, 0},
                          {0, 1, 1, 0, 1, 0, 0}};
                          
  int pOneHardTwo[7][7]=  {{0, 0, 1, 0, 0, 0, 0},
                          {0, 0, 1, 0, 0, 0, 0},
                          {0, 0, 1, 0, 0, 0, 0},
                          {0, 0, 1, 0, 0, 0, 0},
                          {0, 0, 0, 0, 1, 1, 1},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 1, 1, 0, 0}};
                          
  int pOneHardThre[7][7]= {{0, 1, 0, 0, 0, 0, 0},
                          {0, 1, 0, 0, 0, 0, 0},
                          {0, 1, 0, 0, 0, 0, 0},
                          {0, 0, 0, 1, 1, 1, 1},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 1, 1, 0}};
                          
  //COMPUTER BOARDS (For computer to guess on)         
  /*
   * These boards are fixed
   */                       
  int compHardOne[7][7]=  {{1, 1, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 1, 0},
                          {0, 0, 0, 0, 0, 1, 0},
                          {0, 0, 0, 0, 0, 1, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 1, 1, 1, 1, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0}};
                          
  int compHardTwo[7][7]=  {{0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {1, 1, 1, 0, 0, 0, 0},
                          {0, 0, 0, 0, 1, 0, 0},
                          {0, 0, 0, 0, 1, 0, 1},
                          {0, 0, 0, 0, 1, 0, 1},
                          {0, 0, 0, 0, 1, 0, 0}};
                          
  int compHardThre[7][7]= {{0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 1, 1, 1, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 1},
                          {0, 0, 1, 1, 0, 0, 1},
                          {0, 0, 0, 0, 0, 0, 1},
                          {0, 0, 0, 0, 0, 0, 1}};
   
 
   /*
   * Hard Difficulty inPlay Boards
   *
   * inPlay Board Key:
   * 0 = no chosen;
   * 1 = miss;
   * 2 = hit;
   */
                          
  int inPlayHard[7][7]=   {{0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0}};
                          
  int inPlayHardC[7][7]=  {{0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0},
                          {0, 0, 0, 0, 0, 0, 0}};
 
 
 
 //Difficulty Variables
  string difficulty;
  int dif;
  
  //Introduction
  cout << "Welcome to Battleship!" << endl;
  //Delay Loop
  for (time_t t = time(0) + 2; time(0) < t; ) {} 
  cout << "Please choose your difficulty by typing 'e' for easy, 'm' for medium, and 'h' for hard." << endl;
  cin >> difficulty;
  cout << endl;
  //End Introduction
  
  //Convert Dificulty String input to int
  if (difficulty == "e")
  {
      dif = 1;
      cout << string(50, '\n');
      cout << "You have chosen Easy as your difficulty." << endl;
      for (time_t t = time(0) + 2; time(0) < t; ) {} 
      cout << string(50, '\n');
      
  } else if (difficulty == "m")
  {
      dif = 2;
      cout << string(50, '\n');
      cout << "You have chosen Medium as your difficulty." << endl;
      for (time_t t = time(0) + 2; time(0) < t; ) {}
      cout << string(50, '\n');
      
  } else if (difficulty == "h")
  {
      dif = 3;
      cout << string(50, '\n');
      cout << "You have chosen Hard as your difficulty." << endl;
      for (time_t t = time(0) + 2; time(0) < t; ) {}
      cout << string(50, '\n');
      
  }
  
  switch (dif)
  {
      case 1: // cout << "case 1" << endl;
              
              
                if (board = 3)
                {
                  cout << endl << endl << "BOARD 1" << endl << endl;
                  while(inGame)
                  {
                    
                    //PLAYER CODE
                    easyBoard(inPlayEasy, inPlayEasyC);
                    
                    input();
                    
                    
                    cout << string(50, '\n');
                    
                    if (pOneEsyOne[point_row][point_col] == 1)
                    {
                      cout << endl << "IT'S A HIT!" << endl << endl;
                      inPlayEasy[point_row][point_col] = 2;
                    } else if (pOneEsyOne[point_row][point_col] == 0)
                    {
                      cout << endl << "IT'S A MISS!" << endl << endl;
                      inPlayEasy[point_row][point_col] = 1;
                    }
                  
                    if (inPlayEasy[0][0] == 2 && inPlayEasy[0][1])
                    {
                      cout << "The Computer's Destroyer is sunk" << endl << endl;
                      destSunk = true;
                    }
                    
                    if (inPlayEasy[2][1] == 2 && inPlayEasy[3][1] == 2 && inPlayEasy[4][1] == 2)
                    {
                      cout << "The Computer's Submarine is sunk" << endl << endl;
                      subSunk = true;
                    }
                    
                    if (inPlayEasy[0][4] == 2 && inPlayEasy[1][4] == 2 && inPlayEasy[2][4] == 2 && inPlayEasy[3][4] == 2)
                    {
                      cout << "The Computer's Battleship is sunk" << endl << endl;
                      battSunk = true;
                    }
                    
                    
                    if (battSunk && subSunk && destSunk)
                    {
                      
                      cout << endl << endl << endl << "YOU WIN!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END PLAYER CODE
                    
                    
                    //COMPUTER CODE
                    
                    compCol = rand() % 5;
                    compRow = rand() % 5;
                    
                    if (compEsyOne[compRow][compCol] == 1)
                    {
                      cout << endl << "COMPUTER LANDS A HIT!" << endl << endl;
                      
                      inPlayEasyC[compRow][compCol] = 2;
                    } else if (compEsyOne[compRow][compCol] == 0)
                    {
                      cout << endl << "COMPUTER MISSES!" << endl << endl;
                      inPlayEasyC[compRow][compCol] = 1;
                    }
                    
                    if (inPlayEasyC[0][1] == 2 && inPlayEasyC[1][1])
                    {
                      cout << "Your Destroyer is sunk" << endl << endl;
                      destSunkC = true;
                    }
                    
                    if (inPlayEasyC[2][1] == 2 && inPlayEasyC[3][1] == 2 && inPlayEasyC[4][1] == 2)
                    {
                      cout << "Your Submarine is sunk" << endl << endl;
                      subSunkC = true;
                    }
                    
                    if (inPlayEasyC[4][1] == 2 && inPlayEasyC[4][2] == 2 && inPlayEasyC[4][3] == 2 && inPlayEasyC[4][4] == 2)
                    {
                      cout << "Your Battleship is sunk" << endl << endl;
                      battSunkC = true;
                    }
                    
                    if (battSunkC && subSunkC && destSunkC)
                    {
                      
                      cout << endl << endl << endl << "YOU LOSE!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END COMPUTER CODE
                    
                    
                    
                    //TEMPORARY DEBUGGING, NOT FINAL  
                    /*   cout << "end?" << endl;
                    cin >> over;
                    if (over == 1)
                    {
                      inGame = false;
                    }
                    */
                  }
                  //END OF BOARD 1 CODE
                } else if (board = 2)
                {
                  cout << endl << endl << "BOARD 2" << endl << endl;
                  while(inGame)
                  {
                    
                    //PLAYER CODE
                    easyBoard(inPlayEasy, inPlayEasyC);
                    
                    input();
                    
                    
                    cout << string(50, '\n');
                    
                    if (pOneEsyTwo[point_row][point_col] == 1)
                    {
                      cout << endl << "IT'S A HIT!" << endl << endl;
                      
                      inPlayEasy[point_row][point_col] = 2;
                    } else if (pOneEsyTwo[point_row][point_col] == 0)
                    {
                      cout << endl << "IT'S A MISS!" << endl << endl;
                      inPlayEasy[point_row][point_col] = 1;
                    }
                    
                    
                    if (inPlayEasy[2][0] == 2 && inPlayEasy[2][1])
                    {
                      cout << "The Computer's Destroyer is sunk" << endl << endl;
                      destSunk = true;
                    }
                    
                    if (inPlayEasy[0][3] == 2 && inPlayEasy[1][3] == 2 && inPlayEasy[2][3] == 2)
                    {
                      cout << "The Computer's Submarine is sunk" << endl << endl;
                      subSunk = true;
                    }
                    
                    if (inPlayEasy[4][1] == 2 && inPlayEasy[4][2] == 2 && inPlayEasy[4][3] == 2 && inPlayEasy[4][4] == 2)
                    {
                      cout << "The Computer's Battleship is sunk" << endl << endl;
                      battSunk = true;
                    }
                    
                    
                    if (battSunk)
                    {
                      
                      cout << endl << endl << endl << "YOU WIN!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END PLAYER CODE
                    
                    
                    //COMPUTER CODE
                    
                    compCol = rand() % 5;
                    compRow = rand() % 5;
                    
                    if (compEsyTwo[compRow][compCol] == 1)
                    {
                      cout << endl << "COMPUTER LANDS A HIT!" << endl << endl;
                      
                      inPlayEasyC[compRow][compCol] = 2;
                    } else if (compEsyTwo[compRow][compCol] == 0)
                    {
                      cout << endl << "COMPUTER MISSES!" << endl << endl;
                      inPlayEasyC[compRow][compCol] = 1;
                    }
                    
                    
                    if (inPlayEasyC[4][3] == 2 && inPlayEasyC[4][4])
                    {
                      cout << "Your Destroyer is sunk" << endl << endl;
                      destSunkC = true;
                    }
                    
                    if (inPlayEasyC[2][1] == 2 && inPlayEasyC[3][1] == 2 && inPlayEasyC[4][1] == 2)
                    {
                      cout << "Your Submarine is sunk" << endl << endl;
                      subSunkC = true;
                    }
                    
                    if (inPlayEasyC[0][0] == 2 && inPlayEasyC[0][1] == 2 && inPlayEasyC[0][2] == 2 && inPlayEasyC[0][3] == 2)
                    {
                      cout << "Your Battleship is sunk" << endl << endl;
                      battSunkC = true;
                    }
                    
                    
                    if (battSunkC)
                    {
                      
                      cout << endl << endl << endl << "YOU LOSE!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END COMPUTER CODE
                    
                    
                    
                    //TEMPORARY DEBUGGING, NOT FINAL  
                    /*   cout << "end?" << endl;
                    cin >> over;
                    if (over == 1)
                    {
                      inGame = false;
                    }
                    */
                  }
                  
                } else if (board = 1)
                {
                  cout << endl << endl << "BOARD 3" << endl << endl;
                  while(inGame)
                  {
                    
                    //PLAYER CODE
                    easyBoard(inPlayEasy, inPlayEasyC);
                    
                    input();
                    
                    
                    cout << string(50, '\n');
                    
                    if (pOneEsyThre[point_row][point_col] == 1)
                    {
                      cout << endl << "IT'S A HIT!" << endl << endl;
                      
                      inPlayEasy[point_row][point_col] = 2;
                    } else if (pOneEsyThre[point_row][point_col] == 0)
                    {
                      cout << endl << "IT'S A MISS!" << endl << endl;
                      inPlayEasy[point_row][point_col] = 1;
                    }
                    
                    
                    if (inPlayEasy[3][4] == 2 && inPlayEasy[4][4])
                    {
                      cout << "The Computer's Destroyer is sunk" << endl << endl;
                      destSunk = true;
                    }
                    
                    if (inPlayEasy[4][0] == 2 && inPlayEasy[4][1] == 2 && inPlayEasy[4][2] == 2)
                    {
                      cout << "The Computer's Submarine is sunk" << endl << endl;
                      subSunk = true;
                    }
                    
                    if (inPlayEasy[1][1] == 2 && inPlayEasy[1][2] == 2 && inPlayEasy[1][3] == 2 && inPlayEasy[1][4] == 2)
                    {
                      cout << "The Computer's Battleship is sunk" << endl << endl;
                      battSunk = true;
                    }
                    
                    
                    if (battSunk)
                    {
                      
                      cout << endl << endl << endl << "YOU WIN!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END PLAYER CODE
                    
                    
                    //COMPUTER CODE
                    
                    compCol = rand() % 5;
                    compRow = rand() % 5;
                    
                    if (compEsyThre[compRow][compCol] == 1)
                    {
                      cout << endl << "COMPUTER LANDS A HIT!" << endl << endl;
                      
                      inPlayEasyC[compRow][compCol] = 2;
                    } else if (compEsyThre[compRow][compCol] == 0)
                    {
                      cout << endl << "COMPUTER MISSES!" << endl << endl;
                      inPlayEasyC[compRow][compCol] = 1;
                    }
                    
                    
                    if (inPlayEasyC[2][2] == 2 && inPlayEasyC[3][2])
                    {
                      cout << "Your Destroyer is sunk" << endl << endl;
                      destSunkC = true;
                    }
                    
                    if (inPlayEasyC[0][0] == 2 && inPlayEasyC[1][0] == 2 && inPlayEasyC[2][0] == 2)
                    {
                      cout << "Your Submarine is sunk" << endl << endl;
                      subSunkC = true;
                    }
                    
                    if (inPlayEasyC[1][4] == 2 && inPlayEasyC[2][4] == 2 && inPlayEasyC[3][4] == 2 && inPlayEasyC[4][4] == 2)
                    {
                      cout << "Your Battleship is sunk" << endl << endl;
                      battSunkC = true;
                    }
                    
                    
                    if (battSunkC)
                    {
                      
                      cout << endl << endl << endl << "YOU LOSE!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END COMPUTER CODE
                    
                    
                    
                    //TEMPORARY DEBUGGING, NOT FINAL  
                    /*   cout << "end?" << endl;
                    cin >> over;
                    if (over == 1)
                    {
                      inGame = false;
                    }
                    */
                  }
                }
              
              
                break;
              
              /*
               * The Code from the easy portion of the program
               * needs to be copied and expanded to work with
               * medium and hard below.
               *
               */
              
      case 2: //cout << "case 2" << endl;
             if (board = 3)
                {
                  cout << endl << endl << "BOARD 1" << endl << endl;
                  while(inGame)
                  {
                    
                    //PLAYER CODE
                    medBoard(inPlayMed, inPlayMedC);
                    
                    input();
                    
                    
                    cout << string(50, '\n');
                    
                    if (pOneMedOne[point_row][point_col] == 1)
                    {
                      cout << endl << "IT'S A HIT!" << endl << endl;
                      inPlayMed[point_row][point_col] = 2;
                    } else if (pOneMedOne[point_row][point_col] == 0)
                    {
                      cout << endl << "IT'S A MISS!" << endl << endl;
                      inPlayMed[point_row][point_col] = 1;
                    }
                    
                    if (inPlayMed[1][1] == 2 && inPlayMed[1][2])
                    {
                      cout << "The Computer's Destroyer is sunk" << endl << endl;
                      destSunk = true;
                    }
                    
                    if (inPlayMed[5][1] == 2 && inPlayMed[5][2] == 2 && inPlayMed[5][3] == 2)
                    {
                      cout << "The Computer's Submarine is sunk" << endl << endl;
                      subSunk = true;
                    }
                    
                    if (inPlayMed[0][4] == 2 && inPlayMed[1][4] == 2 && inPlayMed[2][4] == 2 && inPlayMed[3][4] == 2)
                    {
                      cout << "The Computer's Battleship is sunk" << endl << endl;
                      battSunk = true;
                    }
                    
                    if (battSunk && subSunk && destSunk)
                    {
                      
                      cout << endl << endl << endl << "YOU WIN!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END PLAYER CODE
                    
                    
                    //COMPUTER CODE
                    
                    compCol = rand() % 6;
                    compRow = rand() % 6;
                    
                    if (compMedOne[compRow][compCol] == 1)
                    {
                      cout << endl << "COMPUTER LANDS A HIT!" << endl << endl;
                      
                      inPlayMedC[compRow][compCol] = 2;
                    } else if (compMedOne[compRow][compCol] == 0)
                    {
                      cout << endl << "COMPUTER MISSES!" << endl << endl;
                      inPlayMedC[compRow][compCol] = 1;
                    }
                    
                    if (inPlayMedC[1][1] == 2 && inPlayMedC[2][1])
                    {
                      cout << "Your Destroyer is sunk" << endl << endl;
                      destSunkC = true;
                    }
                    
                    if (inPlayMedC[0][3] == 2 && inPlayMedC[1][3] == 2 && inPlayMedC[2][3] == 2)
                    {
                      cout << "Your Submarine is sunk" << endl << endl;
                      subSunkC = true;
                    }
                    
                    if (inPlayMedC[4][2] == 2 && inPlayMedC[4][3] == 2 && inPlayMedC[4][4] == 2 && inPlayMedC[4][5] == 2)
                    {
                      cout << "Your Battleship is sunk" << endl << endl;
                      battSunkC = true;
                    }
                    
                    if (battSunkC && subSunkC && destSunkC)
                    {
                      
                      cout << endl << endl << endl << "YOU LOSE!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END COMPUTER CODE
                    
                    
                    
                    //TEMPORARY DEBUGGING, NOT FINAL  
                    /*   cout << "end?" << endl;
                    cin >> over;
                    if (over == 1)
                    {
                      inGame = false;
                    }
                    */
                  }
                  //END OF BOARD 1 CODE
                } else if (board = 2)
                {
                  cout << endl << endl << "BOARD 2" << endl << endl;
                  while(inGame)
                  {
                    
                    //PLAYER CODE
                    medBoard(inPlayMed, inPlayMedC);
                    
                    input();
                    
                    
                    cout << string(50, '\n');
                    
                    if (pOneMedTwo[point_row][point_col] == 1)
                    {
                      cout << endl << "IT'S A HIT!" << endl << endl;
                      
                      inPlayMed[point_row][point_col] = 2;
                    } else if (pOneMedTwo[point_row][point_col] == 0)
                    {
                      cout << endl << "IT'S A MISS!" << endl << endl;
                      inPlayMed[point_row][point_col] = 1;
                    }
                    
                    
                    if (inPlayMed[0][5] == 2 && inPlayMed[1][5])
                    {
                      cout << "The Computer's Destroyer is sunk" << endl << endl;
                      destSunk = true;
                    }
                    
                    if (inPlayMed[5][3] == 2 && inPlayMed[5][4] == 2 && inPlayMed[5][5] == 2)
                    {
                      cout << "The Computer's Submarine is sunk" << endl << endl;
                      subSunk = true;
                    }
                    
                    if (inPlayMed[3][1] == 2 && inPlayMed[3][2] == 2 && inPlayMed[3][3] == 2 && inPlayMed[3][4] == 2)
                    {
                      cout << "The Computer's Battleship is sunk" << endl << endl;
                      battSunk = true;
                    }
                    
                    
                    if (battSunk)
                    {
                      
                      cout << endl << endl << endl << "YOU WIN!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END PLAYER CODE
                    
                    
                    //COMPUTER CODE
                    
                    compCol = rand() % 6;
                    compRow = rand() % 6;
                    
                    if (compMedTwo[compRow][compCol] == 1)
                    {
                      cout << endl << "COMPUTER LANDS A HIT!" << endl << endl;
                      
                      inPlayMedC[compRow][compCol] = 2;
                    } else if (compMedTwo[compRow][compCol] == 0)
                    {
                      cout << endl << "COMPUTER MISSES!" << endl << endl;
                      inPlayMedC[compRow][compCol] = 1;
                    }
                    
                    
                    if (inPlayMedC[4][4] == 2 && inPlayMedC[4][5])
                    {
                      cout << "Your Destroyer is sunk" << endl << endl;
                      destSunkC = true;
                    }
                    
                    if (inPlayMedC[0][3] == 2 && inPlayMedC[0][4] == 2 && inPlayMedC[0][5] == 2)
                    {
                      cout << "Your Submarine is sunk" << endl << endl;
                      subSunkC = true;
                    }
                    
                    if (inPlayMedC[2][2] == 2 && inPlayMedC[3][2] == 2 && inPlayMedC[4][2] == 2 && inPlayMedC[5][2] == 2)
                    {
                      cout << "Your Battleship is sunk" << endl << endl;
                      battSunkC = true;
                    }
                    
                    
                    if (battSunkC)
                    {
                      
                      cout << endl << endl << endl << "YOU LOSE!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END COMPUTER CODE
                    
                    
                    
                    //TEMPORARY DEBUGGING, NOT FINAL  
                    /*   cout << "end?" << endl;
                    cin >> over;
                    if (over == 1)
                    {
                      inGame = false;
                    }
                    */
                  }
                  
                } else if (board = 1)
                {
                  cout << endl << endl << "BOARD 3" << endl << endl;
                  while(inGame)
                  {
                    
                    //PLAYER CODE
                    medBoard(inPlayMed, inPlayMedC);
                    
                    input();
                    
                    
                    cout << string(50, '\n');
                    
                    if (pOneMedThre[point_row][point_col] == 1)
                    {
                      cout << endl << "IT'S A HIT!" << endl << endl;
                      
                      inPlayMed[point_row][point_col] = 2;
                    } else if (pOneMedThre[point_row][point_col] == 0)
                    {
                      cout << endl << "IT'S A MISS!" << endl << endl;
                      inPlayMed[point_row][point_col] = 1;
                    }
                    
                    
                    if (inPlayMed[4][4] == 2 && inPlayMed[4][5])
                    {
                      cout << "The Computer's Destroyer is sunk" << endl << endl;
                      destSunk = true;
                    }
                    
                    if (inPlayMed[1][3] == 2 && inPlayMed[1][4] == 2 && inPlayMed[1][5] == 2)
                    {
                      cout << "The Computer's Submarine is sunk" << endl << endl;
                      subSunk = true;
                    }
                    
                    if (inPlayMed[1][2] == 2 && inPlayMed[2][2] == 2 && inPlayMed[3][2] == 2 && inPlayMed[4][2] == 2)
                    {
                      cout << "The Computer's Battleship is sunk" << endl << endl;
                      battSunk = true;
                    }
                    
                    
                    if (battSunk)
                    {
                      
                      cout << endl << endl << endl << "YOU WIN!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END PLAYER CODE
                    
                    
                    //COMPUTER CODE
                    
                    compCol = rand() % 6;
                    compRow = rand() % 6;
                    
                    if (compMedThre[compRow][compCol] == 1)
                    {
                      cout << endl << "COMPUTER LANDS A HIT!" << endl << endl;
                      
                      inPlayMedC[compRow][compCol] = 2;
                    } else if (compMedThre[compRow][compCol] == 0)
                    {
                      cout << endl << "COMPUTER MISSES!" << endl << endl;
                      inPlayMedC[compRow][compCol] = 1;
                    }
                    
                    
                    if (inPlayMedC[0][3] == 2 && inPlayMedC[0][4])
                    {
                      cout << "Your Destroyer is sunk" << endl << endl;
                      destSunkC = true;
                    }
                    
                    if (inPlayMedC[5][3] == 2 && inPlayMedC[5][3] == 2 && inPlayMedC[5][4] == 2)
                    {
                      cout << "Your Submarine is sunk" << endl << endl;
                      subSunkC = true;
                    }
                    
                    if (inPlayMedC[3][2] == 2 && inPlayMedC[3][3] == 2 && inPlayMedC[3][4] == 2 && inPlayMedC[3][5] == 2)
                    {
                      cout << "Your Battleship is sunk" << endl << endl;
                      battSunkC = true;
                    }
                    
                    
                    if (battSunkC)
                    {
                      
                      cout << endl << endl << endl << "YOU LOSE!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END COMPUTER CODE
                    
                    
                    
                    //TEMPORARY DEBUGGING, NOT FINAL  
                    /*   cout << "end?" << endl;
                    cin >> over;
                    if (over == 1)
                    {
                      inGame = false;
                    }
                    */
                  }
                }
              break;
              
      case 3: //cout << "case 3" << endl;
            if (board = 3)
                {
                  cout << endl << endl << "BOARD 1" << endl << endl;
                  while(inGame)
                  {
                    
                    //PLAYER CODE
                    hardBoard(inPlayHard, inPlayHardC);
                    
                    input();
                    
                    
                    cout << string(50, '\n');
                    
                    if (pOneHardOne[point_row][point_col] == 1)
                    {
                      cout << endl << "IT'S A HIT!" << endl << endl;
                      inPlayHard[point_row][point_col] = 2;
                    } else if (pOneHardOne[point_row][point_col] == 0)
                    {
                      cout << endl << "IT'S A MISS!" << endl << endl;
                      inPlayHard[point_row][point_col] = 1;
                    }
                    
                    if (inPlayHard[6][1] == 2 && inPlayHard[6][2])
                    {
                      cout << "The Computer's Destroyer is sunk" << endl << endl;
                      destSunk = true;
                    }
                    
                    if (inPlayHard[4][4] == 2 && inPlayHard[5][4] == 2 && inPlayHard[6][4] == 2)
                    {
                      cout << "The Computer's Submarine is sunk" << endl << endl;
                      subSunk = true;
                    }
                    
                    if (inPlayHard[2][1] == 2 && inPlayHard[2][2] == 2 && inPlayHard[2][3] == 2 && inPlayHard[2][4] == 2)
                    {
                      cout << "The Computer's Battleship is sunk" << endl << endl;
                      battSunk = true;
                    }
                    
                    if (battSunk && subSunk && destSunk)
                    {
                      
                      cout << endl << endl << endl << "YOU WIN!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END PLAYER CODE
                    
                    
                    //COMPUTER CODE
                    
                    compCol = rand() % 7;
                    compRow = rand() % 7;
                    
                    if (compHardOne[compRow][compCol] == 1)
                    {
                      cout << endl << "COMPUTER LANDS A HIT!" << endl << endl;
                      
                      inPlayHardC[compRow][compCol] = 2;
                    } else if (compHardOne[compRow][compCol] == 0)
                    {
                      cout << endl << "COMPUTER MISSES!" << endl << endl;
                      inPlayHardC[compRow][compCol] = 1;
                    }
                    
                    if (inPlayHardC[0][0] == 2 && inPlayHardC[0][1])
                    {
                      cout << "Your Destroyer is sunk" << endl << endl;
                      destSunkC = true;
                    }
                    
                    if (inPlayHardC[1][5] == 2 && inPlayHardC[2][5] == 2 && inPlayHardC[3][5] == 2)
                    {
                      cout << "Your Submarine is sunk" << endl << endl;
                      subSunkC = true;
                    }
                    
                    if (inPlayHardC[5][1] == 2 && inPlayHardC[5][2] == 2 && inPlayHardC[5][3] == 2 && inPlayHardC[5][4] == 2)
                    {
                      cout << "Your Battleship is sunk" << endl << endl;
                      battSunkC = true;
                    }
                    
                    if (battSunkC && subSunkC && destSunkC)
                    {
                      
                      cout << endl << endl << endl << "YOU LOSE!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END COMPUTER CODE
                    
                    
                    
                    //TEMPORARY DEBUGGING, NOT FINAL  
                    /*   cout << "end?" << endl;
                    cin >> over;
                    if (over == 1)
                    {
                      inGame = false;
                    }
                    */
                  }
                  //END OF BOARD 1 CODE
                } else if (board = 2)
                {
                  cout << endl << endl << "BOARD 2" << endl << endl;
                  while(inGame)
                  {
                    
                    //PLAYER CODE
                    hardBoard(inPlayHard, inPlayHardC);
                    
                    input();
                    
                    
                    cout << string(50, '\n');
                    
                    if (pOneHardTwo[point_row][point_col] == 1)
                    {
                      cout << endl << "IT'S A HIT!" << endl << endl;
                      
                      inPlayHard[point_row][point_col] = 2;
                    } else if (pOneHardTwo[point_row][point_col] == 0)
                    {
                      cout << endl << "IT'S A MISS!" << endl << endl;
                      inPlayHard[point_row][point_col] = 1;
                    }
                    
                    
                    if (inPlayHard[6][4] == 2 && inPlayHard[6][5])
                    {
                      cout << "The Computer's Destroyer is sunk" << endl << endl;
                      destSunk = true;
                    }
                    
                    if (inPlayHard[4][4] == 2 && inPlayHard[4][5] == 2 && inPlayHard[4][6] == 2)
                    {
                      cout << "The Computer's Submarine is sunk" << endl << endl;
                      subSunk = true;
                    }
                    
                    if (inPlayHard[0][1] == 2 && inPlayHard[1][1] == 2 && inPlayHard[2][1] == 2 && inPlayHard[3][1] == 2)
                    {
                      cout << "The Computer's Battleship is sunk" << endl << endl;
                      battSunk = true;
                    }
                    
                    
                    if (battSunk)
                    {
                      
                      cout << endl << endl << endl << "YOU WIN!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END PLAYER CODE
                    
                    
                    //COMPUTER CODE
                    
                    compCol = rand() % 7;
                    compRow = rand() % 7;
                    
                    if (compHardTwo[compRow][compCol] == 1)
                    {
                      cout << endl << "COMPUTER LANDS A HIT!" << endl << endl;
                      
                      inPlayHardC[compRow][compCol] = 2;
                    } else if (compHardTwo[compRow][compCol] == 0)
                    {
                      cout << endl << "COMPUTER MISSES!" << endl << endl;
                      inPlayHardC[compRow][compCol] = 1;
                    }
                    
                    
                    if (inPlayHardC[4][6] == 2 && inPlayHardC[5][6])
                    {
                      cout << "Your Destroyer is sunk" << endl << endl;
                      destSunkC = true;
                    }
                    
                    if (inPlayHardC[2][0] == 2 && inPlayHardC[2][1] == 2 && inPlayHardC[2][2] == 2)
                    {
                      cout << "Your Submarine is sunk" << endl << endl;
                      subSunkC = true;
                    }
                    
                    if (inPlayHardC[3][4] == 2 && inPlayHardC[4][4] == 2 && inPlayHardC[5][4] == 2 && inPlayHardC[6][4] == 2)
                    {
                      cout << "Your Battleship is sunk" << endl << endl;
                      battSunkC = true;
                    }
                    
                    
                    if (battSunkC)
                    {
                      
                      cout << endl << endl << endl << "YOU LOSE!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END COMPUTER CODE
                    
                    
                    
                    //TEMPORARY DEBUGGING, NOT FINAL  
                    /*   cout << "end?" << endl;
                    cin >> over;
                    if (over == 1)
                    {
                      inGame = false;
                    }
                    */
                  }
                  
                } else if (board = 1)
                {
                  cout << endl << endl << "BOARD 3" << endl << endl;
                  while(inGame)
                  {
                    
                    //PLAYER CODE
                    hardBoard(inPlayHard, inPlayHardC);
                    
                    input();
                    
                    
                    cout << string(50, '\n');
                    
                    if (pOneHardThre[point_row][point_col] == 1)
                    {
                      cout << endl << "IT'S A HIT!" << endl << endl;
                      
                      inPlayHard[point_row][point_col] = 2;
                    } else if (pOneHardThre[point_row][point_col] == 0)
                    {
                      cout << endl << "IT'S A MISS!" << endl << endl;
                      inPlayHard[point_row][point_col] = 1;
                    }
                    
                    
                    if (inPlayHard[6][4] == 2 && inPlayHard[6][5])
                    {
                      cout << "The Computer's Destroyer is sunk" << endl << endl;
                      destSunk = true;
                    }
                    
                    if (inPlayHard[0][1] == 2 && inPlayHard[1][1] == 2 && inPlayHard[2][1] == 2)
                    {
                      cout << "The Computer's Submarine is sunk" << endl << endl;
                      subSunk = true;
                    }
                    
                    if (inPlayHard[3][3] == 2 && inPlayHard[3][4] == 2 && inPlayHard[3][5] == 2 && inPlayHard[3][6] == 2)
                    {
                      cout << "The Computer's Battleship is sunk" << endl << endl;
                      battSunk = true;
                    }
                    
                    
                    if (battSunk)
                    {
                      
                      cout << endl << endl << endl << "YOU WIN!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END PLAYER CODE
                    
                    
                    //COMPUTER CODE
                    
                    compCol = rand() % 7;
                    compRow = rand() % 7;
                    
                    if (compHardThre[compRow][compCol] == 1)
                    {
                      cout << endl << "COMPUTER LANDS A HIT!" << endl << endl;
                      
                      inPlayHardC[compRow][compCol] = 2;
                    } else if (compHardThre[compRow][compCol] == 0)
                    {
                      cout << endl << "COMPUTER MISSES!" << endl << endl;
                      inPlayHardC[compRow][compCol] = 1;
                    }
                    
                    
                    if (inPlayHardC[4][2] == 2 && inPlayHardC[4][3])
                    {
                      cout << "Your Destroyer is sunk" << endl << endl;
                      destSunkC = true;
                    }
                    
                    if (inPlayHardC[1][3] == 2 && inPlayHardC[1][4] == 2 && inPlayHardC[1][5] == 2)
                    {
                      cout << "Your Submarine is sunk" << endl << endl;
                      subSunkC = true;
                    }
                    
                    if (inPlayHardC[3][6] == 2 && inPlayHardC[4][6] == 2 && inPlayHardC[5][6] == 2 && inPlayHardC[6][6] == 2)
                    {
                      cout << "Your Battleship is sunk" << endl << endl;
                      battSunkC = true;
                    }
                    
                    
                    if (battSunkC)
                    {
                      
                      cout << endl << endl << endl << "YOU LOSE!" << endl;
                      cout << "GAME OVER" << endl;
                      break;
                    }
                    //END COMPUTER CODE
                    
                    
                    
                    //TEMPORARY DEBUGGING, NOT FINAL  
                    /*   cout << "end?" << endl;
                    cin >> over;
                    if (over == 1)
                    {
                      inGame = false;
                    }
                    */
                  }
                }
              break;
              
      default: cout << "Try another option!" << endl << endl; 
      
               break;
  }
  
  return 0;
}