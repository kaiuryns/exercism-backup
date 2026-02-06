#include "allergies.h"

bool is_allergic_to(allergen_t allergen, int allergies)
{
    return (allergies & (1 << allergen));
}

allergen_list_t get_allergens(int allergies)
{
    allergen_list_t list = {0};

    for (allergen_t i = 0; i < ALLERGEN_COUNT; i++)
    {
        if (is_allergic_to(i, allergies))
        {
            list.allergens[i] = true;
            list.count++;
        }
    }
    return list;
}