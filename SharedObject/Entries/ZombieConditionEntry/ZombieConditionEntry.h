using namespace Global::Definitions;
using namespace Global::Values;

namespace SharedObject::Entries
{
/// <summary> A Class Entry used for Retrieving Info from a Zombie Condition. </summary>

class ZombieConditionEntry
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Type of a Zombie Condition. </summary>
<returns> The Type of Condition. </returns> */

ZombieConditions *Condition;

/** <summary> Gets or Sets a Value which Contains Info about the Duration of a Zombie Condition. </summary>
<returns> The Duration of the Condition. </returns> */

ValueRange *Duration;

/// <summary> Initializes a new Instance of the ZombieConditionEntry Class. </summary>

ZombieConditionEntry();

/// <summary> Releases all the Resources Consumed by the ZombieConditionEntry Instance. </summary>

virtual ~ZombieConditionEntry()
{
delete Condition;
delete Duration;
}

};

}