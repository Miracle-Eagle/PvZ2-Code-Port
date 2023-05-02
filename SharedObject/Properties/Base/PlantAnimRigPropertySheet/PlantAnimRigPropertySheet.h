#include <string>
#include <vector>

using namespace SharedObject::Properties;

namespace SharedObject::Properties::Base
{
/** <summary> Retrieves all the Properties related to the PlantAnimRig Class. </summary>
<remarks> This Class uses the PropertySheetBase for Saving Info of the Current Instance. </remarks> */

class PlantAnimRigPropertySheet : public PropertySheetBase
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Attack Animations of a Plant. </summary>
<returns> The Attack Animations of the Plant. </returns> */

std::vector<std::string> AttackAnimations;

/// <summary> Initializes a new Instance of the PlantAnimRigPropertySheet Class. </summary>

PlantAnimRigPropertySheet();
};

}