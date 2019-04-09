//go_fish.cpp
// FILE: card_demo.cpp
// This is a small demonstration program showing how the Card and Deck classes are used.
#include <iostream>    // Provides cout and cin
#include <cstdlib>     // Provides EXIT_SUCCESS
#include "card.h"
#include "player.h"
#include "deck.h"

using namespace std;

//===========================================seed
// PROTOTYPES for functions used by this demonstration program:
void dealHand(Deck &d, Player &p, int numCards);




int main( )
{
/* testing Card Class and Functions

    Card testCard(2, Card::diamonds);

    cout<<testCard.getRank()<<"\n";
    cout<<testCard.suitString(testCard.getSuit())<<"\n";
    testCard.setRank(1);
    testCard.setSuit(Card::clubs);
    cout<<testCard.toString()<<"\n";
    cout<<testCard.rankString(testCard.getRank())<<"\n";
    cout<<"yyyyyyyyyyyyyy\n";

    Card test;
    Card test2(3, Card::diamonds);
    Card test3;

    if(test.sameSuitAs(test3))
        cout<<"test1 pass\n";
    else{
        cout<<"test 1 fail\n";
    }

    if(test == test2){
        cout<<"test 2 fail\n";
    }
    else{
        cout<<"test 2 pass\n";
    }

    if(test != test2){
        cout<<"test 3 pass\n";
    }

    if(test == test3){
        cout<<"test 4 pass\n";
    }

    */
/*
    Deck test;
    Card testC;
    test.shuffle();
    int i = 0;
    while(i<52) {
        cout<<i+1<<":";
        testC = test.dealCard();
        cout << testC.toString() << "\n";
        i++;
    }
*/






    /*
    string getName() const;

    void addCard(Card c);  //adds a card to the hand
    void bookCards(Card c1, Card c2);

    Card chooseCardFromHand() const;

    //Does the player have the card c in her hand?
    bool cardInHand(Card c) const;

    //Remove the card c from the hand and return it to the caller
    Card removeCardFromHand(Card c);

    string showHand() const;
    string showBooks() const;

    int getHandSize() const;
    int getBookSize() const;

*/

/*
    int numCards = 5;

    Player p1("Joe");
    Player p2("Jane");

    Deck d;  //create a deck of cards
    d.shuffle();

    dealHand(d, p1, numCards);
    dealHand(d, p2, numCards);

    cout << p1.getName() <<" has : \n" << p1.showHand() << endl;
    cout << p2.getName() <<" has : \n" << p2.showHand() << endl;

    return EXIT_SUCCESS;
*/
}



void dealHand(Deck &d, Player &p, int numCards)
{
    for (int i=0; i < numCards; i++)
        p.addCard(d.dealCard());
}



