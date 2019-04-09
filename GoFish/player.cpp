//player.cpp
#include "player.h"

Player::Player(){
    vector <Card> myHand;
    vector <Card> myBook;

    string myName = "NAME";
}


string Player::getName() const {
    return myName;
}

void Player::addCard(Card c){       //adds a card to the hand
    myHand.push_back(c);

}



void Player::bookCards(Card c1, Card c2){
    myBook.push_back(c1);
    myBook.push_back(c2);
}



//OPTIONAL
// comment out if you decide to not use it
//this function will check a players hand for a pair.
//If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

//bool checkHandForBook(Card &c1, Card &c2);

//OPTIONAL
// comment out if you decide to not use it
//Does the player have a card with the same rank as c in her hand?
//bool rankInHand(Card c) const;

//uses some strategy to choose one card from the player's
//hand so they can say "Do you have a 4?"
Card Player::chooseCardFromHand() const{
    return(myHand.front());


}




//Does the player have the card c in her hand?
bool Player::cardInHand(Card c) const{
    int sizeofhand = myHand.size();
    int i = 0;
    while(i<sizeofhand){
        if(myHand[i] == c){
            return(true);
        }
        i++;
    }


}



//Remove the card c from the hand and return it to the caller
Card Player::removeCardFromHand(Card c){
    int i = 0;
    while(myHand[i]!= c){
        i++;
    }
    Card hold = myHand[i];
    myHand.erase(myHand.begin()+i);

    return(c);
}

string Player::showHand() const{
    int i = 0;
    string returnString;
    while(i<myHand.size()){
        cout<<myHand[i].toString();
        i++;
    }

}


string Player::showBooks() const{
    int i = 0;
    string returnString;
    while(i<myBook.size()){
        cout<<myBook[i].toString();
        i++;
    }
}

int Player::getHandSize() const{
    return(myHand.size());


}



int Player::getBookSize() const{
    return(myBook.size());
}




//OPTIONAL
// comment out if you decide to not use it
//this function will check a players hand for a pair.
//If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

//bool checkHandForPair(Card &c1, Card &c2);

//OPTIONAL
// comment out if you decide to not use it
//Does the player have a card with the same rank as c in her hand?
//e.g. will return true if the player has a 7d and the parameter is 7c

//bool Player::sameRankInHand(Card c) const;