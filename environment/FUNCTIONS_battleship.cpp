//(Global varibles)//
  int dificalty;
  string inp_col;
  int imp_row;
  int point_col;
  int point_row;
  int player_hits = 0;
  int comp_hits = 0;
  char turn;
  int Board[][];
  int player_Board[][]; 
  int comp_Board[][];
  char Play_Board_P[][];
  char Play_Board_C[][];
  int num_row;
  int num_col;
  bool play_win = false;
  bool comp_win = false;
  
  // refrence fuctions //
  
  void E_MAP_1();
  void E_MAP_2();
  void E_MAP_3();
  void E_MAP_4();
  void E_MAP_5();
  void E_MAP_6();
  void M_MAP_1();
  void M_MAP_2();
  void M_MAP_3();
  void M_MAP_4();
  void M_MAP_5();
  void M_MAP_6();
  void H_MAP_1();
  void H_MAP_2();
  void H_MAP_3();
  void H_MAP_4();
  void H_MAP_5();
  void H_MAP_6();
  void SELECT_BOARD();
  
  // refrence fuctions //
  
void DIFICULTY(){
  string inp_dif;
  cout << "Welcome to Battleship!" << endl;
  cout << "What dificalty do you want to play in? (E|M|H)" << endl;
  cin >> imp_dif;
  if (imp_dif = "E" || imp_dif = "e"){
    num_col = 5;
    num_row = 5;
    select_board_e();
  }
  else if (imp_dif = "M" || imp_dif = "m"){
    num_col = 6;
    num_row = 6;
    select_board_m()
  }
  else if (imp_dif = "H" || imp_dif = "h"){
    num_col = 7;
    num_row = 7;
    select_board_h()
  }
  
}
  
void DISPLY_BOARD() {
	cout << "computer Board" << endl;
	for (int Y = 0; Y < col ; ++Y){
		for (int X = 0; X < col ; ++X){
			cout << comp_Board[Y][X] << " ";
		}
		cout << endl;
	}
	cout << "Play_Board" << endl;
	for (int Y = 0; Y < col ; ++Y){
		for (int X = 0; X < col ; ++X){
			cout << play_Board[Y][X] << " ";
		}
		cout << endl;
	}
	
}
void CONVERTER(){
  // Converst (letter , number) to (X,Y) //
  if (imp_col == "A" || imp_col == "a")
    point_col = 0;
  else if(imp_col == "B" || imp_col == "b")
    point_col = 1;
  else if(imp_col == "C" || imp_col == "c")
    point_col = 2;
  else if(imp_col == "D" || imp_col == "d")
    point_col = 3;
  else if(imp_col == "E" || imp_col == "e")
    point_col = 4;
  else if(imp_col == "F" || imp_col == "f")
    point_col = 5;
  else if(imp_col == "G" || imp_col == "g")
    point_col = 6;

    if (imp_row == 1)
      point_row = 0;
    else if (imp_row == 2)
      point_row = 1;
    else if (imp_row == 3)
      point_row = 2;
    else if (imp_row == 4)
      point_row = 3;
    else if (imp_row == 5)
      point_row = 4;
    else if (imp_row == 6)
      point_row = 5;
    else if (imp_row == 7)
      point_row = 6;
    else
      cout << "Out of Range" << endl;
  
  
  cout << imp_col << "," << imp_row << " = " << point_col << "," << point_row << endl;
  
  }


void CHECK_HIT(){
  // take point //
  // if point == 1 then hit + check for win//
  // else if point == 0 then miss//
  if(turn == 'p'){
    if (player_Board[point_col][point_row] = 0){
      cout << "Miss" << endl;
      
    }
    else if (player_Board[point_col][point_row] = 1){
      cout << 
      player_hits += 1;
      //check_win//
    }
    
  }
  else if (turn == 'c'){
    if (comp_Board[point_col][point_row] = 0){
      cout <<
    }
    else if (comp_Board[point_col][point_row] = 1){
      cout << 
      comp_hits += 1;
      //check_win//
    }
    
  }


}
void PLAYER_TURN(){
  /*loop{
        get player imput
        check for repet
      }
      convert to (X,Y)
      check for hit
      if hit {
        check for sink
        if sink{
          check for win
        }
      }
      */
      turn = 'P'
      cout << "What comlumn do you want to select?" << endl;
      cin >> imp_col;
      
      cout << "What row do you want to selct?" << endl;
      cin >> imp_row;
      
      CONVERTER();
      
      CHECK_HIT();
      
}

[COMPUTER TURN]{
   loop{
        get RNG Point
        check for repet
      }
      check for hit
      if hit {
        check for sink
        if sink{
          check for win
        }
      } 
}

[CHECH WIN]{
  // Uses boolion //
  // outputs if player or computer wins//
}

int main(){
  DIFICALYT();
  chose boards
  do{ 
    display board
    player turn
    computer turn
    check for win
    refresh boar
  } while (play_win = false && comp_win = false)
  display win
  return 0
}


void SELECT_BOARD(){
  for (int Y = 0; Y < col ; ++Y){
		for (int X = 0; X < col ; ++X){
			Play_Board[Y][X] " *";
		}
	}
	
} 

  
void E_MAP_1(){
  Board[5][5] =  {{1, 1, 0, 0, 1},
                  {0, 0, 0, 0, 1},
                  {0, 1, 0, 0, 1},
                  {0, 1, 0, 0, 1},
                  {0, 1, 0, 0, 0}};
  Battleship
}
void E_MAP_2(){
  Board[5][5]=  {{0, 0, 0, 1, 0},
                 {0, 0, 0, 1, 0},
                 {1, 1, 0, 1, 0},
                 {0, 0, 0, 0, 0},
                 {0, 1, 1, 1, 1}}; 
}
void E_MAP_3(){
  Board[5][5]= {{0, 0, 0, 0, 0},
                {0, 1, 1, 1, 1},
                {0, 0, 0, 0, 0},
                {0, 0, 0, 0, 1},
                {1, 1, 1, 0, 1}};
}
void E_MAP_4(){
  Board[5][5]=  {{0, 1, 0, 1, 0},
                 {0, 1, 0, 1, 0},
                 {0, 0, 0, 1, 0},
                 {0, 0, 0, 0, 0},
                 {0, 1, 1, 1, 1}};
}
void E_MAP_5(){
  Board[5][5]=  {{1, 1, 1, 1, 0},
                 {0, 0, 0, 0, 0},
                 {0, 1, 0, 0, 0},
                 {0, 1, 0, 0, 0},
                 {0, 1, 0, 1, 1}}; 
}
void E_MAP_6(){
  Board[5][5]= {{1, 0, 0, 0, 0},
                {1, 0, 0, 0, 1},
                {1, 0, 1, 0, 1},
                {0, 0, 1, 0, 1},
                {0, 0, 0, 0, 1}};
}
  
  // Easy Maps //
  // Medium Maps //
  
void M_MAP_1(){
  Board[6][6]=  {{0, 0, 0, 0, 1, 0},
                 {0, 1, 1, 0, 1, 0},
                 {0, 0, 0, 0, 1, 0},
                 {0, 0, 0, 0, 1, 0},
                 {0, 0, 0, 0, 0, 0},
                 {0, 1, 1, 1, 0, 0}};
}
void M_MAP_2(){
  Board[6][6]=  {{0, 0, 0, 0, 0, 1},
                 {0, 0, 0, 0, 0, 1},
                 {0, 0, 0, 0, 0, 0},
                 {0, 1, 1, 1, 1, 0},
                 {0, 0, 0, 0, 0, 0},
                 {0, 0, 0, 1, 1, 1}};
}
void M_MAP_3(){
  Board[6][6]= {{0, 0, 0, 0, 0, 0},
                {0, 0, 1, 1, 1, 1},
                {0, 0, 1, 0, 0, 0},
                {0, 0, 1, 0, 0, 0},
                {0, 0, 1, 0, 1, 1},
                {0, 0, 0, 0, 0, 0}};
}
void M_MAP_4(){
  Board[6][6]=  {{0, 0, 0, 1, 0, 0},
                 {0, 1, 0, 1, 0, 0},
                 {0, 1, 0, 1, 0, 0},
                 {0, 0, 0, 0, 0, 0},
                 {0, 0, 1, 1, 1, 1},
                 {0, 0, 0, 0, 0, 0}};
}
void M_MAP_5(){
  Board[6][6]=  {{0, 0, 0, 1, 1, 1},
                 {0, 0, 0, 0, 0, 0},
                 {0, 0, 1, 0, 0, 0},
                 {0, 0, 1, 0, 0, 0},
                 {0, 0, 1, 0, 1, 1},
                 {0, 0, 1, 0, 0, 0}};
}
void M_MAP_6(){
  Board[6][6]= {{0, 0, 0, 1, 1, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 1, 1, 1, 1},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 1, 1, 1, 0}};
}
  
  // Medium Maps //
  // Hard Maps //
  
void H_MAP_1(){
  Board[7][7]=  {{0, 0, 0, 0, 0, 0, 0},
                 {0, 0, 0, 0, 0, 0, 0},
                 {0, 1, 1, 1, 1, 0, 0},
                 {0, 0, 0, 0, 0, 0, 0},
                 {0, 0, 0, 0, 1, 0, 0},
                 {0, 0, 0, 0, 1, 0, 0},
                 {0, 1, 1, 0, 1, 0, 0}};
}
void H_MAP_2(){
  Board[7][7]=  {{0, 0, 1, 0, 0, 0, 0},
                 {0, 0, 1, 0, 0, 0, 0},
                 {0, 0, 1, 0, 0, 0, 0},
                 {0, 0, 1, 0, 0, 0, 0},
                 {0, 0, 0, 0, 1, 1, 1},
                 {0, 0, 0, 0, 0, 0, 0},
                 {0, 0, 0, 1, 1, 0, 0}};
}
void H_MAP_3(){
  Board[7][7]= {{0, 1, 0, 0, 0, 0, 0},
                {0, 1, 0, 0, 0, 0, 0},
                {0, 1, 0, 0, 0, 0, 0},
                {0, 0, 0, 1, 1, 1, 1},
                {0, 0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 1, 1, 0}};
}
void H_MAP_4(){
  Board[7][7]=  {{1, 1, 0, 0, 0, 0, 0},
                 {0, 0, 0, 0, 0, 1, 0},
                 {0, 0, 0, 0, 0, 1, 0},
                 {0, 0, 0, 0, 0, 1, 0},
                 {0, 0, 0, 0, 0, 0, 0},
                 {0, 1, 1, 1, 1, 0, 0},
                 {0, 0, 0, 0, 0, 0, 0}};
}
void H_MAP_5(){
  Board[7][7]=  {{0, 0, 0, 0, 0, 0, 0},
                 {0, 0, 0, 0, 0, 0, 0},
                 {1, 1, 1, 0, 0, 0, 0},
                 {0, 0, 0, 0, 1, 0, 0},
                 {0, 0, 0, 0, 1, 0, 1},
                 {0, 0, 0, 0, 1, 0, 1},
                 {0, 0, 0, 0, 1, 0, 0}};
}
void H_MAP_6(){
  Board[7][7]= {{0, 0, 0, 0, 0, 0, 0},
                {0, 0, 0, 1, 1, 1, 0},
                {0, 0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0, 1},
                {0, 0, 1, 1, 0, 0, 1},
                {0, 0, 0, 0, 0, 0, 1},
                {0, 0, 0, 0, 0, 0, 1}};
}
  // Hard Maps //
