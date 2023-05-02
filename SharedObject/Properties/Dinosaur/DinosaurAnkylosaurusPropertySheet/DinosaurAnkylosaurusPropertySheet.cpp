#include "DinosaurAnkylosaurusPropertySheet.h"

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/// <summary> Setups all the Fields from the DinosaurAnkylosaurusPropertySheet Instance. </summary>

DinosaurAnkylosaurusPropertySheet::DinosaurAnkylosaurusPropertySheet()
{
this->Speed =std::make_optional(0.5f);

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
mHeight = 60
};

this->ArtCenter = new SexyVector2()
{
x = 135,
y = 148
};

this->ShadowOffset = new SexyVector3()
{
x = 5,
y = 0.0,
z = 1.4
};

this->GroundTrackName = "ground_swatch";
this->SoundOnWalk = "";

this->SoundOnIdle = "";
this->AttackRangeMinX = std::make_optional(2);

this->ActivationGridX = std::make_optional(7);
this->PauseBetweenAttacks = std::make_optional(5.0f);

this->MaxZombiesToFling = std::make_optional(5);
this->MaxGridDistanceToFling = std::make_optional(5);

this->Timeout = std::make_optional(30);
this->ExitSpeedup = std::make_optional(1.0f);

this->UnaffectedZombies = new ClassRestrictionSet()
{
ListType = ListRestrictionType::includelist,
List = { "ZombieRomanBallista", "ZombiePirateCannon" }
};

}

}