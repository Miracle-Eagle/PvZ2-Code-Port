#include <string>
#include <vector>

namespace SharedObject::Properties::Game
{
/// <summary> A Class used for Retrieving the Family Priority List from a SeedChooser. </summary>

class SeedChooserFamilyPriorityList
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Prioritized Family List of a SeedChooser. </summary>
<returns> The Prioritized FamilyList of the Seed Chooser. </returns> */

std::vector<std::string> PrioritizedFamilyList;

/// <summary> Initializes a new Instance of the SeedChooserPriorityList Class. </summary>

SeedChooserFamilyPriorityList();
};

}