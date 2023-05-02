#include "LevelGenZombieDataEntry.h"

namespace SharedObject::Entries
{
/// <summary> Setups all the Fields from the LevelGenZombieDataEntry Instance. </summary>

LevelGenZombieDataEntry::LevelGenZombieDataEntry()
{
this->ZombieTypeID = "MyTypeID";
this->Weight = 0.0f;

this->Strength = 0.0f;
this->Worlds = std::vector<std::string>(0);

this->Keywords = std::vector<std::string>(0);
}

}