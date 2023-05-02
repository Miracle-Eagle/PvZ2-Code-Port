#include "KernelpultProps.h"

using namespace Global::Definitions;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;
using namespace SharedObject::Entries;
using namespace SharedObject::Packages;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Plant
{
/// <summary> Setups all the Fields from the KernelpultProps Instance. </summary>

KernelpultProps::KernelpultProps()
{
this->Cost = std::make_optional(100);
this->BeghouledCost = std::make_optional(1500);

this->Hitpoints = std::make_optional(300.0f);
this->PacketCooldown = std::make_optional(5.0f);

this->PlantGridType = PlantGridPlantingType::ground;
this->ButterChance = std::make_optional(0.25f);

this->ButterStormDelay = std::make_optional(1.0f);
this->ButterStormDuration = std::make_optional(3.0f);

this->AdditionalButterStormMissiles = std::make_optional(5);
this->ButterStormMissileSpeed = std::make_optional(700.0f);

this->ButterDuration = std::make_optional(8.0f);
this->ProjectileLobHeight = std::make_optional(350);

this->ProjectileTimeOfFlight = std::make_optional(1.2f);
this->PlantFoodPlayCount = std::make_optional(1);

this->PlantFoodActivationSound = "Play_Plant_KernelPult_Nitro";

this->Actions = std::vector<PlantAction>
{

new PlantAction()
{
Type = PlantActionType::projectile,
Projectile = new RtWeakPtr<ProjectilePropertySheet*>(ProjectileTypes_Reference::KernelDefault, ProjectileTypes_Reference),
InitialMinCooldownTime = 0.0f,
CooldownTimeMin = 2.85f,
CooldownTimeMax = 3.0f,

SpawnOffset = new SexyVector2()
{
x = 15.0f,
y = -95.0f
}

},

new PlantAction()
{
Type = PlantActionType::projectile,
Projectile = new RtWeakPtr<ProjectilePropertySheet*>(ProjectileTypes_Reference::ButterDefault, ProjectileTypes_Reference),

SpawnOffset = new SexyVector2()
{
x = 15.0f,
y = -95.0f
}

},

new PlantAction()
{
Type = PlantActionType::special,
Projectile = new RtWeakPtr<ProjectilePropertySheet*>(ProjectileTypes_Reference::ButterDefault, ProjectileTypes_Reference)
}

};

this->ArtCenter = new SexyVector2()
{
x = 99,
y = 111
};

this->PlantStats = std::vector<BoardEntityStat>
{

new BoardEntityStat()
{
Type = StatType::damage,
Value = StatValue::damage_damage1
},

new BoardEntityStat()
{
Type = StatType::range,
Value = StatValue::range_lobbed
},

new BoardEntityStat()
{
Type = StatType::recharge,
Value = StatValue::recharge_recharge4
}

};

this->ScaledProps = std::vector<BoardEntityScaledPropsEntry>
{

new BoardEntityScaledPropsEntry()
{
Key = EntityKey::MasteryBoostChance,
Formula = ScaledFormula::boost_mastery,
Arg1 = 10,
Arg2 = 0.01f
},

new BoardEntityScaledPropsEntry()
{
Key = EntityKey::MasteryResistancePiercing,
Formula = ScaledFormula.flat,
Arg1 = 0.01f
}

};

this->ZenGardenSproutWeight = std::make_optional(50);
this->ZenGardenBoostCost = std::make_optional(12);

this->ZenGardenDurationOverrideSeconds = std::make_optional(18000);

this->Boosts = std::vector<PlantBoost>
{

new PlantBoost()
{
PlantBoostProps = new RtWeakPtr<PlantBoostPropertySheet*>(PropertySheets_Reference::BoostFirstStrike, PropertySheets_Reference),
Value = 1,
CooldownDurationSeconds = 28800
}

};

SuggestionAlts = { "akee", "melonpult", "cabbagepult" };
}

}