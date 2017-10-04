#include"struct.h"      //sort.c
void sort() {
        int a;
        srand(time(NULL));
        for(int i = 0; i < 4; i++)
                for(int j = 0; j < 5; j++) {
                        a = rand() % 52;
                        if(cards[a].rank == 0){
                                j--;
                                continue;
                        }
                        players[i][j].rank = cards[a].rank;
                        players[i][j].suit = cards[a].suit;
                        cards[a].rank = 0;
                }       //give four players cards by random
        char player_rank[15] = {'0', '0', '2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};     //ranks
        char player_suit[5] = {'0', 'c', 'd', 'h', 's'};        //suits
        for(int i = 0; i < 4; i++) {    //print four players' cards
                printf("P%d:", i + 1);
                for(int j = 0; j < 5; j++) {
                        printf("%c", player_rank[players[i][j].rank]);
                        printf("%c ", player_suit[players[i][j].suit]);
                }
                printf("\n");
        }
        int temp1, temp2;
        for(int i = 0; i < 4; i++)      //bubble sort
                for(int j = 4; j >= 1; j--)
                        for(int k = 0; k < j; k++) {
                                if(players[i][k].rank > players[i][k + 1].rank) {
                                        temp1 = players[i][k].rank;
                                        players[i][k].rank = players[i][k + 1].rank;
                                        players[i][k + 1].rank = temp1;
                                        temp2 = players[i][k].suit;
                                        players[i][k].suit = players[i][k + 1].suit;
                                        players[i][k + 1].suit = temp2;
                                }
                                else if(players[i][k].rank == players[i][k + 1].rank && players[i][k].suit > players[i][k + 1].suit) {
                                        temp2 = players[i][k].suit;
                                        players[i][k].suit = players[i][k + 1].suit;
                                        players[i][k + 1].suit = temp2;
                                }
                        }
}

