//deck.cpp
#include <deck.h>
#include<iostream>

using namespace std;


Deck::Deck(){                 // pristine, sorted deck
    myCards[51];
    myIndex = 0;  // current card to deal

    int i = 0;

     while(i < 14){
         int j = 1;
         myCards[j].setSuit(Card::clubs);
         myCards[j].setRank(i);
         j++;
         i++;
     }
     while(i < 26){
         int j= 1;
         myCards[j].setSuit(Card::diamonds);
         myCards[j].setRank(i);
         j++;
         i++;
     }
     while(i < 39){
         int j = 1;
         myCards[j].setSuit(Card::hearts);
         myCards[j].setRank(i);
         j++;
         i++;
     }
     i = 1;
     while(i < 52) {
         int j = 1;
         myCards[j].setSuit(Card::spades);
         myCards[j].setRank(i);
         j++;
         i++;
     }


}

void Deck::shuffle(){         // shuffle the deck, all 52 cards present
    int i = 0;
    while(i < 51){
        int num1 = rand()%52;
        int num2 = rand()%52;
        swap(myCards[num1], myCards[num2]);
        i++;
    }
}


Card Deck::dealCard(){        // get a card, after 52 are dealt, fail
    int deckSize = this->size();
    if(deckSize != 0){
        return(myCards[52-deckSize]);
    }
    else{
        return(myCards[0]);
    }
}

int  Deck::size() const {       // # cards left in the deck
    int size = 51 - (myIndex);

    return(size+1);

    /* 0 --------size= 51----cards in deck= 52
     * 1---------size= 50----cards in deck= 51
     * 51--------size= 0-----cards in deck= 1
     *
     * 52 --- 0
     * 51 --- 1
     * 50 --- 2
     * 1 ----51
     * 0 ----fail
     */






}

void Deck::cardSwap(Card i, Card j){    // pass 2 ints 0-51;
    Card k;
    k.setRank(i.getRank());
    k.setSuit(i.getSuit());

    i.setSuit(j.getSuit());
    i.setRank(j.getRank());

    j.setRank(k.getRank());
    j.setSuit(k.getSuit());

}