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

    Card testCard(2, Card::diamonds);


    cout<<testCard.getRank()<<"\n";


    cout<<testCard.getSuit()<<"\n";

    cout<<testCard.toString()<<"\n";

    cout<<"yyyyyyyyyyyyyy\n";


    /*
    bool sameSuitAs(const Card& c) const;  // true if suit same as c
    void setSuit(Suit s);
    int  getRank()                 const;  // return rank, 1..13
    void setRank(int r);
    Suit getSuit();
    string suitString(Suit s)      const;  // return "s", "h",...

    string rankString(int r)       const;  // return "A", "2", ..."Q"



    bool operator == (const Card& rhs) const;
    bool operator != (const Card& rhs) const;

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



