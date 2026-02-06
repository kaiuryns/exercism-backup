#include "vehicle_purchase.h"

namespace vehicle_purchase 
{
    bool needs_license(std::string kind)
    {
        return kind == "car" || kind == "truck";
    }

    std::string choose_vehicle(std::string option1, std::string option2) 
    {
        return option1 < option2 ? option1 + " is clearly the better choice." : option2 + " is clearly the better choice.";
    }

    double calculate_resell_price(double original_price, double age) 
    {
        double price;
        if (age < 3) price = original_price * 0.8;
        else if (age >= 10) price =  original_price * 0.5;
        else price = original_price * 0.7;
        return price;
    }

}  // namespace vehicle_purchase