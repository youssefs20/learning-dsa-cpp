#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count letters
int count_letters(const char text[])
{
    int letters = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha((unsigned char) text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// Function to count words
int count_words(const char text[])
{
    int words = 1; // words = spaces + 1
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isspace((unsigned char) text[i]))
        {
            words++;
        }
    }
    return words;
}

// Function to count sentences
int count_sentences(const char text[])
{
    int sentences = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}

// Manual rounding function
int my_round(float num)
{
    if (num >= 0)
        return (int)(num + 0.5);
    else
        return (int)(num - 0.5);
}

int main(void)
{
    char text[1000]; // buffer for input

    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Compute L and S
    float L = (float)letters / words * 100;
    float S = (float)sentences / words * 100;

    // Coleman–Liau index
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = my_round(index);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }

    return 0;
}
