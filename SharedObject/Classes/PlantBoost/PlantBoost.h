using namespace Global::Definitions;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Classes
{
/// <summary> A Class used for Retrieving Info from a Plant Boost. </summary>

class PlantBoost
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Properties of a Plant Boost. </summary>
<returns> The Properties of the Plant Boost. </returns> */

RtWeakPtr<PlantBoostPropertySheet*> *PlantBoostProps;

/** <summary> Gets or Sets a Value which Contains Info about the Value of a Plant Boost. </summary>
<returns> The Value of the Plant Boost. </returns> */

float Value;

/** <summary> Gets or Sets a Value which Contains Info about the Cooldown Duration Seconds of a Plant Boost. </summary>
<returns> The Cooldown Duration Seconds of the Plant Boost. </returns> */

float CooldownDurationSeconds;

/// <summary> Initializes a new Instance of the PlantBoost Class. </summary>

PlantBoost();

/// <summary> Releases all the Resources Consumed by the PlantBoost Instance. </summary>

virtual ~PlantBoost()
{
delete PlantBoostProps;
}

};

}