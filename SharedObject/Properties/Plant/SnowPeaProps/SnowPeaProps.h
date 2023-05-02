#include <optional>
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
/** <summary> Retrieves all the Properties related to the SnowPea Class. </summary>
<remarks> This Class uses the PlantPropertySheet for Saving Info from the Current Instance. </remarks> */

class SnowPeaProps : public PlantPropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Number of Projectiles this Plant Shoots when the Plant Food Effects are Active. </summary>
<returns> The Number of Projectiles this Plant Shoots when the Plant Food Effects are Active. </returns> */

std::optional<int> PlantFoodProjectileCount;

/** <summary> Gets or Sets a Value which Contains Info about the Percentage this Plant has of Shooting a Freezing Pea. </summary>
<returns> The Percentage this Plant has of Shooting a Freezing Pea. </returns> */

std::optional<float> PercentChanceOfFreezingPea;

/// <summary> Initializes a new Instance of the SnowPeaProps Class. </summary>

SnowPeaProps();
};

}