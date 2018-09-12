#include <iostream>
#include <stdlib.h>
#include <map>
#include <utility>
#include <time.h>
using namespace std;

bool bombcheck(){
	
	return true;
}

void placebombs(){
	map<pair<int,int>,bool> placedbomb;
	pair<int,int> cords;
	//make map to show that there are currently no cordinates with a bomb
	for(int i = 0;i < 16; i++){
		for(int j = 0; i < 16; i++){
			cords = make_pair(i,j);
			placedbomb[cords] = false;
		}
	}
	
	//starts to place 40 bomb onto the map
	for(int i = 0; i < 40; i++){
		int x_cord = (rand() % 16);
		int y_cord = (rand() % 16);
		bool notplaced = true;
		while(notplaced){
			cords = make_pair(x_cord,y_cord);
			//check that there are no bomb that c
			if(bombcheck()){
				placedbomb[cords] = true;
				notplaced = false;
			}
		}


	}
}

int main(){

}
