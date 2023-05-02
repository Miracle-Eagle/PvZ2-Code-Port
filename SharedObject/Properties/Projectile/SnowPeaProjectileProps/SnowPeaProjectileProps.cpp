#include "SnowPeaProjectileProps.h"

using namespace Global::Definitions;
using namespace Global::Values;
using namespace SharedObject::Entries;
using namespace SharedObject::Packages;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Projectile
{
/// <summary> Setups all the Fields from the SnowPeaProjectileProps Instance. </summary>

SnowPeaProjectileProps::SnowPeaProjectileProps()
{
this->ClassName = nameof(ProjectileTypes.SnowPeaProjectile);
this->BaseDamage = std::make_optional(20);

this->LinearAOE = std::make_optional(1);
this->CollisionFlags = { CollisionTypeFlags::griditems, CollisionTypeFlags::ground_zombies, CollisionTypeFlags::off_ground_zombies };

this->DamageFlags = { DamageTypeFlags::shooter };

this->Conditions = std::vector<ZombieConditionEntry>
{

new ZombieConditionEntry()
{
Condition = ZombieConditions::chill,

Duration = new ValueRange()
{
Min = 10.0f,
Max = 10.0f
}

}

};

this->InitialVelocity = std::vector<ValueRange>
{

new ValueRange()
{
Min = 333.0f,
Max = 333.0f
},

new ValueRange(),
new ValueRange()
};

this->InitialScale = new ValueRange()
{
Min = 0.95f,
Max = 1.05f
};

this->AttachedPAM = "POPANIM_EFFECTS_T_SNOW_PEA";

this->AttachedPAMOffset = new SexyVector2()
{
x = -112.5f,
y = -100
};

this->AttachedPAMAnimationToPlay = { "animation", "animation2", "animation3" };

this->CollisionRect = new FRect()
{
mX = -15.0f,
mY = -15.0f,
mWidth = 30.0f,
mHeight = 30.0f
};

this->ImpactSoundEvent = "Play_SnowPea_Impact";
this->ImpactSoundThrottleTimer = std::make_optional(0.075f);

this->ImpactPAM = "POPANIM_EFFECTS_T_SPLAT_SNOW_PEA";
this->ImpactPAMAnimationToPlay = { "animation", "animation2", "animation3" };

this->ImpactOffset = std::vector<ValueRange*>(2);
}

}