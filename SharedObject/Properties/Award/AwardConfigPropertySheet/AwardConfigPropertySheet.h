#include <optional>
#include <vector>

#include "../PropertySheetBase.h"

using namespace Global::Params;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;

namespace SharedObject::Properties::Award
{
/** <summary> Retrieves all the Properties related to the AwardConfig Class. </summary>
<remarks> This Class uses the PropertySheetBase for Saving Info of the Current Instance. </remarks> */

class AwardConfigPropertySheet : public PropertySheetBase
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Reward Types of a Gift Box. </summary>
<returns> The Gift Box Reward Types. </returns> */

std::vector<LevelOfTheDay_RewardItemType*> GiftBoxRewards;

/// <summary> Initializes a new Instance of the AwardConfigPropertySheet Class. </summary>

AwardConfigPropertySheet();
};

}