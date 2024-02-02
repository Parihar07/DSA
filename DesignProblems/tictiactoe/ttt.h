#ifndef TIC_TAC_TOE_HH
#define TIC_TAC_TOE_HH

#include<iostream>
#include<string>
#include<vector>

using namespace std;
enum BotDifficultyLevel {
  EASY,
  MEDIUM,
  HARD
};

enum PlayerType {
  HUMAN,
  BOT
};

enum GameStatus {
  DRAW,
  ENDED,
  IN_PROGRESS
};

enum CellState {
  EMPTY,
  FILLED
};

class Player {
  string name;
  char symbol;
  PlayerType ptype;
public:
  Player() :name(NULL), symbol(0), ptype(BOT) {};
  Player(string n, char s, PlayerType t) :name(n), symbol(s), ptype(t) {};

  char getSymbol() { return symbol; }
  void setSymbol(char s) { symbol = s; }

  string getName() { return name; }
  void setName(string n) { name = n; }

  PlayerType getPlayerType() { return ptype; };
  void setPlayerType(PlayerType pt) { ptype = pt; };
};
class Game {
public:
  Game() {}
  Player getWinner() { return winner; }
  int getNextPlayerIndex() { return nxtPlayerIndex; }
  GameStatus getGameStatus() { return gameStatus; }
  list<Move> getMoves() { return moves; }
  list<Player> getPlayers() { return playersList; }

  void setWinner(Player w) { winner = w; }
  void setNextPlayerIndex(int i) { nxtPlayerIndex = i; }
  void setGameStatus(GameStatus gs) { gameStatus = gs; }
  void setMoves(list<Move> l) { moves = l; }
  void setPlayers(list<Player> pl) { playersList = pl; }
private:
  Board board;
  list<Player> playersList;
  list<Move> moves;
  GameStatus gameStatus;
  int nxtPlayerIndex;
  Player winner;
};
class Board {
public:
  Board(int d){
	vector<Cell*> l;
	for (int i = 0; i < d; i++)
	{
	  for (int j = 0; j < d; j++)
	  {
		l.push_back(new Cell(i, j));
	  }
	}
	  board.push_back(l);
  }

  void displayBoard() {
	for (int i = 0; i < board.size(); i++)
	{
	  for (int j = 0; j < board.size(); j++)
	  {
		if () {

		}
	  }

	}
  }
  vector<vector<Cell*>> getBoard() { return board; }
  void getBoard(vector<vector<Cell*>> b) { board=b; }

private:
  vector<vector<Cell*>> board;
};
class Bot :public Player {
public:
  Bot(char symbol, string n, BotDifficultyLevel level) :Player(n, symbol, BOT) {}
  BotDifficultyLevel getBotDifficultyLevel() { return botdiffLevel; }
  void setBotDifficultyLevel(BotDifficultyLevel bdl) { botdiffLevel=bdl; }
private:
  BotDifficultyLevel botdiffLevel;
};
class Cell {
public:
  Cell(int r, int c, CellState cst=EMPTY) :row(c), col(c){}
  Player getPlayer() { return player; }
  int getRow() { return row; }
  int getCol() { return col; }
  CellState getCellState() { return cs; }

  void setPlayer(Player pl) { player = pl; }
  void setRow(int r) { row = r; }
  void  getCol(int c) { col = c; }
  void getCellState(CellState cst) { cs = cst; }

private:
  Player player;
  int row;
  int col;
  CellState cs;
};
class Move {
public:
  Move(Player p, Cell c) :player(p), cell(c) {}

  Player getPlayer() { return player; }
  Cell getCell() { return cell; }

  void setPlayer(Player p) { player = p; }
  void setCell(Cell c) { cell = c; };
private:
  Player player;
  Cell cell;
};

#endif // !TIC_TAC_TOE_HH
