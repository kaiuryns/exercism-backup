#include "lasagna_master.h"

namespace lasagna_master {

    int preparationTime(std::vector<std::string> layers, int number) { return layers.size() * number; }

    amount quantities(std::vector<std::string> layers)
    {
        amount amount {};
        for (std::string names : layers)
        {
            if (names == "noodles") { amount.noodles += 50; }
            if (names == "sauce") { amount.sauce += 0.2; }
        }
        return amount;
    }

    void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string>& friendsList)
    {
        myList.back() = friendsList.back();
    }

    void addSecretIngredient(std::vector<std::string>& myList, const std::string& secret)
    {
        myList.back() = secret;
    }

    std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions)
    {
        std::vector<double> scale{quantities};
        for (auto& s: scale)
        {
            s *= portions / 2.0;
        }
        return scale;
    }

}  // namespace lasagna_master
