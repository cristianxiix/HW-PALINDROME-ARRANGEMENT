#include "Functions.h"
void checkIfPalindromeRearranged(std::string x)
{
    std::unordered_map<char, int> m1;
    std::unordered_map<char, int>::iterator it;


    for (int i = 0; i < x.length(); i++)
    {
        if (m1.find(x[i]) == m1.end())
        {
            m1.insert({ x[i], 1 });
        }
        else
        {
            m1[x[i]] += 1;
        }
    }
    bool isT = true;
    int count = 0;
    for (it = m1.begin(); it != m1.end(); it++)
    {
        if (x.length() % 2 == 0)  /// daca e par
        {
            if (it->second % 2 != 0)
            {
                isT = false;
                break;
            }
            else
                continue;
        }
        else
        {
            if (it->second % 2 != 0) // impara
            {
                count++;

            }
            else
            {
                continue;
            }
        }
    }

    if (isT)
        std::cout << "yes!" << std::endl;
    else if (count > 1)
        std::cout << "NO!" << std::endl;
    else
        std::cout << "NO!" << std::endl;


}