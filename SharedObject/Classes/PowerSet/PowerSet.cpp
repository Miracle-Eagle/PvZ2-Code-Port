#include "PowerSet.h"
#include "PowerNode.h"

namespace SharedObject::Classes
{
/// <summary> Setups all the Fields from the PowerSet Instance. </summary>

PowerSet::PowerSet()
{
this->List = { new PowerNode() };
}

}