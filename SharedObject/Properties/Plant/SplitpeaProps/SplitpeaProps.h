#include <optional>
#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;
using namespace SharedObject::Entries;
using namespace SharedObject::Packages;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Plant
{
/** <summary> Retrieves all the Properties related to the Splitpea Class. </summary>
<remarks> This Class uses the PlantPropertySheet for Saving Info from the Current Instance. </remarks> */

class SplitpeaProps : public PlantPropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Number of Projectiles the Forward Plant Shoots when the Plant Food Effects are Active. </summary>
<returns> The Number of Projectiles the Forward Plant Shoots when the Plant Food Effects are Active. </returns> */

std::optional<int> PlantFoodForwardProjectileCount;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Projectiles the Backward Plant Shoots when the Plant Food Effects are Active. </summary>
<returns> The Number of Projectiles the Backward Plant Shoots when the Plant Food Effects are Active. </returns> */

std::optional<int> PlantFoodBackwardProjectileCount;

/// <summary> Initializes a new Instance of the SplitpeaProps Class. </summary>

SplitpeaProps();
};

}