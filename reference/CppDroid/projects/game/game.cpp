#include"windows.h"
#include<iostream>
#include<thread>
using namespace std;
int x,y;
void gotoXY(int x,int y)
{
 }

int matrix[8][20];//defines our game screen
int sleep;
void startgame(){
  //this is the game engine/game loop
   bool running=true;
   while(running){
        
     for(int j=0;j<20;j++){
        for(int i=0;i<8;i++){
                
    if (matrix[i][j]==1){
          gotoXY(x,y);
           cout<<"0";
              }
       else gotoXY(x,y);
           cout<<" ";
             }
           }
    
    sleep=50;
   }
  // the game ended
 }

 int main()
   {
    //to draw the little rectangle
    matrix[2][4]=1;
    matrix[3][4]=1;
    matrix[4][4]=1;
    matrix[5][4]=1;
    matrix[2][5]=1;
    matrix[5][5]=1;
    matrix[2][6]=1;
    matrix[3][6]=1;
    matrix[4][6]=1;
    matrix[5][6]=1;
    
    startgame();
    return 0;
    }