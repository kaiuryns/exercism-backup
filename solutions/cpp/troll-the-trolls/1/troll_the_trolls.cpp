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

    bool display_post(int poster, int viewer)
    {
        if (poster == 0 && viewer != 0)
        {
            return false;
        }
        return true;
    }

    bool permission_check(int action, int account)
    {
        if (action == 0)
        {
            return true;
        }
        else if (action == 1)
        {
            return account == 0 || account == 2 || account == 3;
        }
        return account == 3;
    }

    bool valid_player_combination(int poster, int viewer)
    {
        if (poster == 0 && viewer != 0)
        {
            return false;
        }
        else if (poster != 0 && viewer == 0)
        {
            return false;
        }
        else if (poster == 1 || viewer == 1)
        {
            return false;
        }
        return true;
    }

    bool has_priority(int first, int second)
    {
        return first > second;
    }


}  // namespace hellmath