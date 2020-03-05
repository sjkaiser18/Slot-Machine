

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
bool slots(std::string profit[],int size=3){
    srand((int)time(0));
    char spin[4]={'\0'};
    char valid='L';

        if((profit[0]==profit[1])&&(profit[1]==profit[2])){
            valid='W';
        }



    printf("Please enter the word 'spin' to spin \n");
    std::cin>>spin;

    if(valid=='W'){
         return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int bet;
    std::string result;
    std::string profit [3];
    std::string values[12]={"cherry","clover","7","coin","diamond","lemon","bar","heart","$","crown","bell","horseshoe"};
    int size=3;
    srand((int)time(0));
    std::cout<<"Let's play some slots!"<<std::endl;
    std::cout<<"How much are you betting?"<<std::endl; //want to be able to overflow this so you can show with more money than inserted
    std::cin>>bet;
    for(int i=0;i<3;i++){
        result=values[std::rand()%12];
        profit[i]=result;
    }
    bool winner=slots(profit,size);
    printf(" | ");
    for(int j=0;j<3;j++) {
        printf("%s | ", profit[j].c_str());
    }
    printf(" \n ");
    if(winner==1){
        printf("Congrats, you have won %d dollars",bet); //put in some sort of mechanism
    }
    else{
        printf("Womp womp, you lose! Better luck next time");
    }
    return 0;
}
