#include "DinosaurRaptorPropertySheet.h"

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/// <summary> Setups all the Fields from the DinosaurRaptorPropertySheet Instance. </summary>

DinosaurRaptorPropertySheet::DinosaurRaptorPropertySheet()
{
this->Speed = std::make_optional(0.6000000000000001f);

this->HitRect = new Rect()
{
mX = 10,
mY = 10,
mWidth = 32,
mHeight = 95
};

this->AttackRect = new Rect()
{
mX = -40,
mY = 0,
mWidth = 20,
mHeight = 50
};

this->FlipAttackRect = new Rect()
{
mX = 40,
mY = 0,
mWidth = 20,
mHeight = 50
};

this->ArtCenter = new SexyVector2()
{
x = 98,
y = 125
};

this->GroundTrackName = "ground_swatch";
this->SoundOnWalk = "";

this->SoundOnIdle = "";
this->ActivationGridX = 5;

this->MaxKicks = std::make_optional(5);
this->LeftMostKickGridX = std::make_optional(5);

this->TossTime = std::make_optional(0.5f);
this->TossHeight = std::make_optional(130.0f);

this->TossDistance = std::make_optional(-200.0f);
this->KickRectFudgeFactor = std::make_optional(40);

this->Timeout = std::make_optional(30);
this->ExitSpeedup = std::make_optional(4.0f);

this->UnaffectedZombies = new ClassRestrictionSet()
{
ListType = ListRestrictionType::includelist,
List = { "ZombieRomanBallista", "ZombiePirateCannon" }
};

}

}