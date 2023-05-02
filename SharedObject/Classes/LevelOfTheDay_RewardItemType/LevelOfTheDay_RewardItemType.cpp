#include "LevelOfTheDay_RewardItemType.h"

using namespace Global::Params;
using namespace Global::Types;
using namespace Global::Values;

namespace SharedObject::Classes
{
/// <summary> Setups all the Fields from the LevelOfTheDay_RewardItemType Instance. </summary>

LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType()
{
this->Category = AwardCategory::FirstGiftBox;
this->Award = AwardType::costumegroup_lod;

this->AwardQuantity = 1;
this->Probability = 1;
}

}