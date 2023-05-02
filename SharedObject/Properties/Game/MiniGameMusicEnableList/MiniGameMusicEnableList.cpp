#include "MiniGameMusicEnableList.h"

namespace SharedObject::Properties::Game
{
/// <summary> Setups all the Fields from the MiniGameMusicEnableList Instance. </summary>

MiniGameMusicEnableList::MiniGameMusicEnableList()
{
this->EnabledMiniGameSuffixes = { "WildWest", "DarkAges", "Dino" };
this->EnabledMiniGameWorlds = { "cowboy", "dark", "dino" };
}

}