#include <iostream>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

class Cards {
public:
  string name, graphic, color;
  int value;
  bool fluidValue;
};
// deck
vector<Cards> deck;
// additional stacks
vector<Cards> stack1, stack2;
Cards two1, two2, two3, two4;
Cards three1, three2, three3, three4;
Cards four1, four2, four3, four4;
Cards five1, five2, five3, five4;
Cards six1, six2, six3, six4;
Cards seven1, seven2, seven3, seven4;
Cards eight1, eight2, eight3, eight4;
Cards nine1, nine2, nine3, nine4;
Cards ten1, ten2, ten3, ten4;
Cards jack1, jack2, jack3, jack4;
Cards queen1, queen2, queen3, queen4;
Cards king1, king2, king3, king4;
Cards ace1, ace2, ace3, ace4;

void orderDeck() {
  while (!deck.empty()) {
    deck.pop_back();
  }
  while (!stack1.empty()) {
    stack1.pop_back();
  }
  while (!stack2.empty()) {
    stack2.pop_back();
  }
  deck.push_back(two1);
  deck.push_back(two2);
  deck.push_back(two3);
  deck.push_back(two4);
  deck.push_back(three1);
  deck.push_back(three2);
  deck.push_back(three3);
  deck.push_back(three4);
  deck.push_back(four1);
  deck.push_back(four2);
  deck.push_back(four3);
  deck.push_back(four4);
  deck.push_back(five1);
  deck.push_back(five2);
  deck.push_back(five3);
  deck.push_back(five4);
  deck.push_back(six1);
  deck.push_back(six2);
  deck.push_back(six3);
  deck.push_back(six4);
  deck.push_back(seven1);
  deck.push_back(seven2);
  deck.push_back(seven3);
  deck.push_back(seven4);
  deck.push_back(eight1);
  deck.push_back(eight2);
  deck.push_back(eight3);
  deck.push_back(eight4);
  deck.push_back(nine1);
  deck.push_back(nine2);
  deck.push_back(nine3);
  deck.push_back(nine4);
  deck.push_back(ten1);
  deck.push_back(ten2);
  deck.push_back(ten3);
  deck.push_back(ten4);
  deck.push_back(jack1);
  deck.push_back(jack2);
  deck.push_back(jack3);
  deck.push_back(jack4);
  deck.push_back(queen1);
  deck.push_back(queen2);
  deck.push_back(queen3);
  deck.push_back(queen4);
  deck.push_back(king1);
  deck.push_back(king2);
  deck.push_back(king3);
  deck.push_back(king4);
  deck.push_back(ace1);
  deck.push_back(ace2);
  deck.push_back(ace3);
  deck.push_back(ace4);
}

// randomizes cards
void shuffleDeck() {
  int draw;
  for (int i = 0; i < 1000; i++) {
    draw = rand() % deck.size();
    deck.push_back(deck[draw]);
    deck.erase(deck.begin() + draw);
  }
}

int handValue(vector<Cards> &hand) {
  int total = 0;
  int size = hand.size();
  for (int i = 0; i < size; i++) {
    total += hand[i].value;
  }
  return total;
}

void add2hand(vector<Cards> &startHand, vector<Cards> &endHand, int card) {
  endHand.push_back(startHand[card]);
  startHand.erase(startHand.begin() + card);
}

void clearScreen() {
  for (int i = 0; i < 50; i++) {
    cout << "\n" << endl;
  }
}
void showHand(vector<Cards> &hand) {
  int size = hand.size();
  for (int i = 0; i < size; i++) {
    cout << hand[i].graphic;
  }
  cout << endl;
}

int main() {
  using namespace std;
  srand(time(NULL));

  two1.name = "Two of Spades";
  two1.color = false;
  two1.value = 2;
  two1.graphic = "[2   ♠]";

  two2.name = "Two of Hearts";
  two2.value = 2;
  two2.graphic = "[2   ♡]";

  two3.name = "Two of Clubs";
  two3.color = false;
  two3.value = 2;
  two3.graphic = "[2   ♣]";

  two4.name = "Two of Diamonds";
  two4.value = 2;
  two4.graphic = "[2   ♢]";

  three1.name = "Three of Spades";
  three1.color = false;
  three1.value = 3;
  three1.graphic = "[3   ♠]";

  three2.name = "Three of Hearts";
  three2.value = 3;
  three2.graphic = "[3   ♡]";

  three3.name = "Three of Clubs";
  three3.color = false;
  three3.value = 3;
  three3.graphic = "[3   ♣]";

  three4.name = "Three of Diamonds";
  three4.value = 3;
  three4.graphic = "[3   ♢]";

  four1.name = "Four of Spades";
  four1.color = false;
  four1.value = 4;
  four1.graphic = "[4   ♠]";

  four2.name = "Four of Hearts";
  four2.value = 4;
  four2.graphic = "[4   ♡]";

  four3.name = "Four of Clubs";
  four3.color = false;
  four3.value = 4;
  four3.graphic = "[4   ♣]";

  four4.name = "Four of Diamonds";
  four4.value = 4;
  four4.graphic = "[4   ♢]";

  five1.name = "Five of Spades";
  five1.color = false;
  five1.value = 5;
  five1.graphic = "[5   ♠]";

  five2.name = "Five of Hearts";
  five2.value = 5;
  five2.graphic = "[5   ♡]";

  five3.name = "Five of Clubs";
  five3.color = false;
  five3.value = 5;
  five3.graphic = "[5   ♣]";

  five4.name = "Five of Diamonds";
  five4.value = 5;
  five4.graphic = "[5   ♢]";

  six1.name = "Six of Spades";
  six1.color = false;
  six1.value = 6;
  six1.graphic = "[6   ♠]";

  six2.name = "Six of Hearts";
  six2.value = 6;
  six2.graphic = "[6   ♡]";

  six3.name = "Six of Clubs";
  six3.color = false;
  six3.value = 6;
  six3.graphic = "[6   ♣]";

  six4.name = "Six of Diamonds";
  six4.value = 6;
  six4.graphic = "[6   ♢]";

  seven1.name = "Seven of Spades";
  seven1.color = false;
  seven1.value = 7;
  seven1.graphic = "[7   ♠]";

  seven2.name = "Seven of Hearts";
  seven2.value = 7;
  seven2.graphic = "[7   ♡]";

  seven3.name = "Seven of Clubs";
  seven3.color = false;
  seven3.value = 7;
  seven3.graphic = "[7   ♣]";

  seven4.name = "Seven of Diamonds";
  seven4.value = 7;
  seven4.graphic = "[7   ♢]";

  eight1.name = "Eight of Spades";
  eight1.color = false;
  eight1.value = 8;
  eight1.graphic = "[8   ♠]";

  eight2.name = "Eight of Hearts";
  eight2.value = 8;
  eight2.graphic = "[8   ♡]";

  eight3.name = "Eight of Clubs";
  eight3.color = false;
  eight3.value = 8;
  eight3.graphic = "[8   ♣]";

  eight4.name = "Eight of Diamonds";
  eight4.value = 8;
  eight4.graphic = "[8   ♢]";

  nine1.name = "Nine of Spades";
  nine1.color = false;
  nine1.value = 9;
  nine1.graphic = "[9   ♠]";

  nine2.name = "Nine of Hearts";
  nine2.value = 9;
  nine2.graphic = "[9   ♡]";

  nine3.name = "Nine of Clubs";
  nine3.color = false;
  nine3.value = 9;
  nine3.graphic = "[9   ♣]";

  nine4.name = "Nine of Diamonds";
  nine4.value = 9;
  nine4.graphic = "[9   ♢]";

  ten1.name = "Ten of Spades";
  ten1.color = false;
  ten1.value = 10;
  ten1.graphic = "[10  ♠]";

  ten2.name = "Ten of Hearts";
  ten2.value = 10;
  ten2.graphic = "[10  ♡]";

  ten3.name = "Ten of Clubs";
  ten3.color = false;
  ten3.value = 10;
  ten3.graphic = "[10  ♣]";

  ten4.name = "Ten of Diamonds";
  ten4.value = 10;
  ten4.graphic = "[10  ♢]";

  jack1.name = "Jack of Spades";
  jack1.color = false;
  jack1.value = 10;
  jack1.graphic = "[J   ♠]";

  jack2.name = "Jack of Hearts";
  jack2.value = 10;
  jack2.graphic = "[J   ♡]";

  jack3.name = "Jack of Clubs";
  jack3.color = false;
  jack3.value = 10;
  jack3.graphic = "[J   ♣]";

  jack4.name = "Jack of Diamonds";
  jack4.value = 10;
  jack4.graphic = "[J   ♢]";

  queen1.name = "Queen of Spades";
  queen1.color = false;
  queen1.value = 10;
  queen1.graphic = "[Q   ♠]";

  queen2.name = "Queen of Hearts";
  queen2.value = 10;
  queen2.graphic = "[Q   ♡]";

  queen3.name = "Queen of Clubs";
  queen3.color = false;
  queen3.value = 10;
  queen3.graphic = "[Q   ♣]";

  queen4.name = "Queen of Diamonds";
  queen4.value = 10;
  queen4.graphic = "[Q   ♢]";

  king1.name = "King of Spades";
  king1.color = false;
  king1.value = 10;
  king1.graphic = "[K   ♠]";

  king2.name = "King of Hearts";
  king2.value = 10;
  king2.graphic = "[K   ♡]";

  king3.name = "King of Clubs";
  king3.color = false;
  king3.value = 10;
  king3.graphic = "[K   ♣]";

  king4.name = "King of Diamonds";
  king4.color = true;
  king4.value = 10;
  king4.graphic = "[K   ♢]";

  ace1.name = "Ace of Spades";
  ace1.color = false;
  ace1.value = 11;
  ace1.graphic = "[A   ♠]";

  ace2.name = "Ace of Hearts";
  ace2.color = true;
  ace2.value = 11;
  ace2.fluidValue = true;
  ace2.graphic = "[A   ♡]";

  ace3.name = "Ace of Clubs";
  ace3.color = false;
  ace3.value = 11;
  ace3.fluidValue = true;
  ace3.graphic = "[A   ♣]";

  ace4.name = "Ace of Diamonds";
  ace4.color = true;
  ace4.value = 11;
  ace4.fluidValue = true;
  ace4.graphic = "[A   ♢]";

  // order & shuffle deck first
  clearScreen();
  orderDeck();
  shuffleDeck();

  int playerScore = 0;
  int fluidChoice;
  char choice;

  // while player's score is 21 or less
  while (playerScore < 22) {
    cout << "Would you like to draw a card? [y/n]" << endl;
    cin >> choice;
    // only enter y/n

    while (choice != 'y' && choice != 'n') {
      cout << "Not a valid choice..." << endl;
      cin >> choice;
    }
    if (choice == 'n') {
      break;
    }
    // in case of Ace being drawn... can be 1 or 11
    else {
      clearScreen();
      if (deck[0].fluidValue == true) {
        showHand(stack1);
        cout << deck[0].graphic << endl;
        cout << "Would you like this to be counted as a 1 or 11? [1/11]"
             << endl;
        while (fluidChoice != 1 && fluidChoice != 11) {
          cin >> fluidChoice;
          if (fluidChoice != 1 && fluidChoice != 11) {
            cout << "Ace can only be 1 or 11 points...";
          } else {
            deck[0].value = fluidChoice;
          }
        }
        clearScreen();
      }
      // add top card of deck to hand
      add2hand(deck, stack1, 0);
    }
    // calculating value in hand
    playerScore = handValue(stack1);
    showHand(stack1);
    cout << "Player Score: " << playerScore << endl;
  }
}
