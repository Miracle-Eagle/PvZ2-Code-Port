#include "HeathSeekerAnimRigProps.h"

using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::PlantAnimRig
{
/// <summary> Setups all the Fields from the HeathSeekerAnimRigProps Instance. </summary>

HeathSeekerAnimRigProps::HeathSeekerAnimRigProps()
{
this->AttackAnimations = { "attack", "attack_t2", "attack_t3" };
}

}