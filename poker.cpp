#include <bits/stdc++.h>
#include <codecvt>
#include <fcntl.h>
#include <locale>
#include <stdio.h>
#include <string>
void display_cards(std::vector<std::vector<int>> & deck)
{
    printf("\t");
    for (auto i : deck)
    {
        for (auto j : i)
            printf("\t%lc ", j);
        printf("\n");
    }
}

void populate_cards(std::vector<std::vector<int>> & deck)
{
    // magic, magic numbers. How fun.
    int end = 0x1F0AF;
    int heart = 0x1F0BF, diamond = 0x1F0CF, club = 0x1F0DF;
    for (int i = 0x1F0A1, j = 0, k = 1; i < end; i++, k++)
        deck[j][k - 1] = i == 0x1F0AC || i == 0x1F0BC || i == 0x1F0CC || i == 0x1F0DC ? ++i : i,
                    j = i + 1 == end ? j + 1 : j,
                    end = i + 1 == end
                              ? (end == 0x1F0AF
                                     ? heart
                                     : end == heart ? diamond : end == diamond ? club : end == club ? end : end)
                              : end,
                    i = end - i > 15 ? end - 15 : i, k = i == end - 15 ? 1 : k;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    // setlocale(LC_CTYPE, "en_US.UTF-8");
    std::vector<std::vector<int>> deck(4, std::vector<int>(14));
    std::vector<std::vector<int>> backup_deck = deck;
    populate_cards(deck);
    setlocale(LC_ALL, "");
    display_cards(deck);

    // start_game();
}
