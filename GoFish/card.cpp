//card.cpp
#include<card.h>

Card::Card(){                           // default, ace of spades

    Suit mySuit = spades;
    int myRank = 1;
}

Card::Card(int rank, Suit s){
    Suit mySuit = s;
    int myRank = rank;
    /*  1 = A;
     *  11 = J;
     *  12 = Q;
     *  13 = K;
     */

}

string Card::toString()const{           // return string version e.g. Ac 4h Js

    string card;
    if(mySuit == spades){
        card[1] = 's';
    }
    if(mySuit == diamonds){
        card[1] = 'd';
    }
    if(mySuit == clubs){
        card[1] = 'c';
    }
    if(mySuit == hearts){
        card[1] = 'h';
    }
    if(myRank == 1){
        card[0] = 'A';
    }
    if(myRank == 11){
        card[0] = 'J';
    }
    if(myRank == 12){
        card[0] = 'Q';
    }
    if(myRank == 13){
        card[0] = 'K';
    }
    if((myRank>1)&&(myRank<11)){
        card[0] = myRank + '0';

    }
    return(card);

}



bool Card::sameSuitAs(const Card& c) const{ // true if suit same as c
    if(mySuit == c.mySuit){
        return(true);
    }
    else{
        return(false);
    }

}
int  Card::getRank()const{                  // return rank, 1..13
    return(myRank);
}

string Card::suitString(Suit s)const{       // return "s", "h",...
    return("s");
}


string Card::rankString(int r)const{        // return "A", "2", ..."Q"
    char c;

    if(r == 1){
        c = 'A';
    }
    if(r == 11){
        c = 'J';
    }
    if(r == 12){
        c = 'Q';
    }
    if(r == 13){
        c = 'K';
    }
    if((r>1)&&(r<11)){
        c = r + '0';

    }

    return("c");
}


bool Card::operator == (const Card& rhs) const{
    if(mySuit == rhs.mySuit)
        if(myRank == rhs.myRank){
            return(true);
        }
        else{
            return(false);
        }
    else{
        return(false);
    }
}


bool Card::operator != (const Card& rhs) const{
    if(mySuit == rhs.mySuit){
        if(myRank == rhs.myRank){
        return(false);
        }
        else{
            return(true);
        }
    }
    else{
        return(true);
    }
}

void Card::setSuit(Suit s){
    mySuit = s;
}

void Card::setRank(int r){
    myRank = r;
}

Card::Suit Card::getSuit(){
    return(mySuit);
}

