#include "DinosaurStegosaurusPropertySheet.h"

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/// <summary> Setups all the Fields from the DinosaurStegosaurusPropertySheet Instance. </summary>

DinosaurStegosaurusPropertySheet::DinosaurStegosaurusPropertySheet()
{
this->Speed = std::make_optional(0.5f);

this->HitRect = new Rect()
{
mX = 10,
mY = 10,
mWidth = 32,
mHeight = 95
};

this->AttackRect = new Rect()
{
mX = 15,
mY = 0,
mWidth = 20,
mHeight = 95
};

this->ArtCenter = new SexyVector2()
{
x = 90,
y = 125
};

this->GroundTrackName = "ground_swatch";
this->SoundOnWalk = "";

this->SoundOnIdle = "";
this->ActivationGridRangeStartX = std::make_optional(6.6f);

this->ActivationGridRangeWidth = std::make_optional(1);
this->ActivationGridX = 7;

this->ZombieTailStaggerX = std::make_optional(20);
this->ZombieAnnoyingGridX = std::make_optional(8);

this->NumTimesToToss = std::make_optional(3);
this->NumZombiesToFling = std::make_optional(3);

this->TossReadyUpTime = std::make_optional(1.5f);
this->TossTime = std::make_optional(0.5f);

this->TossHeight = std::make_optional(120.0f);
this->TossDistanceMin = std::make_optional(210.0f);

this->TossDistanceMax = std::make_optional(240.0f);
this->TailDamageRadius = std::make_optional(1);

this->TailSmashDamage = std::make_optional(3000);
this->TailAOEDamage = std::make_optional(200);

this->Timeout = std::make_optional(30);
this->ExitSpeedup = std::make_optional(1.0f);

this->UnaffectedZombies = new ClassRestrictionSet()
{
ListType = ListRestrictionType::includelist,
List = { "ZombieRomanBallista", "ZombiePirateCannon" }
};

}

}