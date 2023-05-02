#include <string>
#include <vector>

namespace SharedObject::Properties::Game
{
/// <summary> A Class used for Retrieving the Priority List from a SeedChooser. </summary>

class SeedChooserPriorityList
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Classic List of a SeedChooser. </summary>
<returns> The Classic List of the Seed Chooser. </returns> */

std::vector<std::string> ClassicList;

/** <summary> Gets or Sets a Value which Contains Info about the Feature List of a SeedChooser. </summary>
<returns> The Feature List of the SeedChooser. </returns> */

std::vector<std::string> FeatureList;

/** <summary> Gets or Sets a Value which Contains Info about the Promotion List of a SeedChooser. </summary>
<returns> The Promotion List of the SeedChooser. </returns> */

std::vector<std::string> PromoList;

/** <summary> Initializes a new Instance of the SeedChooserPriorityList Class. </summary> */

SeedChooserPriorityList();
};

}