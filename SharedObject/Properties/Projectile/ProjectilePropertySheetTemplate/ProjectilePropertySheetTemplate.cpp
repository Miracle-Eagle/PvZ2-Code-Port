#include "ProjectilePropertySheetTemplate.h"

using namespace Global::Definitions;
using namespace Global::Values;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Projectile
{
/// <summary> Setups all the Fields from the ProjectilePropertySheetTemplate Instance. </summary>

ProjectilePropertySheetTemplate::ProjectilePropertySheetTemplate()
{
this->BaseDamage = std::make_optional(0.0f);
this->HealAmount = std::make_optional(0.0f);

this->SplashDamage = std::make_optional(0.0f);
this->SplashRadius = std::make_optional(0.0f);

this->ShakeBoardOnSplash = std::make_optional(false);
this->CollisionFlags = std::vector<CollisionTypeFlags*>(1);

this->DamageFlags = std::vector<DamageTypeFlags*>(1);
this->DiesOnImpact = std::make_optional(true);

this->InitialVelocity = std::vector<ValueRange*>(3);
this->InitialAcceleration = std::vector<ValueRange*>(3);

this->InitialVelocityScale = std::vector<ValueRange*>(3);
this->InitialHeight = new ValueRange();

this->InitialRotation = new ValueRange();
this->InitialAngularVelocity = new ValueRange();

this->InitialScale = new ValueRange();
this->AttachedPAM = "";

this->AttachedPAMAnimRigClass = "";
this->AttachedPAMOffset = new SexyVector2();

this->AttachedPAMAnimationToPlay = { "" };
this->RenderImage = "";

this->CollisionRect = new FRect();
this->ImpactSoundEvent = "";

this->ImpactSoundThrottleTimer = std::make_optional(0.0f);
this->ImpactPAM = "";

this->ImpactPAMAnimationToPlay = { "" };
this->ImpactOffset = std::vector<ValueRange*>(2);
}

}