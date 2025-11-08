#include <stdio.h>
#include <string.h>


int main(){

int height=10;
int lanes=4;
int pozE, laneP,laneE;
laneE= rand()%4;laneP=3;pozE=0;
int i,j;
char key;int speed=100;
int score; score=0;
while(1){
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

    pozE++;

    if(laneE==laneP&&pozE==height-1){
        printf("!GAME OVER!");
    break;
    }

    if(pozE>height-1){
        pozE=0;
        laneE=rand()%4;
        score++;
    }

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
    printf("SCORE:%d\n",score);
    printf("SPEED Restriction:-%d",speed);
    Sleep(speed);
}
return 0;
}

