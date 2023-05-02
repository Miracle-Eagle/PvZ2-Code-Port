#include "DinosaurTyrannosaurusPropertySheet.h"

using namespace Global::Definitions;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/// <summary> Setups all the Fields from the DinosaurTyrannosaurusPropertySheet Instance. </summary>

DinosaurTyrannosaurusPropertySheet::DinosaurTyrannosaurusPropertySheet()
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
mX = 15,
mY = 0,
mWidth = 800,
mHeight = 95
};

this->EatRect = new Rect()
{
mX = 0,
mY = 0,
mWidth = 64,
mHeight = 95
};

this->ArtCenter = new SexyVector2()
{
x = 90,
y = 135
};

this->SoundOnWalk = "";
this->SoundOnIdle = "";

this->ActivationGridX = std::make_optional(7);
this->EatCooldown = std::make_optional(1);

this->EatGridX = std::make_optional(6);
this->MaxZombiesToEat = std::make_optional(5);

this->MaxTimesToRoar = std::make_optional(1);
this->RoarDelay = std::make_optional(3.0f);

this->Cooldown = std::make_optional(2.0f);
this->Timeout = std::make_optional(30);

this->ExitSpeedup = std::make_optional(1.0f);
this->UnaffectedZombies = new ClassRestrictionSet();
}

}