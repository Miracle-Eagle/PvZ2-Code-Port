#include "BoardEntityScaledPropsEntry.h"

using namespace Global::Values;

namespace SharedObject::Entries
{
/// <summary> Setups all the Fields from the BoardEntityScaledPropsEntry Instance. </summary>

BoardEntityScaledPropsEntry::BoardEntityScaledPropsEntry()
{
this->Key = EntityKey->Hitpoints;
this->Formula = ScaledFormula::flat;

this->Arg1 = 0;
}

}