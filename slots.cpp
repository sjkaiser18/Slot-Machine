

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
bool slots(){
    char spin[4]={'\0'};
    char valid='L';
    printf("Please enter the word 'spin' to spin \n");
    std::cin>>spin;
    /*
    std::cout<<std::endl;
    for(int j=0;j< 3;j++){
        if(profit[j]==profit[j+1]){
            valid=1;
        }
        else{
            valid=0; //likely where I will do my exploitation
            break;
        }
    }
    */

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
    std::cout<<"Let's play some slots!"<<std::endl;
    std::cout<<"How much are you betting?"<<std::endl; //want to be able to overflow this so you can show with more money than inserted
    std::cin>>bet;
    bool winner=slots();
    printf(" | ");
   for(int i=0;i<3;i++){
       result=values[std::rand()%12];
       profit[i]=result;
       printf("%s | ",result.c_str());
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
