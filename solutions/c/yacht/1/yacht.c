#include "yacht.h"

static int count(dice_t dice, int face) {
    int value = 0;
    for (int i = 0; i < 5; i++)
        if (dice.faces[i] == face)
            value += dice.faces[i];
    return value;
}

static int same(dice_t dice, int quantity) {
    int value = 0;
    int face;
    for (int i = 0; i < 5; i++) {
        face = dice.faces[i];
        for (int j = 0; j < 5; j++)
            if (face == dice.faces[j])
                value += face;
        if ((value / face) == quantity)
            return value;
        value = 0;
    }
    return 0;
}

static int sum(dice_t dice, int quantity) {
    int value = 0;
    int quant = quantity;
    int face;
    for (int i = 0; i < 2; i++) {
        face = dice.faces[i];
        for (int j = 0; j < 5; j++)
            if (face == dice.faces[j] && quant--)
                value += face;
        if ((value / face) == quantity)
            return value;
        value = 0;
        quant = quantity;
    }
    return 0;
}

static int sum_all(dice_t dice) {
    int value = 0;
    for (int i = 0; i < 5; i++)
        value += dice.faces[i];

    return value;
}

static int straight(dice_t dice, int n) {
    int found;
    for (int i = n; i < n + 5; i++) {
        found = 0;
        for (int j = 0; j < 5; j++) {
            if (dice.faces[j] == i) {
                found = 1;
                break;
            }
        }
        if (!found) 
            return 0;
    }
    return 30;
}

int score(dice_t dice, category_t category) {

    switch (category) {
        case ONES:
        case TWOS:
        case THREES:
        case FOURS:
        case FIVES:
        case SIXES:
            return count(dice, (int)category + 1);
            
        case FULL_HOUSE:
            return same(dice, 2) && same(dice, 3) ? same(dice, 2) + same(dice, 3) : 0;

        case FOUR_OF_A_KIND:
            return sum(dice, 4);
            
        case LITTLE_STRAIGHT:
            return straight(dice, 1);

        case BIG_STRAIGHT:
            return straight(dice, 2);

        case CHOICE:
            return sum_all(dice);

        case YACHT:
            return same(dice, 5) ? 50 : 0;
            
        default:
            return 0;       
    }
}
