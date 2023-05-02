#include <string>

using namespace Global::Types;
using namespace Global::Values;

namespace SharedObject::Classes
{
/// <summary> A Class used for Retrieving Info from a Power Node. </summary>

class PowerNode
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Type of a Power. </summary>
<returns> The Type of the Power. </returns> */

PowerType *Type;

/** <summary> Gets or Sets a Value which Contains Info about the Context of a Power. </summary>
<returns> The Context of the Power. </returns> */

PowerContext *Context;

/** <summary> Gets or Sets a Value which Contains Info about the Properties of a Power. </summary>
<returns> The Properties of the Power. </returns> */

std::string Props;

/// <summary> Initializes a new Instance of the PowerNode Class. </summary>

PowerNode();

/// <summary> Releases all the Resources Consumed by the PowerNode Instance. </summary>

virtual ~PowerNode()
{
delete Type;
delete Context;
}

};

}