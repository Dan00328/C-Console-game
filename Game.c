#include <stdio.h>
#include <string.h>

int main(){

int height=10;
int lanes=4;
char M[lanes][height];
int pozE, laneP,laneE;laneE= rand()%4;laneP=3;pozE=0;
int i,j;
int n=1;
while(n==1){
    //Desenam drumul
    for(j=0;j<height;j++){
        for(i=0;i<lanes;i++){
           if(laneE==i&&j==pozE)
                printf("V");
            else if(laneP==i&&j==height-1)
                printf("A");
                    else
                    printf("*");
        }
    printf("\n");n--;

    }

}

}
