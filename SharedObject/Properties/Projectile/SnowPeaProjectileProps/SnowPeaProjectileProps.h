#include <optional>
#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Values;
using namespace SharedObject::Entries;
using namespace SharedObject::Packages;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Projectile
{
/** <summary> Retrieves all the Properties related to the SnowPeaProjectile Class. </summary>
<remarks> This Class uses the ProjectilePropertySheet for Saving Info of the Current Instance. </remarks> */

class SnowPeaProjectileProps : public ProjectilePropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Linear Area of Effect (AOE) of a Projectile. </summary>
<returns> The Linear Area of Effect of the Projectile. </returns> */

std::optional<float> LinearAOE;

/// <summary> Initializes a new Instance of the SnowPeaProjectileProps Class. </summary>

SnowPeaProjectileProps();
};

}