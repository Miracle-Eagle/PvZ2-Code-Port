#include <string>

using namespace Global::Types;
using namespace Global::Values;

namespace SharedObject::Classes
{
/// <summary> A Class used for Retrieving the Stats from a Board Entity Instance. </summary>

class BoardEntityStat
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Type of a Stat. </summary>
<returns> The Type of the Stat. </returns> */

StatType *Type;

/** <summary> Gets or Sets a Value which Contains Info about the Value of a Stat. </summary>
<returns> The Value of the Stat. </returns> */

std::string Value;

/// <summary> Initializes a new Instance of the BoardEntityStat Class. </summary>

BoardEntityStat();
};

}
