/*
Team 17
Zach Bax
Edward Koch
Brandon McCurry
Alan Truong
Lucas Winkelman

Minesweeper Implementation
*/
#include <iostream>
#include <ctime>
using namespace std;

//Board Size: Medium = 16x16
const int BSIZE = 17;
//Number of Bombs: Meduim = 40
const int NBOMBS = 40;

void createBoard(char b[][BSIZE]);
void addBombs(char b[][BSIZE]);
void addNumbers(char b[][BSIZE]);

int main()
{
  char mediumBoard[17][17];
  createBoard(mediumBoard);
  cout << "Error?" << endl;
  return 0;
}

void createBoard(char b[][BSIZE])
{
  for(int x = 0; x <= BSIZE; x++)
  {
    for(int y = 0; y <= BSIZE; y++)
    {
      if(x == 0 || y == 0 || x == 17 || y == 17) b[x][y] = '#';
    }
  }
  addBombs(b);
  addNumbers(b);
}

void addBombs(char b[][BSIZE])
{

}

void addNumbers(char b[][BSIZE])
{
  int numBombs = 0;
  for(int x = 1; x < BSIZE; x++)
  {
    for(int y = 1; y < BSIZE; y++)
    {
      //sets the number of surrounding bombs to 0 for each square
      numBombs = 0;
      //If current square is a Bomb, Don't Do Anything
      if(b[x][y] == 'b');
      else
      {
        //Checks Each surrounding square for a bomb, if there is a bomb, add it to the counter
        if(b[x - 1][y - 1] == 'b') numBombs ++; //Top Left Neighbor
        if(b[x][y - 1] == 'b') numBombs ++;//Left Neighbor
        if(b[x - 1][y + 1] == 'b') numBombs ++;//Bottom Left Neighbor
        if(b[x][y - 1] == 'b') numBombs ++;//Top Neighbor
        if(b[x][y + 1] == 'b') numBombs ++;//Bottom Neighbor
        if(b[x + 1][y - 1] == 'b') numBombs ++;//Top Right Neighbor
        if(b[x + 1][y] == 'b') numBombs ++;//Right Neighbor
        if(b[x + 1][y + 1] == 'b') numBombs ++;//Bottom Right Neighbor
        //Sets the current Square Equal to the number of bombs around it
        b[x][y] = numBombs;
      }
    }
  }
}
