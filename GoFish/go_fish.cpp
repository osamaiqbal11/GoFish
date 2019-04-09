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

    Deck test;


    cout<<test.size()<<"\n";

    Card testC;

    testC = test.dealCard();
    cout<< testC.toString()<<"\n";

    testC = test.dealCard();
    cout<< testC.toString()<<"\n";


    /*
    Deck();           // pristine, sorted deck

    void shuffle();   // shuffle the deck, all 52 cards present
    Card dealCard();   // get a card, after 52 are dealt, fail
    void cardSwap(Card i, Card j); // pass 2 valid cards
    int  size() const; // # cards left in the deck
     */

    /*
    int numCards = 5;

    Player p1("Joe");
    Player p2("Jane");

    Deck d;  //create a deck of cards
    d.shuffle();

    dealHand(d, p1, numCards);
    dealHand(d, p2, numCards);

    cout << p1.getName() <<" has : " << p1.showHand() << endl;
    cout << p2.getName() <<" has : " << p2.showHand() << endl;

    return EXIT_SUCCESS;

     */
}



void dealHand(Deck &d, Player &p, int numCards)
{
    for (int i=0; i < numCards; i++)
        p.addCard(d.dealCard());
}



