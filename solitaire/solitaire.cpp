#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

class Cards {
public:
  string name;
  string topEdge, bottomEdge, graphicTop, graphicMiddle, graphicBottom;
  int value;
  bool fluidValue = false;
  bool color = true;
};
vector<Cards> deck;
vector<Cards> stack1, stack2, stack3, stack4;
vector<vector<Cards>> stacks{stack1, stack2, stack3, stack4};
vector<Cards> playerHand;
vector<Cards> dealerHand;

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
  while (!playerHand.empty()) {
    playerHand.pop_back();
  }
  while (!dealerHand.empty()) {
    dealerHand.pop_back();
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
  for (int i = 0; i < hand.size(); i++) {
    total += hand[i].value;
  }
  return total;
}

void add2hand(vector<Cards> &startHand, vector<Cards> &endHand, int card) {
  endHand.push_back(startHand[card]);
  startHand.erase(startHand.begin() + card);
}

void showHand(vector<Cards> &hand) {
  for (int i = 0; i < hand.size(); i++) {
    cout << hand[i].topEdge;
  }
  cout << endl;
  for (int i = 0; i < hand.size(); i++) {
    cout << hand[i].graphicTop;
  }
  cout << endl;
  for (int i = 0; i < hand.size(); i++) {
    cout << hand[i].graphicMiddle;
  }
  cout << endl;
  for (int i = 0; i < hand.size(); i++) {
    cout << hand[i].graphicBottom;
  }
  cout << endl;
  for (int i = 0; i < hand.size(); i++) {
    cout << hand[i].bottomEdge;
  }
  cout << endl;
}

void showStack(vector<Cards> &hand) {
  for (int i = 0; i < hand.size(); i++) {
    cout << hand[i].topEdge << endl;
    cout << hand[i].graphicTop << endl;
    cout << hand[i].graphicMiddle << endl;
  }
  cout << hand[hand.size() - 1].graphicBottom << endl;
  cout << hand[hand.size() - 1].bottomEdge << endl;
}

void clearScreen() {
  for (int i = 0; i < 50; i++) {
    cout << "\n" << endl;
  }
}

float odds(int score) {
  int margin = 21 - score;
  float prob = 0;
  for (int i = 0; i < deck.size(); i++) {
    if (deck[i].fluidValue == true && margin < 11) {
      deck[i].value = 1;
    }
    if (deck[i].value <= margin) {
      prob++;
    }
  }
  prob = prob / deck.size();
  return prob;
}

void showField() {
  int count1 = stack1.size();
  if (count1 < stack2.size()) {
    count1 = stack2.size();
  }
  if (count1 < stack3.size()) {
    count1 = stack3.size();
  }
  if (count1 < stack4.size()) {
    count1 = stack4.size();
  }
  for (int i = 0; i < count1; i++) {
    if (i == 0) {
      cout << deck[i].topEdge << "         ";
    } else if (i == 1) {
      cout << deck[0].graphicBottom << "         ";
    } else {
      cout << "                  ";
    }
    if (i < stack1.size()) {
      cout << stack1[i].topEdge;
    } else {
      cout << "         ";
    }
    if (i < stack2.size()) {
      cout << stack2[i].topEdge;
    } else {
      cout << "         ";
    }
    if (i < stack3.size()) {
      cout << stack3[i].topEdge;
    } else {
      cout << "         ";
    }
    if (i < stack4.size()) {
      cout << stack4[i].topEdge;
    } else {
      cout << "         ";
    }
    cout << endl;
    if (i == 0) {
      cout << deck[i].graphicTop << "         ";
    } else if (i == 1) {
      cout << deck[0].bottomEdge << "         ";
    } else {
      cout << "                  ";
    }
    if (i < stack1.size()) {
      cout << stack1[i].graphicTop;
    } else {
      cout << "         ";
    }
    if (i < stack2.size()) {
      cout << stack2[i].graphicTop;
    } else {
      cout << "         ";
    }
    if (i < stack3.size()) {
      cout << stack3[i].graphicTop;
    } else {
      cout << "         ";
    }
    if (i < stack4.size()) {
      cout << stack4[i].graphicTop;
    } else {
      cout << "         ";
    }
    cout << endl;
    if (i == 0) {
      cout << deck[i].graphicMiddle << "         ";
    } else {
      cout << "                  ";
    }
    if (i < stack1.size()) {
      cout << stack1[i].graphicMiddle;
    } else {
      cout << "         ";
    }
    if (i < stack2.size()) {
      cout << stack2[i].graphicMiddle;
    } else {
      cout << "         ";
    }
    if (i < stack3.size()) {
      cout << stack3[i].graphicMiddle;
    } else {
      cout << "         ";
    }
    if (i < stack4.size()) {
      cout << stack4[i].graphicMiddle;
    } else {
      cout << "         ";
    }
    cout << endl;
  }
}
int randomCard() {
  int card = rand() % deck.size();
  return card;
}

int main() {
  using namespace std;
  srand(time(NULL));

  two1.name = "Two of Spades";
  two1.color = false;
  two1.value = 2;
  two1.topEdge = "_________";
  two1.graphicTop = "|2     2|";
  two1.graphicMiddle = "|   ♠   |";
  two1.graphicBottom = "|2     2|";
  two1.bottomEdge = "---------";

  two2.name = "Two of Hearts";
  two2.value = 2;
  two2.topEdge = "_________";
  two2.graphicTop = "|2     2|";
  two2.graphicMiddle = "|   ♡   |";
  two2.graphicBottom = "|2     2|";
  two2.bottomEdge = "---------";

  two3.name = "Two of Clubs";
  two3.color = false;
  two3.value = 2;
  two3.topEdge = "_________";
  two3.graphicTop = "|2     2|";
  two3.graphicMiddle = "|   ♣   |";
  two3.graphicBottom = "|2     2|";
  two3.bottomEdge = "---------";

  two4.name = "Two of Diamonds";
  two4.value = 2;
  two4.topEdge = "_________";
  two4.graphicTop = "|2     2|";
  two4.graphicMiddle = "|   ♢   |";
  two4.graphicBottom = "|2     2|";
  two4.bottomEdge = "---------";

  three1.name = "Three of Spades";
  three1.color = false;
  three1.value = 3;
  three1.topEdge = "_________";
  three1.graphicTop = "|3     3|";
  three1.graphicMiddle = "|   ♠   |";
  three1.graphicBottom = "|3     3|";
  three1.bottomEdge = "---------";

  three2.name = "Three of Hearts";
  three2.value = 3;
  three2.topEdge = "_________";
  three2.graphicTop = "|3     3|";
  three2.graphicMiddle = "|   ♡   |";
  three2.graphicBottom = "|3     3|";
  three2.bottomEdge = "---------";

  three3.name = "Three of Clubs";
  three3.color = false;
  three3.value = 3;
  three3.topEdge = "_________";
  three3.graphicTop = "|3     3|";
  three3.graphicMiddle = "|   ♣   |";
  three3.graphicBottom = "|3     3|";
  three3.bottomEdge = "---------";

  three4.name = "Three of Diamonds";
  three4.value = 3;
  three4.topEdge = "_________";
  three4.graphicTop = "|3     3|";
  three4.graphicMiddle = "|   ♢   |";
  three4.graphicBottom = "|3     3|";
  three4.bottomEdge = "---------";

  four1.name = "Four of Spades";
  four1.color = false;
  four1.value = 4;
  four1.topEdge = "_________";
  four1.graphicTop = "|4     4|";
  four1.graphicMiddle = "|   ♠   |";
  four1.graphicBottom = "|4     4|";
  four1.bottomEdge = "---------";

  four2.name = "Four of Hearts";
  four2.value = 4;
  four2.topEdge = "_________";
  four2.graphicTop = "|4     4|";
  four2.graphicMiddle = "|   ♡   |";
  four2.graphicBottom = "|4     4|";
  four2.bottomEdge = "---------";

  four3.name = "Four of Clubs";
  four3.color = false;
  four3.value = 4;
  four3.topEdge = "_________";
  four3.graphicTop = "|4     4|";
  four3.graphicMiddle = "|   ♣   |";
  four3.graphicBottom = "|4     4|";
  four3.bottomEdge = "---------";

  four4.name = "Four of Diamonds";
  four4.value = 4;
  four4.topEdge = "_________";
  four4.graphicTop = "|4     4|";
  four4.graphicMiddle = "|   ♢   |";
  four4.graphicBottom = "|4     4|";
  four4.bottomEdge = "---------";

  five1.name = "Five of Spades";
  five1.color = false;
  five1.value = 5;
  five1.topEdge = "_________";
  five1.graphicTop = "|5     5|";
  five1.graphicMiddle = "|   ♠   |";
  five1.graphicBottom = "|5     5|";
  five1.bottomEdge = "---------";

  five2.name = "Five of Hearts";
  five2.value = 5;
  five2.topEdge = "_________";
  five2.graphicTop = "|5     5|";
  five2.graphicMiddle = "|   ♡   |";
  five2.graphicBottom = "|5     5|";
  five2.bottomEdge = "---------";

  five3.name = "Five of Clubs";
  five3.color = false;
  five3.value = 5;
  five3.topEdge = "_________";
  five3.graphicTop = "|5     5|";
  five3.graphicMiddle = "|   ♣   |";
  five3.graphicBottom = "|5     5|";
  five3.bottomEdge = "---------";

  five4.name = "Five of Diamonds";
  five4.value = 5;
  five4.topEdge = "_________";
  five4.graphicTop = "|5     5|";
  five4.graphicMiddle = "|   ♢   |";
  five4.graphicBottom = "|5     5|";
  five4.bottomEdge = "---------";

  six1.name = "Six of Spades";
  six1.color = false;
  six1.value = 6;
  six1.topEdge = "_________";
  six1.graphicTop = "|6     6|";
  six1.graphicMiddle = "|   ♠   |";
  six1.graphicBottom = "|6     6|";
  six1.bottomEdge = "---------";

  six2.name = "Six of Hearts";
  six2.value = 6;
  six2.topEdge = "_________";
  six2.graphicTop = "|6     6|";
  six2.graphicMiddle = "|   ♡   |";
  six2.graphicBottom = "|6     6|";
  six2.bottomEdge = "---------";

  six3.name = "Six of Clubs";
  six3.color = false;
  six3.value = 6;
  six3.topEdge = "_________";
  six3.graphicTop = "|6     6|";
  six3.graphicMiddle = "|   ♣   |";
  six3.graphicBottom = "|6     6|";
  six3.bottomEdge = "---------";

  six4.name = "Six of Diamonds";
  six4.value = 6;
  six4.topEdge = "_________";
  six4.graphicTop = "|6     6|";
  six4.graphicMiddle = "|   ♢   |";
  six4.graphicBottom = "|6     6|";
  six4.bottomEdge = "---------";

  seven1.name = "Seven of Spades";
  seven1.color = false;
  seven1.value = 7;
  seven1.topEdge = "_________";
  seven1.graphicTop = "|7     7|";
  seven1.graphicMiddle = "|   ♠   |";
  seven1.graphicBottom = "|7     7|";
  seven1.bottomEdge = "---------";

  seven2.name = "Seven of Hearts";
  seven2.value = 7;
  seven2.topEdge = "_________";
  seven2.graphicTop = "|7     7|";
  seven2.graphicMiddle = "|   ♡   |";
  seven2.graphicBottom = "|7     7|";
  seven2.bottomEdge = "---------";

  seven3.name = "Seven of Clubs";
  seven3.color = false;
  seven3.value = 7;
  seven3.topEdge = "_________";
  seven3.graphicTop = "|7     7|";
  seven3.graphicMiddle = "|   ♣   |";
  seven3.graphicBottom = "|7     7|";
  seven3.bottomEdge = "---------";

  seven4.name = "Seven of Diamonds";
  seven4.value = 7;
  seven4.topEdge = "_________";
  seven4.graphicTop = "|7     7|";
  seven4.graphicMiddle = "|   ♢   |";
  seven4.graphicBottom = "|7     7|";
  seven4.bottomEdge = "---------";

  eight1.name = "Eight of Spades";
  eight1.color = false;
  eight1.value = 8;
  eight1.topEdge = "_________";
  eight1.graphicTop = "|8     8|";
  eight1.graphicMiddle = "|   ♠   |";
  eight1.graphicBottom = "|8     8|";
  eight1.bottomEdge = "---------";

  eight2.name = "Eight of Hearts";
  eight2.value = 8;
  eight2.topEdge = "_________";
  eight2.graphicTop = "|8     8|";
  eight2.graphicMiddle = "|   ♡   |";
  eight2.graphicBottom = "|8     8|";
  eight2.bottomEdge = "---------";

  eight3.name = "Eight of Clubs";
  eight3.color = false;
  eight3.value = 8;
  eight3.topEdge = "_________";
  eight3.graphicTop = "|8     8|";
  eight3.graphicMiddle = "|   ♣   |";
  eight3.graphicBottom = "|8     8|";
  eight3.bottomEdge = "---------";

  eight4.name = "Eight of Diamonds";
  eight4.value = 8;
  eight4.topEdge = "_________";
  eight4.graphicTop = "|8     8|";
  eight4.graphicMiddle = "|   ♢   |";
  eight4.graphicBottom = "|8     8|";
  eight4.bottomEdge = "---------";

  nine1.name = "Nine of Spades";
  nine1.color = false;
  nine1.value = 9;
  nine1.topEdge = "_________";
  nine1.graphicTop = "|9     9|";
  nine1.graphicMiddle = "|   ♠   |";
  nine1.graphicBottom = "|9     9|";
  nine1.bottomEdge = "---------";

  nine2.name = "Nine of Hearts";
  nine2.value = 9;
  nine2.topEdge = "_________";
  nine2.graphicTop = "|9     9|";
  nine2.graphicMiddle = "|   ♡   |";
  nine2.graphicBottom = "|9     9|";
  nine2.bottomEdge = "---------";

  nine3.name = "Nine of Clubs";
  nine3.color = false;
  nine3.value = 9;
  nine3.topEdge = "_________";
  nine3.graphicTop = "|9     9|";
  nine3.graphicMiddle = "|   ♣   |";
  nine3.graphicBottom = "|9     9|";
  nine3.bottomEdge = "---------";

  nine4.name = "Nine of Diamonds";
  nine4.value = 9;
  nine4.topEdge = "_________";
  nine4.graphicTop = "|9     9|";
  nine4.graphicMiddle = "|   ♢   |";
  nine4.graphicBottom = "|9     9|";
  nine4.bottomEdge = "---------";

  ten1.name = "Ten of Spades";
  ten1.color = false;
  ten1.value = 10;
  ten1.topEdge = "_________";
  ten1.graphicTop = "|10   10|";
  ten1.graphicMiddle = "|   ♠   |";
  ten1.graphicBottom = "|10   10|";
  ten1.bottomEdge = "---------";

  ten2.name = "Ten of Hearts";
  ten2.value = 10;
  ten2.topEdge = "_________";
  ten2.graphicTop = "|10   10|";
  ten2.graphicMiddle = "|   ♡   |";
  ten2.graphicBottom = "|10   10|";
  ten2.bottomEdge = "---------";

  ten3.name = "Ten of Clubs";
  ten3.color = false;
  ten3.value = 10;
  ten3.topEdge = "_________";
  ten3.graphicTop = "|10   10|";
  ten3.graphicMiddle = "|   ♣   |";
  ten3.graphicBottom = "|10   10|";
  ten3.bottomEdge = "---------";

  ten4.name = "Ten of Diamonds";
  ten4.value = 10;
  ten4.topEdge = "_________";
  ten4.graphicTop = "|10   10|";
  ten4.graphicMiddle = "|   ♢   |";
  ten4.graphicBottom = "|10   10|";
  ten4.bottomEdge = "---------";

  jack1.name = "Jack of Spades";
  jack1.color = false;
  jack1.value = 10;
  jack1.topEdge = "_________";
  jack1.graphicTop = "|♠     ♠|";
  jack1.graphicMiddle = "|   J   |";
  jack1.graphicBottom = "|♠     ♠|";
  jack1.bottomEdge = "---------";

  jack2.name = "Jack of Hearts";
  jack2.value = 10;
  jack2.topEdge = "_________";
  jack2.graphicTop = "|♡     ♡|";
  jack2.graphicMiddle = "|   J   |";
  jack2.graphicBottom = "|♡     ♡|";
  jack2.bottomEdge = "---------";

  jack3.name = "Jack of Clubs";
  jack3.color = false;
  jack3.value = 10;
  jack3.topEdge = "_________";
  jack3.graphicTop = "|♣     ♣|";
  jack3.graphicMiddle = "|   J   |";
  jack3.graphicBottom = "|♣     ♣|";
  jack3.bottomEdge = "---------";

  jack4.name = "Jack of Diamonds";
  jack4.value = 10;
  jack4.topEdge = "_________";
  jack4.graphicTop = "|♢     ♢|";
  jack4.graphicMiddle = "|   J   |";
  jack4.graphicBottom = "|♢     ♢|";
  jack4.bottomEdge = "---------";

  queen1.name = "Queen of Spades";
  queen1.color = false;
  queen1.value = 10;
  queen1.topEdge = "_________";
  queen1.graphicTop = "|♠     ♠|";
  queen1.graphicMiddle = "|   Q   |";
  queen1.graphicBottom = "|♠     ♠|";
  queen1.bottomEdge = "---------";

  queen2.name = "Queen of Hearts";
  queen2.value = 10;
  queen2.topEdge = "_________";
  queen2.graphicTop = "|♡     ♡|";
  queen2.graphicMiddle = "|   Q   |";
  queen2.graphicBottom = "|♡     ♡|";
  queen2.bottomEdge = "---------";

  queen3.name = "Queen of Clubs";
  queen3.color = false;
  queen3.value = 10;
  queen3.topEdge = "_________";
  queen3.graphicTop = "|♣     ♣|";
  queen3.graphicMiddle = "|   Q   |";
  queen3.graphicBottom = "|♣     ♣|";
  queen3.bottomEdge = "---------";

  queen4.name = "Queen of Diamonds";
  queen4.value = 10;
  queen4.topEdge = "_________";
  queen4.graphicTop = "|♢     ♢|";
  queen4.graphicMiddle = "|   Q   |";
  queen4.graphicBottom = "|♢     ♢|";
  queen4.bottomEdge = "---------";

  king1.name = "King of Spades";
  king1.color = false;
  king1.value = 10;
  king1.topEdge = "_________";
  king1.graphicTop = "|♠     ♠|";
  king1.graphicMiddle = "|   K   |";
  king1.graphicBottom = "|♠     ♠|";
  king1.bottomEdge = "---------";

  king2.name = "King of Hearts";
  king2.value = 10;
  king2.topEdge = "_________";
  king2.graphicTop = "|♡     ♡|";
  king2.graphicMiddle = "|   K   |";
  king2.graphicBottom = "|♡     ♡|";
  king2.bottomEdge = "---------";

  king3.name = "King of Clubs";
  king3.color = false;
  king3.value = 10;
  king3.topEdge = "_________";
  king3.graphicTop = "|♣     ♣|";
  king3.graphicMiddle = "|   K   |";
  king3.graphicBottom = "|♣     ♣|";
  king3.bottomEdge = "---------";

  king4.name = "King of Diamonds";
  king4.value = 10;
  king4.topEdge = "_________";
  king4.graphicTop = "|♢     ♢|";
  king4.graphicMiddle = "|   K   |";
  king4.graphicBottom = "|♢     ♢|";
  king4.bottomEdge = "---------";

  ace1.name = "Ace of Spades";
  ace1.color = false;
  ace1.value = 11;
  ace1.fluidValue = true;
  ace1.topEdge = "_________";
  ace1.graphicTop = "|♠     ♠|";
  ace1.graphicMiddle = "|   A   |";
  ace1.graphicBottom = "|♠     ♠|";
  ace1.bottomEdge = "---------";

  ace2.name = "Ace of Hearts";
  ace2.value = 11;
  ace2.fluidValue = true;
  ace2.topEdge = "_________";
  ace2.graphicTop = "|♡     ♡|";
  ace2.graphicMiddle = "|   A   |";
  ace2.graphicBottom = "|♡     ♡|";
  ace2.bottomEdge = "---------";

  ace3.name = "Ace of Clubs";
  ace3.color = false;
  ace3.value = 11;
  ace3.fluidValue = true;
  ace3.topEdge = "_________";
  ace3.graphicTop = "|♣     ♣|";
  ace3.graphicMiddle = "|   A   |";
  ace3.graphicBottom = "|♣     ♣|";
  ace3.bottomEdge = "---------";

  ace4.name = "Ace of Diamonds";
  ace4.value = 11;
  ace4.fluidValue = true;
  ace4.topEdge = "_________";
  ace4.graphicTop = "|♢     ♢|";
  ace4.graphicMiddle = "|   A   |";
  ace4.graphicBottom = "|♢     ♢|";
  ace4.bottomEdge = "---------";

  orderDeck();
  // shuffleDeck();

  add2hand(deck, stack1, 0);
  cout << stacks[0][0].name << endl;
  // for (int i = 0; i < 4; i++) {
  //  for (int j = 0; j < 4; j++) {
  //    add2hand(deck, stacks[i], 0);
  //  }
  //}
  //
  // for (int i = 0; i < 4; i++) {
  //  for (int j = 0; j < 4; j++) {
  //    cout << stacks[i][j].name << endl;
  //  }
  //  cout << endl;
  //}
}
