#include "high_scores.h"

int32_t latest(const int32_t *scores, size_t scores_len)
{
    return scores[scores_len - 1];
}
int32_t personal_best(const int32_t *scores, size_t scores_len)
{
    int32_t best = 0;
    
    for (size_t i = 0; i < scores_len; i++)
    {
        if (best < scores[i])
        {
            best = scores[i];
        }
    }
    return best;
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output)
{
    int32_t top[scores_len];

    for (size_t i = 0; i < scores_len; i++)
    {
        top[i] = scores[i];
    }

    for (size_t i = 0; i < scores_len; i++)
    {
        for (size_t j = i + 1; j < scores_len; j++)
        {
            if(top[i] < top[j])
            {
                int32_t tmp = top[i];
                top[i] = top[j];
                top[j] = tmp;
            }
        }
    }

    size_t count = (scores_len < 3) ? scores_len : 3;
    
    for (size_t i = 0; i < count; i++)
    {
        output[i] = top[i];
    }
    return count;
}