// WordCount.cpp

#include "WordCount.h"
#include <cstring>

int WordCount::countWords(char *string)
{
    int count = 0;
    bool word = false;
    for (int i = 0; i < strlen(string); i++)
    {
        if (*(string + i) == ' ') // pointer notation
        {
            word = false;
        }
        else if (!word)
        {
            word = true;
            count++;
        }
    }
    return count;
}
