#include "PlantBoost.h"

using namespace Global::Definitions;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Classes
{
/// <summary> Setups all the Fields from the PlantBoost Instance. </summary>

PlantBoost::PlantBoost()
{
this->PlantBoostProps = new RtWeakPtr<PlantBoostPropertySheet*>();
this->Value = 1;

this->CooldownDurationSeconds = 28800;
}

}