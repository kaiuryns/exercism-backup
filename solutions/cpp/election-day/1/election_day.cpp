#include <string>
#include <vector>

namespace election 
{

// The election result struct is already created for you:

    struct ElectionResult {
        // Name of the candidate
        std::string name{};
        // Number of votes the candidate has
        int votes{};
};

    int vote_count(ElectionResult& result)
    {
        return result.votes;
    }

    void increment_vote_count(ElectionResult& result, int new_votes)
    {
        result.votes += new_votes;
    }

ElectionResult& determine_result(std::vector<ElectionResult>& final_count) 
{
    int president{0};
    for (int i{0}; i < final_count.size(); ++i) 
    {
        if (final_count[i].votes > final_count[president].votes) 
        {
            president = i;
        }
    }
    final_count[president].name = "President " + final_count[president].name;
    return final_count[president];
}

}  // namespace election