#include "ZombieConditionEntry.h"

using namespace Global::Definitions;
using namespace Global::Values;

namespace SharedObject::Entries
{
/// <summary> Setups all the Fields from the ZombieConditionEntry Instance. </summary>

ZombieConditionEntry::ZombieConditionEntry()
{
this->Condition = ZombieConditions::none;
this->Duration = new ValueRange();
}

}