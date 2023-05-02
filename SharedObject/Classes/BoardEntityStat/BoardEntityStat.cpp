#include "BoardEntityStat.h"

using namespace Global::Types;
using namespace Global::Values;

namespace SharedObject::Classes
{
/// <summary> Setups all the Fields from the BoardEntityStat Instance. </summary>

BoardEntityStat::BoardEntityStat()
{
this->Type = StatType::armor;
this->Value = StatValue::toughness_armor0;
}

}
