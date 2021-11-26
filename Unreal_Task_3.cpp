#include <iostream>
#include <string>

int main()
{
    //Name request:
    std::string nameRequest{ "Please enter your name : \n" };
    std::cout << nameRequest;
    std::string characterName;
    std::getline(std::cin, characterName);

    // Greetings:
    std::string greeting{ "Hi, " };
    std::cout << "\n" << greeting << characterName << "!\n";

    // First variant of analisys realization:
    int nameLength = characterName.length();
    std::cout << "Your name's length: " << nameLength << "\n\n";
    std::cout << "First symbol in your name: " << characterName[0] << "\n";
    std::cout << "Last symbol in your name: " << characterName[nameLength - 1] << "\n";

    // Alternative variant of analisys realization:
    std::cout << "\n(Or if we are using iterators):\n";
    std::cout << "First symbol in your name: " << *characterName.begin() << "\n";
    std::cout << "Last symbol in your name: " << *(characterName.end() - 1) << "\n";
}