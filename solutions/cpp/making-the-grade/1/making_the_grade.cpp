#include <array>
#include <string>
#include <vector>

std::vector<int> round_down_scores(std::vector<double> student_scores) 
{
    std::vector<int> scores{};
    for (int i {0}; i < student_scores.size(); ++i)
    {
        scores.emplace_back(student_scores[i]);
    }
    
    return scores;
}

int count_failed_students(std::vector<int> student_scores) 
{
    int losers{0};
    for (int i{0}; i < student_scores.size(); ++i)
    {
        if (student_scores[i] <= 40)
        {
            ++losers;
        }
    }
    return losers;
}

std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) 
{
    std::vector<int> winners{};
    
    for (int i{0}; i < student_scores.size(); ++i)
    {
        if (student_scores[i] >= threshold)
        {
            winners.emplace_back(student_scores[i]);
        }
    }
    return winners;
}

std::array<int, 4> letter_grades(int highest_score) 
{
    std::array<int, 4> scores {41, 0, 0, 0};
    int add {(highest_score - 40) / 4};
    for (int i {1}; i < 4; ++i)
    {
        scores[i] = scores[i - 1] + add;
    }

    return scores;
}

std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) 
{
    std::vector<std::string> names{};
    for (int i {0}; i < student_scores.size(); ++i)
    {
        names.emplace_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }

    return names;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) 
{
    int i{0};
    std::string best{""};
    while (i < student_scores.size())
    {
        if (student_scores[i] == 100)
        {
            best = student_names[i];
            break;
        }
        ++i;
    }
    return best;
}
