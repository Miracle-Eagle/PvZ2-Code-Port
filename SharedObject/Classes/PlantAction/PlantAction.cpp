#include "PlantAction.h"

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Classes
{
/// <summary> Setups all the Fields from the PlantAction Instance. </summary>

PlantAction::PlantAction()
{
this->Type = PlantActionType::projectile;
this->Projectile = new RtWeakPtr<ProjectilePropertySheet*>();

this->ExplodeType = SplashDamageType::none;
this->ExplodeRadius = std::make_optional(0.0f);

this->TriggerType = PlantActionTriggerType::none;
this->DieAfterExplode = std::make_optional(true);

this->InitialMinCooldownTime = std::make_optional(0.0f);
this->CooldownTimeMin = std::make_optional(1.0f);

this->CooldownTimeMax = std::make_optional(1.0f);
this->Damage = std::make_optional(0);

this->Burns = std::make_optional(false);
this->ChillDuration = std::make_optional(0);

this->FreezeDuration = std::make_optional(0);
this->StunDuration = std::make_optional(0);

this->RectTriggerRange = new Rect();
this->SpawnOffset = new SexyVector2();

this->SecondaryAction = std::make_optional(false);
}

}