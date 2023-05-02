#include "DinosaurPterodactylPropertySheet.h"

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/// <summary> Setups all the Fields from the DinosaurPterodactylPropertySheet Instance. </summary>

DinosaurPterodactylPropertySheet::DinosaurPterodactylPropertySheet()
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
mWidth = 200,
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
this->MovementSpeed = std::make_optional(145.0f);

this->MinimumX = std::make_optional(5);
this->MaximumX = std::make_optional(8);

this->GrabbingRangeError = std::make_optional(5.0f);
this->NumSecondsToCooldownAfterCarryingZombie = std::make_optional(5.0f);

this->NumZombiesToCarry = std::make_optional(3);

this->ValidZombieTypes = new ClassRestrictionSet()
{
ListType = ListRestrictionType::includelist,
List = { "dino", "dino_armor1", "dino_armor2", "dino_armor3", "dino_armor4", "dino_bully", "dino_bully_veteran" }
};

this->Timeout = std::make_optional(30);
this->ExitSpeedup = std::make_optional(1.0f);

this->UnaffectedZombies = new ClassRestrictionSet()
{
ListType = ListRestrictionType::includelist,
List = { "ZombieRomanBallista", "ZombiePirateCannon" }
};

}

}