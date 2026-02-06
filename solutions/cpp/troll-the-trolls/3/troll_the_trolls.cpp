namespace hellmath {

    enum AccountStatus
    {
        troll,
        guest,
        user,
        mod
    };

    enum Action
    {
        read,
        write,
        remove
    };

    bool display_post(AccountStatus poster, AccountStatus viewer)
    {
        if (poster == AccountStatus::troll && viewer != AccountStatus::troll)
        {
            return false;
        }
        return true;
    }

    bool permission_check(Action action, AccountStatus account)
    {
        if (action == Action::read)
        {
            return true;
        }
        else if (action == Action::write)
        {
            return account != AccountStatus::guest;
        }
        return account == AccountStatus::mod;
    }

    bool valid_player_combination(AccountStatus player1, AccountStatus player2)
    {
        if (player1 == AccountStatus::troll && player2 != AccountStatus::troll)
        {
            return false;
        }
        else if (player1 != AccountStatus::troll && player2 == AccountStatus::troll)
        {
            return false;
        }
        else if (player1 == AccountStatus::guest || player2 == AccountStatus::guest)
        {
            return false;
        }
        return true;
    }

    bool has_priority(AccountStatus account1, AccountStatus account2)
    {
        return account1 > account2;
    }

}  // namespace hellmath