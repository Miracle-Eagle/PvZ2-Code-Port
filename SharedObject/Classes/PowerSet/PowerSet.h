#include <vector>

namespace SharedObject::Classes { class PowerNode; }

namespace SharedObject::Classes
{
/// <summary> A Class used for Retrieving Info from a Power Set. </summary>

class PowerSet
{

public:

/** <summary> Obtains or Creates a List of Powers for the Current Power Set. </summary>
<returns> The List of Powers. </returns> */

std::vector<PowerNode*> List;

/** <summary> Initializes a new Instance of the PowerSet Class. </summary> */

PowerSet();
};

}