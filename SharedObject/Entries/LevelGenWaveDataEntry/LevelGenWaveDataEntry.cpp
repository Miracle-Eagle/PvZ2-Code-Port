#include "LevelGenWaveDataEntry.h"

namespace SharedObject::Entries
{
/// <summary> Setups all the Fields from the LevelGenWaveDataEntry Instance. </summary>

LevelGenWaveDataEntry::LevelGenWaveDataEntry()
{
this->UID = "MyUID";
this->Weight = 0.0f;

this->StrengthMin = 0.0f;
this->StrengthMax = 0.0f;

this->MaxZombieTypes = 0;
this->KeywordLimits = std::unordered_map<std::wstring, int>();

this->PlantFoodMin = 0;
this->PlantFoodMax = 0;

this->HugeWaves = std::vector<int>(0);
this->Waves = std::vector<float>(0);
}

}