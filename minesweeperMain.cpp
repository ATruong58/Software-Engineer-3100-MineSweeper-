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
const int BSIZE = 18;
//Number of Bombs: Meduim = 40
const int NBOMBS = 40;

void createBoard(char b[BSIZE][BSIZE]);
void addBombs(char b[BSIZE][BSIZE]);
void addNumbers(char b[BSIZE][BSIZE]);
void print(char b[BSIZE][BSIZE]);

int main()
{
  char mediumBoard[BSIZE][BSIZE] = {};
  createBoard(mediumBoard);
  print(mediumBoard);
  return 0;
}

void createBoard(char b[BSIZE][BSIZE])
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

void addBombs(char b[BSIZE][BSIZE])
{

}

void addNumbers(char b[BSIZE][BSIZE])
{
  int numBombs = 0;
  for(int x = 1; x < BSIZE -1; x++)
  {
    for(int y = 1; y < BSIZE -1; y++)
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
        switch(numBombs)
        {
          case 0: b[x][y] = 'O';
                  break;
          case 1: b[x][y] = '1';
                  break;
          case 2: b[x][y] = '2';
                  break;
          case 3: b[x][y] = '3';
                  break;
          case 4: b[x][y] = '4';
                  break;
          case 5: b[x][y] = '5';
                  break;
          case 6: b[x][y] = '6';
                  break;
          case 7: b[x][y] = '7';
                  break;
          case 8: b[x][y] = '8';
                  break;
          case 9: b[x][y] = '9';
                  break;
        }
      }
    }
  }
}

void print(char b[BSIZE][BSIZE])
{
  for(int x = 0; x < BSIZE; x++)
  {
    for(int y = 0; y < BSIZE; y++)
    {
      cout << b[x][y] << " ";
    }
    cout << endl;
  }
}
