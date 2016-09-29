#include <iostream>
#include <string>

void AdLib();
bool PlayAgain();
std::string GetWord(std::string);

std::string playAgainIn;
std::string wordInput;

int main()
{
    do
    {
        AdLib();
    } while (PlayAgain());
    return 0;
}

void AdLib()
{
    return;
}

bool PlayAgain()
{
    std::cout << "Want to play again? (y/n)";
    getline(std::cin, playAgainIn);
    if(playAgainIn == "Y" || playAgainIn == "y")
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string GetWord(std::string WORDTYPE)
{
    std::cout << "Type a " << WORDTYPE << "." << std::endl;
    getline(cin, wordInput)
    return wordInput;
}
