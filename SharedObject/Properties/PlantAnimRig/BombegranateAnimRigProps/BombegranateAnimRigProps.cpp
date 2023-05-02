#include "BombegranateAnimRigProps.h"

using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::PlantAnimRig
{
/// <summary> Setups all the Fields from the BombegranateAnimRigProps Instance. </summary>

BombegranateAnimRigProps::BombegranateAnimRigProps()
{
this->AttackAnimations = { "attack", "attack2", "attack3" };
}

}