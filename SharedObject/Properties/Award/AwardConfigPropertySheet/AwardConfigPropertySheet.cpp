#include "AwardConfigPropertySheet.h"

using namespace Global::Params;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;

namespace SharedObject::Properties::Award
{
/// <summary> Setups all the Fields from the AwardConfigPropertySheet Instance. </summary>

AwardConfigPropertySheet::AwardConfigPropertySheet()
{

this->GiftBoxRewards = std::vector<LevelOfTheDay_RewardItemType>
{

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::GiftBox,
Award = AwardType::costumegroup_lod,
AwardQuantity = 1,
Probability = 2
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::GiftBox,
AwardParam = std::make_optional(AwardParams::powerupflickzombie),
Probability = 2,
Award = AwardType::powerupuse,
AwardQuantity = 1
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::GiftBox,
AwardParam = std::make_optional(AwardParams::powerupwizardfinger),
Probability = 2,
Award = AwardType::powerupuse,
AwardQuantity = 1
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::GiftBox,
AwardParam = std::make_optional(AwardParams::powerupsnowball),
Probability = 2,
Award = AwardType::powerupuse,
AwardQuantity = 1
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::GiftBox,
AwardParam = std::make_optional(AwardParams::powerupflamethrower),
Probability = 2,
Award = AwardType::powerupuse,
AwardQuantity = 1
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::GiftBox,
AwardParam = std::nullopt,
Probability = 1,
Award = AwardType::gems,
AwardQuantity = 10
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::VasebreakerGiftBox,
Award = AwardType::costumegroup_lod,
AwardQuantity = 1,
Probability = 4
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::VasebreakerGiftBox,
AwardParam = std::make_optional(AwardParams::powerupvasebreakerbutter),
Probability = 5,
Award = AwardType::powerupuse,
AwardQuantity = 1
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::VasebreakerGiftBox,
AwardParam = std::make_optional(AwardParams::powerupvasebreakermove),
Probability = 5,
Award = AwardType::powerupuse,
AwardQuantity = 1
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::VasebreakerGiftBox,
AwardParam = std::make_optional(AwardParams::powerupvasebreakerreveal),
Probability = 5,
Award = AwardType::powerupuse,
AwardQuantity = 1
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::VasebreakerGiftBox,
AwardParam = std::nullopt,
Probability = 3,
Award = AwardType::gems,
AwardQuantity = 20
},

new LevelOfTheDay_RewardItemType()
{
Category = AwardCategory::FirstGiftBox,
Award = AwardType::costumegroup_lod,
AwardQuantity = 1,
Probability = 1
}

};

}

}