#include "PowerNode.h"

using namespace Global::Types;
using namespace Global::Values;

namespace SharedObject::Classes
{
/// <summary> Setups all the Fields from the PowerNode Instance. </summary>

PowerNode::PowerNode()
{
this->Type = PowerType::SunProducer;
this->Context = PowerContext::Normal;

this->Props = "MyProperties";
}
	
}