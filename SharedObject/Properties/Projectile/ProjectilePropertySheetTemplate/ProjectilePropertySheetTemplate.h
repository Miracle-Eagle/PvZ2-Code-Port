#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Values;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Projectile
{
/** <summary> Retrieves all the Properties related to the ProjectileTemplate Class. </summary>
<remarks> This Class uses the ProjectilePropertySheet for Saving Info of the Current Instance. </remarks> */

class ProjectilePropertySheetTemplate : public ProjectilePropertySheet
{

public:

/// <summary> Initializes a new Instance of the ProjectilePropertySheetTemplate Class. </summary>

ProjectilePropertySheetTemplate();
};

}