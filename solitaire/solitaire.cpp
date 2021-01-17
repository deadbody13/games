#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

class Card {
public:
  string graphic;
  int value;
  // color of card -- true=red, false=black
  bool color;
  // fluidvalue -- aces can be treated as either a 1 or 11
  bool fluidValue;
  Card(string cardGraphic, int cardValue, bool cardColor, bool cardFluidValue) {
    graphic = cardGraphic;
    value = cardValue;
    color = cardColor;
    fluidValue = cardFluidValue;
  }
};

// shuffles the deck, randomly selects a card, pushes it to back, and deletes original
void shuffleDeck(vector<Card> &deck) {
  int card;
  for (int i=0; i<1000; i++) {
    card = rand()%51;
    deck.push_back(deck.at(card));
    deck.erase(deck.begin()+card);
  }
}

// moving cards between stacks on the field
void add2Stack (vector<Card> &startHand, vector<Card> &endHand, int howMany) {
  
}

// moving single card from deck to another stack
void addFromDeck (vector<Card> &deck, vector<Card> &endHand) {
  endHand.push_back(deck.at(0));
  deck.erase(deck.begin() + 0);
}

int main() {
  srand(time(NULL));
  vector<Card> deck, field1, field2, field3, field4, stack1, stack2, stack3, stack4, stack5, stack6, stack7;
  vector<vector<Card>> all;
  all.push_back(deck);
  all.push_back(field1);
  all.push_back(field2);
  all.push_back(field3);
  all.push_back(field4);
  all.push_back(stack1);
  all.push_back(stack2);
  all.push_back(stack3);
  all.push_back(stack4);
  all.push_back(stack5);
  all.push_back(stack6);
  all.push_back(stack7);

  Card two1("[  2 ♣  ]", 2, false, false);
  Card three1("[  3 ♣  ]", 3, false, false);
  Card four1("[  4 ♣  ]", 4, false, false);
  Card five1("[  5 ♣  ]", 5, false, false);
  Card six1("[  6 ♣  ]", 6, false, false);
  Card seven1("[  7 ♣  ]", 7, false, false);
  Card eight1("[  8 ♣  ]", 8, false, false);
  Card nine1("[  9 ♣  ]", 9, false, false);
  Card ten1("[ 10 ♣  ]", 10, false, false);
  Card jack1("[  J ♣  ]", 10, false, false);
  Card queen1("[  Q ♣  ]", 10, false, false);
  Card king1("[  K ♣  ]", 10, false, false);
  Card ace1("[  A ♣  ]", 11, false, true);

  Card two2("[  2 ♠  ]", 2, false, false);
  Card three2("[  3 ♠  ]", 3, false, false);
  Card four2("[  4 ♠  ]", 4, false, false);
  Card five2("[  5 ♠  ]", 5, false, false);
  Card six2("[  6 ♠  ]", 6, false, false);
  Card seven2("[  7 ♠  ]", 7, false, false);
  Card eight2("[  8 ♠  ]", 8, false, false);
  Card nine2("[  9 ♠  ]", 9, false, false);
  Card ten2("[ 10 ♠  ]", 10, false, false);
  Card jack2("[  J ♠  ]", 10, false, false);
  Card queen2("[  Q ♠  ]", 10, false, false);
  Card king2("[  K ♠  ]", 10, false, false);
  Card ace2("[  A ♣ ]", 11, false, true);

  Card two3("[  2 ♡  ]", 2,  true, false);
  Card three3("[  3 ♡  ]", 3,  true, false);
  Card four3("[  4 ♡  ]", 4,  true, false);
  Card five3("[  5 ♡  ]", 5,  true, false);
  Card six3("[  6 ♡  ]", 6,  true, false);
  Card seven3("[  7 ♡  ]", 7,  true, false);
  Card eight3("[  8 ♡  ]", 8,  true, false);
  Card nine3("[  9 ♡  ]", 9,  true, false);
  Card ten3("[ 10 ♡  ]", 10,  true, false);
  Card jack3("[  J ♡  ]", 10,  true, false);
  Card queen3("[  Q ♡  ]", 10,  true, false);
  Card king3("[  K ♡  ]", 10,  true, false);
  Card ace3("[  A ♡ ]", 11, true, true);

  Card two4("[  2 ♢  ]", 2,  true, false);
  Card three4("[  3 ♢  ]", 3,  true, false);
  Card four4("[  4 ♢  ]", 4,  true, false);
  Card five4("[  5 ♢  ]", 5,  true, false);
  Card six4("[  6 ♢  ]", 6,  true, false);
  Card seven4("[  7 ♢  ]", 7,  true, false);
  Card eight4("[  8 ♢  ]", 8,  true, false);
  Card nine4("[  9 ♢  ]", 9,  true, false);
  Card ten4("[ 10 ♢  ]", 10,  true, false);
  Card jack4("[  J ♢  ]", 10,  true, false);
  Card queen4("[  Q ♢  ]", 10,  true, false);
  Card king4("[  K ♢  ]", 10,  true, false);
  Card ace4("[  A ♢  ]", 11, true, true);

  all.at(0).push_back(two1);
  all.at(0).push_back(two2);
  all.at(0).push_back(two3);
  all.at(0).push_back(two4);
  all.at(0).push_back(three1);
  all.at(0).push_back(three2);
  all.at(0).push_back(three3);
  all.at(0).push_back(three4);
  all.at(0).push_back(four1);
  all.at(0).push_back(four2);
  all.at(0).push_back(four3);
  all.at(0).push_back(four4);
  all.at(0).push_back(five1);
  all.at(0).push_back(five2);
  all.at(0).push_back(five3);
  all.at(0).push_back(five4);
  all.at(0).push_back(six1);
  all.at(0).push_back(six2);
  all.at(0).push_back(six3);
  all.at(0).push_back(six4);
  all.at(0).push_back(seven1);
  all.at(0).push_back(seven2);
  all.at(0).push_back(seven3);
  all.at(0).push_back(seven4);
  all.at(0).push_back(eight1);
  all.at(0).push_back(eight2);
  all.at(0).push_back(eight3);
  all.at(0).push_back(eight4);
  all.at(0).push_back(nine1);
  all.at(0).push_back(nine2);
  all.at(0).push_back(nine3);
  all.at(0).push_back(nine4);
  all.at(0).push_back(ten1);
  all.at(0).push_back(ten2);
  all.at(0).push_back(ten3);
  all.at(0).push_back(ten4);
  all.at(0).push_back(jack1);
  all.at(0).push_back(jack2);
  all.at(0).push_back(jack3);
  all.at(0).push_back(jack4);
  all.at(0).push_back(queen1);
  all.at(0).push_back(queen2);
  all.at(0).push_back(queen3);
  all.at(0).push_back(queen4);
  all.at(0).push_back(king1);
  all.at(0).push_back(king2);
  all.at(0).push_back(king3);
  all.at(0).push_back(king4);
  all.at(0).push_back(ace1);
  all.at(0).push_back(ace2);
  all.at(0).push_back(ace3);
  all.at(0).push_back(ace4);
  


}
