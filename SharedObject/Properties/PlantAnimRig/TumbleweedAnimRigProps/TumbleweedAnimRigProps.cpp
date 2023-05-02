#include "TumbleweedAnimRigProps.h"

using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::PlantAnimRig
{
/// <summary> Setups all the Fields from the TumbleweedAnimRigProps Instance. </summary>

TumbleweedAnimRigProps::TumbleweedAnimRigProps()
{
this->AttackAnimations = { "attack", "attack2", "attack3" };
}

}