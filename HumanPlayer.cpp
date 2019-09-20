#include "HumanPlayer.hpp"
#include "iostream"


bool HumanPlayer::doesUserWantToBuy(std::string& command)
{
    return command.compare("Y") == 0;
}

bool HumanPlayer::wantToBuy()
{
    std::cout<<"Do you want to buy real estate? (N/Y)"<<std::endl;
    std::string command;
    std::cin>>command;
    return doesUserWantToBuy(command);
}
