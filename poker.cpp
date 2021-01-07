#include <bits/stdc++.h>
using std::to_string;
void display_cards(std::vector<std::vector<std::string>> & deck)
{
    for (auto i : deck)
        for (auto j : i)
            std::cout << j << (j == i.back() ? "\n" : " ");
}

void populate_cards(std::vector<std::vector<std::string>> & deck)
{
    std::string value;
    for (int i = 1, j = 0x01; i < 15; i++, j++)
        value = (i <= 10 ? to_string(i) : i == 11 ? "J" : i == 12 ? "Q" : i == 13 ? "K" : "A"),
        deck[0][i - 1] = "♠" + value, deck[1][i - 1] = "♣" + value, deck[2][i - 1] = "♡" + value,
        deck[3][i - 1] = "♢" + value;
}

int main()
{
    std::vector<std::vector<std::string>> deck(4, std::vector<std::string>(14));
    std::vector<std::vector<std::string>> backup_deck = deck;
    populate_cards(deck);
    // display_cards(deck);
    start_game();
}
