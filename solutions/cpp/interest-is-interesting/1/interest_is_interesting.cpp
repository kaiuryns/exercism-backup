double interest_rate(double balance) {
    double per{2.475};
    if (balance < 0) 
    {
        per = 3.213;
    }
    if (balance >= 0 && balance < 1000) 
    {
        per = 0.5;
    }
    if (balance >= 1000 && balance < 5000) 
    {
        per = 1.621;
    }
    return per;
}

double yearly_interest(double balance) 
{
    return (balance / 100) * interest_rate(balance);
}

double annual_balance_update(double balance) 
{
    return balance + yearly_interest(balance);
}

int years_until_desired_balance(double balance, double target_balance) 
{
    int years{0};
    while(balance < target_balance)
    {
        balance = annual_balance_update(balance);
        ++years;
    }
    return years;
}