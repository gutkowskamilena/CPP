#include <iostream>
#include "Hangman.hpp"


Hangman::Hangman(std::string secret)
{
    this->secret = secret;
    this->guessedWord = secret;
    for (int i = 0; i < secret.length(); i++)
    {
        guessedWord[i] = '_';
       
    }
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = false;
    }
}

std::string Hangman::getGuess()
{

    return guessedWord;
}

std::string Hangman::getAlphabet()
{
    std::string result;
    for (int i = 0; i < 26; i++)
    {
        if (!alphabet[i])
        {
            result += 'a' + i;
        }
        else
        {
            result += '_';
        }
    }
    return result;
}

bool Hangman::guess(char c)
{
    alphabet[c - 'a'] = true;
    bool guessed = false;
    //std::string previous = guessedWord;
    for (int i = 0; i < secret.length(); i++)
    {
        if (secret[i] == c)
        {
            guessedWord[i] = c;
            guessed = true;
        }
        else
            continue;

    }
    if (!guessed) //if (previous == guessWord)
    {
        attempt--;
    }
    
    return (guessedWord == secret) || attempt == 0 ;
    
}
std::string Hangman::getSecret()
{
    return secret;
}
