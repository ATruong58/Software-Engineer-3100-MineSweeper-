/*
Team 17
Zachary Bax
Edward Koch
Brandon McCurry
Alan Truong
Lucas Winkelman

Minesweeper Implementation
*/
#include <iostream>
#include <ctime>
#include <srand>
using namespace std;

//Board Size: Medium = 16x16
const int BSIZE = 16;
//Number of Bombs: Meduim = 40
const int NBOMBS = 40;

struct Board
{
    char mediumBoard[16][16];
};

void createBoard(Board b);
void addBombs(Board b);
void addNumbers(Board b);

int main()
{

  return 0;
}

void createBoard(Board b)
{
  addBombs(b);
  addNumbers(b);
}

void addBombs(Board b)
{

}

void addNumbers(Board b)
{
  int numBombs = 0;
  for(int x = 0; x < BSIZE; x++)
  {
    for(int y = 0; y < BSIZE; y++)
    {
      //sets the number of surrounding bombs to 0 for each square
      numBombs = 0
      //If current square is a Bomb, Don't Do Anything
      if(b[x][y] == 'b');
      else
      {
        //Checks Each surrounding square for a bomb, if there is a bomb, add it to the counter
        if(b[x - 1][y - 1] == 'b') numBombs ++; //Top Left Neighbor
        if(b[x][y - 1] == 'b') numBombs ++;//Left Neighbor
        if(b[x - 1][y + 1] == 'b') numBombs ++;//Bottom Left Neighbor
        if(b[x][y - 1] == 'b') numBombs ++;//Top Neighbor
        if(b[x][y + 1] == 'b') numBombs ++;//Botom Neighbor
        if(b[x + 1][y - 1] == 'b') numBombs ++;//Top Right Neighbor
        if(b[x + 1][y] == 'b') numBombs ++;//Right Neighbor
        if(b[x + 1][y + 1] == 'b') numBombs ++;//Bottom Right Neighbor
        //Sets the current Square Equal to the number of bombs arround it
        b[x][y] = numBombs;
      }
    }
  }
}
