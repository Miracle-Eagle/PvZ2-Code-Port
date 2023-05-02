#include "LevelGenWaveResult.h"

namespace SharedObject::Classes
{
/// <summary> Setups all the Fields from the LevelGenWaveResult Instance. </summary>

LevelGenWaveResult::LevelGenWaveResult()
{
this->Budget = 0.0f;
this->Actual = 0.0f;

this->Zombies = std::vector<std::string>(0);
this->PlantFoodCount = 0;
}

}