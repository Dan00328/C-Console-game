#include <stdio.h>
#include <conio.h> //pt citirea tastei apasate
#include <windows.h> //pt functia sleep()

int main(){
//marimea hartii:
int height=10;
int lanes=4;
//pozitii NPC:
int pozE,laneE;
laneE= rand();pozE=0;
//coordonate player
int laneP;
laneP=3;
//variabile ajutatoare
int i,j;
char key;
//stats:
int speed=100;
int score; score=0;
//game:
while(1){
        //curata consola pt un frame nou
        system("cls");

    //Desenam drumul
    for(j=0;j<height;j++){
        for(i=0;i<lanes;i++){
            printf("|");
           if(laneE==i&&j==pozE)
                printf(" V ");
            else if(laneP==i&&j==height-1)
                printf(" A ");
                    else
                    printf("   ");
        }
    printf("|\n");

    }

    for(i=0;i<lanes;i++)
    printf(" ---");
     printf("\n");
//inamicul se misca
    pozE++;
//conditie de pierdere
    if(laneE==laneP&&pozE==height-1){
        printf("!GAME OVER!");
    break;
    }
//resetare inamic
    if(pozE>height-1){
        pozE=0;
        laneE=rand()%4;
        score++;
    }
//citire input pt control
    if (_kbhit()){
        key= _getch();
        if(key=='a'&&laneP>0)
            laneP-=1;
        if(key=='d'&&laneP<lanes-1)
            laneP+=1;
         if(key=='s'&&speed<400)
            speed+=100;
            if(key=='w'&&speed>0)
            speed-=100;

    }
    //printare stats
    printf("SCORE:%d\n",score);
    printf("SPEED Restriction:-%d",speed);
    //viteza jocului
    Sleep(speed);
}
return 0;
}
