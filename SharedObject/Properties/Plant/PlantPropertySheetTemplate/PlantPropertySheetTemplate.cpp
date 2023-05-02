#include "PlantPropertySheetTemplate.h"

using namespace Global::Definitions;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;
using namespace SharedObject::Entries;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Plant
{
/// <summary> Setups all the Fields from the PlantPropertySheetTemplate Instance. </summary>

PlantPropertySheetTemplate::PlantPropertySheetTemplate()
{
this->Cost = std::make_optional(0);
this->BeghouledCost = std::make_optional(0);

this->Hitpoints = std::make_optional(0.0f);
this->PacketCooldown = std::make_optional(0.0f);

this->StartingCooldown = std::make_optional(0.0f);
this->PlantGridType = PlantGridPlantingType::ground;

this->Height = BoardEntityHeight::normal;
this->PlantFoodDurationSeconds = std::make_optional(0);

this->PlantFoodPlayCount = std::make_optional(1);

this->Actions = std::vector<PlantAction>
{

new PlantAction()
{
Type = PlantActionType::projectile,
Projectile = new RtWeakPtr<ProjectilePropertySheet*>(),
ExplodeType = SplashDamageType::none,
ExplodeRadius = 0.0f,
TriggerType = PlantActionTriggerType::none,
DieAfterExplode = true,
InitialMinCooldownTime = 0,
CooldownTimeMin = 1.0f,
CooldownTimeMax = 1.0f,
Damage = 0,
Burns = false,
ChillDuration = 0,
FreezeDuration = 0,
StunDuration = 0,
RectTriggerRange = new Rect(),
SpawnOffset = new SexyVector2(),
SecondaryAction = false
}

};

this->ScaledProps = std::vector<BoardEntityScaledPropsEntry>
{

new BoardEntityScaledPropsEntry()
{
Key = EntityKey::Hitpoints,
Formula = ScaledFormula::flat,
Arg1 = 10
},

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

this->PlantingOffsetY = std::make_optional(0.0f);
this->CursorPreviewOffset = new SexyVector2();

this->GridWidth = std::make_optional(1);
this->GridHeight = std::make_optional(1);

this->GridItemDamage = std::make_optional(0);
this->ArtCenter = new SexyVector2();

this->DangerRoomWeight = std::make_optional(100);
this->HitRectAdjust = new Rect();
}

}