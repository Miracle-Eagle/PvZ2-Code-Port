#include <optional>

using namespace Global::Params;
using namespace Global::Types;
using namespace Global::Values;

namespace SharedObject::Classes
{
/// <summary> A Class used for Retrieving the Reward Item Type given in a Pinata Party (also known as Level of the Day or LOD). </summary>

class LevelOfTheDay_RewardItemType
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Category of a Pinata Party Reward. </summary>
<returns> The Pinata Party Reward Category. </returns> */

AwardCategory *Category;

/** <summary> Gets or Sets a Value which Contains Info about the Type of a Pinata Party Award. </summary>
<returns> The Pinata Party Award Type. </returns> */

AwardType *Award;

/** <summary> Gets or Sets a Value which Contains Info about the Parameter of a Pinata Party Award. </summary>
<returns> The Pinata Party Award Parameter. </returns> */

std::optional<AwardParams*> AwardParam;

/** <summary> Gets or Sets a Value which Contains Info about the Quantity of a Pinata Party Award. </summary>
<returns> The Pinata Party Award Quantity. </returns> */

int AwardQuantity;

/** <summary> Gets or Sets a Value which Contains Info about the Probability to Get a Pinata Party Reward. </summary>
<returns> The Probability of the Pinata Party Reward. </returns> */

int Probability;

/// <summary> Initializes a new Instance of the LevelOfTheDay_RewardItemType Class. </summary>

LevelOfTheDay_RewardItemType();
};

}
