#include "SnowPeaProps.h"

using namespace Global::Definitions;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;
using namespace SharedObject::Entries;
using namespace SharedObject::Packages;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Plant
{
/// <summary> Setups all the Fields from the SnowPeaProps Instance. </summary>

SnowPeaProps::SnowPeaProps()
{
this->Cost = std::make_optional(150);
this->BeghouledCost = std::make_optional(2500);

this->Hitpoints = std::make_optional(300.0f);
this->PacketCooldown = std::make_optional(5.0f);

this->PlantGridType = PlantGridPlantingType::ground;
this->PlantFoodDurationSeconds = std::make_optional(2.0f);

this->PlantFoodProjectileCount = std::make_optional(60);
this->PercentChanceOfFreezingPea = std::make_optional(0);

this->Actions = std::vector<PlantAction>
{

new PlantAction()
{
Type = PlantActionType::projectile,
Projectile = new RtWeakPtr<ProjectilePropertySheet*>(ProjectileTypes_Reference::SnowPeaProjectile, ProjectileTypes_Reference),
ProjectileLaunchSound = "Play_Throw",
InitialMinCooldownTime = 0.0f,
CooldownTimeMin = 1.35f,
CooldownTimeMax = 1.5f,

SpawnOffset = new SexyVector2()
{
x = 35.0f,
y = -32.0f
}

},

new PlantAction()
{
Type = PlantActionType::special,
Projectile = nullptr,
ChillDuration = 10.0f,

SpawnOffset = new SexyVector2()
{
x = 35.0f,
y = -32.0f
}

},

new PlantAction()
{
Type = PlantActionType::projectile,
Projectile = new RtWeakPtr<ProjectilePropertySheet*>(ProjectileTypes_Reference::SnowPeaFreezingProjectile, ProjectileTypes_Reference),
ProjectileLaunchSound = "Play_Throw",
InitialMinCooldownTime = 0.0f,
CooldownTimeMin = 1.35f,
CooldownTimeMax = 1.5f,

SpawnOffset = new SexyVector2()
{
x = 35.0f,
y = -32.0f
}

},

new PlantAction()
{
Type = PlantActionType::projectile,
Projectile = new RtWeakPtr<ProjectilePropertySheet*>(ProjectileTypes_Reference::SnowPeaProjectile, ProjectileTypes_Reference),
ProjectileLaunchSound = "Play_Throw",
InitialMinCooldownTime = 0.0f,
CooldownTimeMin = 1.35f,
CooldownTimeMax = 1.5f,

SpawnOffset = new SexyVector2()
{
x = 35.0f,
y = -32.0f
}

}

};

this->ArtCenter = new SexyVector2()
{
x = 35.0f,
y = -32.0f
};


this->PlantStats = std::vector<BoardEntityStat>
{

new BoardEntityStat()
{
Type = StatType::damage,
Value = StatValue::damage_damage2
},

new BoardEntityStat()
{
Type = StatType::range,
Value = StatValue::range_straight
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

this->ZenGardenSproutWeight = std::make_optional(25);
this->ZenGardenBoostCost = std::make_optional(10);

this->ZenGardenDurationOverrideSeconds = std::make_optional(12600);

this->Boosts = std::vector<PlantBoost>
{

new PlantBoost()
{
PlantBoostProps = new RtWeakPtr<PlantBoostPropertySheet*>(PropertySheets_Reference::BoostFirstStrike, PropertySheets_Reference),
Value = 1,
CooldownDurationSeconds = 28800
}

};

}

}