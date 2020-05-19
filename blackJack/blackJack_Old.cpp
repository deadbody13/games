#include <iostream>
#include <time.h>
#include <vector>

class Cards {
public:
  std::string name;
  std::string topEdge, bottomEdge, graphicTop, graphicMiddle, graphicBottom,
      graphic;
  int value;
  bool fluidValue;
};
std::vector<Cards> deck;
std::vector<Cards> playerHand;
std::vector<Cards> dealerHand;
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

void shuffle() {
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

void showPlayerHand() {
  for (int i = 0; i < playerHand.size(); i++) {
    std::cout << playerHand[i].topEdge;
  }
  std::cout << std::endl;
  for (int i = 0; i < playerHand.size(); i++) {
    std::cout << playerHand[i].graphicTop;
  }
  std::cout << std::endl;
  for (int i = 0; i < playerHand.size(); i++) {
    std::cout << playerHand[i].graphicMiddle;
  }
  std::cout << std::endl;
  for (int i = 0; i < playerHand.size(); i++) {
    std::cout << playerHand[i].graphicBottom;
  }
  std::cout << std::endl;
  for (int i = 0; i < playerHand.size(); i++) {
    std::cout << playerHand[i].bottomEdge;
  }
  std::cout << std::endl;
}

void showDealerHand() {
  for (int i = 0; i < dealerHand.size(); i++) {
    std::cout << dealerHand[i].topEdge;
  }
  std::cout << std::endl;
  for (int i = 0; i < dealerHand.size(); i++) {
    std::cout << dealerHand[i].graphicTop;
  }
  std::cout << std::endl;
  for (int i = 0; i < dealerHand.size(); i++) {
    std::cout << dealerHand[i].graphicMiddle;
  }
  std::cout << std::endl;
  for (int i = 0; i < dealerHand.size(); i++) {
    std::cout << dealerHand[i].graphicBottom;
  }
  std::cout << std::endl;
  for (int i = 0; i < dealerHand.size(); i++) {
    std::cout << dealerHand[i].bottomEdge;
  }
  std::cout << std::endl;
}

int playerHandValue() {
  int total = 0;
  for (int i = 0; i < playerHand.size(); i++) {
    total += playerHand[i].value;
  }
  return total;
}

int dealerHandValue() {
  int total = 0;
  for (int i = 0; i < dealerHand.size(); i++) {
    total += dealerHand[i].value;
  }
  return total;
}

void clearScreen() {
  for (int i = 0; i < 50; i++) {
    std::cout << "\n" << std::endl;
  }
}

int main() {
  using namespace std;
  srand(time(NULL));

  two1.name = "Two of Spades";
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
  two2.graphicMiddle = "|   ❤   |";
  two2.graphicBottom = "|2     2|";
  two2.bottomEdge = "---------";

  two3.name = "Two of Clubs";
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
  two4.graphicMiddle = "|   ◇   |";
  two4.graphicBottom = "|2     2|";
  two4.bottomEdge = "---------";

  three1.name = "Three of Spades";
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
  three2.graphicMiddle = "|   ❤   |";
  three2.graphicBottom = "|3     3|";
  three2.bottomEdge = "---------";

  three3.name = "Three of Clubs";
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
  three4.graphicMiddle = "|   ◇   |";
  three4.graphicBottom = "|3     3|";
  three4.bottomEdge = "---------";

  four1.name = "Four of Spades";
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
  four2.graphicMiddle = "|   ❤   |";
  four2.graphicBottom = "|4     4|";
  four2.bottomEdge = "---------";

  four3.name = "Four of Clubs";
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
  four4.graphicMiddle = "|   ◇   |";
  four4.graphicBottom = "|4     4|";
  four4.bottomEdge = "---------";

  five1.name = "Five of Spades";
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
  five2.graphicMiddle = "|   ❤   |";
  five2.graphicBottom = "|5     5|";
  five2.bottomEdge = "---------";

  five3.name = "Five of Clubs";
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
  five4.graphicMiddle = "|   ◇   |";
  five4.graphicBottom = "|5     5|";
  five4.bottomEdge = "---------";

  six1.name = "Six of Spades";
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
  six2.graphicMiddle = "|   ❤   |";
  six2.graphicBottom = "|6     6|";
  six2.bottomEdge = "---------";

  six3.name = "Six of Clubs";
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
  six4.graphicMiddle = "|   ◇   |";
  six4.graphicBottom = "|6     6|";
  six4.bottomEdge = "---------";

  seven1.name = "Seven of Spades";
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
  seven2.graphicMiddle = "|   ❤   |";
  seven2.graphicBottom = "|7     7|";
  seven2.bottomEdge = "---------";

  seven3.name = "Seven of Clubs";
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
  seven4.graphicMiddle = "|   ◇   |";
  seven4.graphicBottom = "|7     7|";
  seven4.bottomEdge = "---------";

  eight1.name = "Eight of Spades";
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
  eight2.graphicMiddle = "|   ❤   |";
  eight2.graphicBottom = "|8     8|";
  eight2.bottomEdge = "---------";

  eight3.name = "Eight of Clubs";
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
  eight4.graphicMiddle = "|   ◇   |";
  eight4.graphicBottom = "|8     8|";
  eight4.bottomEdge = "---------";

  nine1.name = "Nine of Spades";
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
  nine2.graphicMiddle = "|   ❤   |";
  nine2.graphicBottom = "|9     9|";
  nine2.bottomEdge = "---------";

  nine3.name = "Nine of Clubs";
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
  nine4.graphicMiddle = "|   ◇   |";
  nine4.graphicBottom = "|9     9|";
  nine4.bottomEdge = "---------";

  ten1.name = "Ten of Spades";
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
  ten2.graphicMiddle = "|   ❤   |";
  ten2.graphicBottom = "|10   10|";
  ten2.bottomEdge = "---------";

  ten3.name = "Ten of Clubs";
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
  ten4.graphicMiddle = "|   ◇   |";
  ten4.graphicBottom = "|10   10|";
  ten4.bottomEdge = "---------";

  jack1.name = "Jack of Spades";
  jack1.value = 10;
  jack1.topEdge = "_________";
  jack1.graphicTop = "|♠     ♠|";
  jack1.graphicMiddle = "|   J   |";
  jack1.graphicBottom = "|♠     ♠|";
  jack1.bottomEdge = "---------";

  jack2.name = "Jack of Hearts";
  jack2.value = 10;
  jack2.topEdge = "_________";
  jack2.graphicTop = "|❤     ❤|";
  jack2.graphicMiddle = "|   J   |";
  jack2.graphicBottom = "|❤     ❤|";
  jack2.bottomEdge = "---------";

  jack3.name = "Jack of Clubs";
  jack3.value = 10;
  jack3.topEdge = "_________";
  jack3.graphicTop = "|♣     ♣|";
  jack3.graphicMiddle = "|   J   |";
  jack3.graphicBottom = "|♣     ♣|";
  jack3.bottomEdge = "---------";

  jack4.name = "Jack of Diamonds";
  jack4.value = 10;
  jack4.topEdge = "_________";
  jack4.graphicTop = "|◇     ◇|";
  jack4.graphicMiddle = "|   J   |";
  jack4.graphicBottom = "|◇     ◇|";
  jack4.bottomEdge = "---------";

  queen1.name = "Queen of Spades";
  queen1.value = 10;
  queen1.topEdge = "_________";
  queen1.graphicTop = "|♠     ♠|";
  queen1.graphicMiddle = "|   Q   |";
  queen1.graphicBottom = "|♠     ♠|";
  queen1.bottomEdge = "---------";

  queen2.name = "Queen of Hearts";
  queen2.value = 10;
  queen2.topEdge = "_________";
  queen2.graphicTop = "|❤     ❤|";
  queen2.graphicMiddle = "|   Q   |";
  queen2.graphicBottom = "|❤     ❤|";
  queen2.bottomEdge = "---------";

  queen3.name = "Queen of Clubs";
  queen3.value = 10;
  queen3.topEdge = "_________";
  queen3.graphicTop = "|♣     ♣|";
  queen3.graphicMiddle = "|   Q   |";
  queen3.graphicBottom = "|♣     ♣|";
  queen3.bottomEdge = "---------";

  queen4.name = "Queen of Diamonds";
  queen4.value = 10;
  queen4.topEdge = "_________";
  queen4.graphicTop = "|◇     ◇|";
  queen4.graphicMiddle = "|   Q   |";
  queen4.graphicBottom = "|◇     ◇|";
  queen4.bottomEdge = "---------";

  king1.name = "King of Spades";
  king1.value = 10;
  king1.topEdge = "_________";
  king1.graphicTop = "|♠     ♠|";
  king1.graphicMiddle = "|   K   |";
  king1.graphicBottom = "|♠     ♠|";
  king1.bottomEdge = "---------";

  king2.name = "King of Hearts";
  king2.value = 10;
  king2.topEdge = "_________";
  king2.graphicTop = "|❤     ❤|";
  king2.graphicMiddle = "|   K   |";
  king2.graphicBottom = "|❤     ❤|";
  king2.bottomEdge = "---------";

  king3.name = "King of Clubs";
  king3.value = 10;
  king3.topEdge = "_________";
  king3.graphicTop = "|♣     ♣|";
  king3.graphicMiddle = "|   K   |";
  king3.graphicBottom = "|♣     ♣|";
  king3.bottomEdge = "---------";

  king4.name = "King of Diamonds";
  king4.value = 10;
  king4.topEdge = "_________";
  king4.graphicTop = "|◇     ◇|";
  king4.graphicMiddle = "|   K   |";
  king4.graphicBottom = "|◇     ◇|";
  king4.bottomEdge = "---------";

  ace1.name = "Ace of Spades";
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
  ace2.graphicTop = "|❤     ❤|";
  ace2.graphicMiddle = "|   A   |";
  ace2.graphicBottom = "|❤     ❤|";
  ace2.bottomEdge = "---------";

  ace3.name = "Ace of Clubs";
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
  ace4.graphicTop = "|◇     ◇|";
  ace4.graphicMiddle = "|   A   |";
  ace4.graphicBottom = "|◇     ◇|";
  ace4.bottomEdge = "---------";

  int draw, Ace, highScore, aceValueNum, playerScore, dealerScore;
  // string aceValue;
  char drawCard;
  bool player21 = false;
  bool playerBreak = false;
  bool player5 = false;
  bool dealerBreak = false;
  bool dealer5 = false;
  shuffle();
  // player's turn
  while (1) {
    string aceValue = "y";
    playerScore = playerHandValue();
    clearScreen();
    showPlayerHand();
    cout << "Player Score: " << playerScore << endl;
    cout << "Would you like to draw a card? [y/n]" << endl;
    cin >> drawCard;
    if (drawCard == 'y') {
      // draw = rand() % deck.size() + 0;
      draw = 48; // testing Aces
      playerHand.push_back(deck[draw]);
      if (deck[draw].fluidValue == true) {
        while (aceValue != "1" && aceValue != "11") {
          clearScreen();
          showPlayerHand();
          cout << "Player Score: " << playerScore << endl;
          cout << "How would you like this Ace to be scored? [1/11] ... please "
                  "don't enter a letter, this program will break and I will cry"
               << endl;
          cin >> aceValue;
          if (aceValue == "1") {
            aceValueNum = 1;
          } else if (aceValue == "11") {
            aceValueNum = 11;
          }
        }
        playerHand[playerHand.size() - 1].value = aceValueNum;
      }
      deck.erase(deck.begin() + draw - 1);
    }
    if (drawCard == 'n') {
      playerScore = playerHandValue();
      if (playerScore == 21) {
        player21 = true;
      }
      break;
    }
    playerScore = playerHandValue();
    if (playerScore > 21) {
      playerBreak = true;
      playerScore = 0;
      break;
    }
    if (playerHand.size() == 5) {
      player5 = true;
      break;
    }
    clearScreen();
    showPlayerHand();
    cout << "Player score: " << playerScore << endl;
  }
  // dealer's turn
  while (1) {
    dealerScore = 0;
    draw = rand() % deck.size() + 0;
    dealerHand.push_back(deck[draw]);
    dealerScore = dealerHandValue();
    if (dealerScore > 21) {
      dealerBreak = true;
      dealerScore = 0;
      break;
    }
    if (dealerHand.size() == 5) {
      dealer5 = true;
      break;
    }
    if (dealerScore > 16) {
      break;
    }
  }
  clearScreen();
  cout << "############################" << endl;
  cout << "END GAME" << endl;
  cout << "############################" << endl;
  showDealerHand();
  if (dealerBreak == true) {
    cout << "Dealer broke" << endl;
  }
  cout << "Dealer score: " << dealerScore << endl;
  showPlayerHand();
  if (playerBreak == true) {
    cout << "Player broke" << endl;
  }
  cout << "Player score: " << playerScore << endl;
  if (dealer5 == true) {
    if (player5 == true) {
      cout << "Both Dealer and Player have 5 cards without breaking... tie "
              "goes to dealer"
           << endl;
    } else {
      cout << "Dealer has 5 cards without breaking... Dealer wins!" << endl;
    }
  } else if (player5 == true) {
    cout << "Player has 5 cards without breaking... Player wins!" << endl;
  }
  if (dealerScore == playerScore) {
    cout << "Ties go to the dealer" << endl;
  }
  if (dealerScore >= playerScore) {
    cout << "Dealer wins" << endl;
  }
  if (playerScore > dealerScore) {
    cout << "Player wins" << endl;
  }
}
