#include<stdio.h>
#include<stdlib.h>
void displaygridDef();
void displayDrid(int game[][3]);
void play(int game[][3]);
int checkWin(int game[][3],int player);
int main(){
    int game[3][3]={{-1,-1,-1},    //1 x, 0 o, -1 " "
                    {-1,-1,-1},
                    {-1,-1,-1}};
    play(game);
    // displaygridDef();
    // displayDrid(game);
    return 0;

}
void play(int game[][3])
{
    int player=1;
    int playerchoice=0;
    int full=0;
    while(1)
    {
    system("cls");
    displaygridDef();
    printf("\n\n\n");
    displayDrid(game);
    printf("\n\n\n");
        int changed=0;
        printf("Player %d : ",player);
        scanf("%d",&playerchoice);

        switch (playerchoice)
        {
        case 1:
            if(game[0][0]==-1)
            {
                game[0][0]=player%2; 
                changed=1;
            }
                
            break;
        case 2:
            if(game[0][1]==-1)
            {
                game[0][1]=player%2; 
                changed=1;
            }
            break;
        case 3:
            if(game[0][2]==-1)
            {
                game[0][2]=player%2; 
                changed=1;
            }
            break;
        case 4:
            if(game[1][0]==-1)
            {
                game[1][0]=player%2; 
                changed=1;
            }
                
            break;
        case 5:
            if(game[1][1]==-1)
            {
                game[1][1]=player%2; 
                changed=1;
            }
            break;
        case 6:
            if(game[1][2]==-1)
            {
                game[1][2]=player%2; 
                changed=1;
            }
            break;
        case 7:
            if(game[2][0]==-1)
            {
                game[2][0]=player%2;
                changed=1; 
            }
            break;
        case 8:
            if(game[2][1]==-1)
            {
                game[2][1]=player%2; 
                changed=1;
            }
            break;
        case 9:
            if(game[2][2]==-1)
            {
                game[2][2]=player%2; 
                changed=1;
            }
            break;
        }
        if(changed)
            {
                //checkWin(game,player%2);
                player = (player%2)?2:1;
                full++;
            }
            
        

    }
}
void displaygridDef()
{
    for(int i=1;i<=9;i++)
    {
        printf("\t%d\t| %s",i,(i%3==0)?"\n":"");
    }
}
void displayDrid(int game[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            switch (game[i][j])
            {
            case 1:
                printf("\tX\t|");
                break;
            case 0:
                printf("\t0\t|");
                break;
            case -1:
                printf("\t \t|");
            }
        printf("\n");
    }
        
}