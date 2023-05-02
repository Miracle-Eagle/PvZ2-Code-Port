#include <string>

using namespace Global::Types;
using namespace SharedObject::Properties;

namespace SharedObject::Properties::Base
{
/** <summary> Retrieves all the Properties related to the PlantBoost Class. </summary>
<remarks> This Class uses the PropertySheetBase for Saving Info of the Current Instance. </remarks> */

class PlantBoostPropertySheet : public PropertySheetBase
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Type of a Plant Boost. </summary>
<returns> The Type of the Plant Boost. </returns> */

PlantBoostType *Type;

/** <summary> Gets or Sets a Value which Contains Info about the Name of a Plant Boost. </summary>
<returns> The Name of the Plant Boost. </returns> */

std::string Name;

/** <summary> Gets or Sets a Value which Contains Info about the Description of a Plant Boost. </summary>
<returns> The Description of the Plant Boost. </returns> */

std::string Description;

/** <summary> Gets or Sets a Value which Contains Info about the Detailed Description of a Plant Boost. </summary>
<returns> The Detailed Description of the Plant Boost. </returns> */

std::string DetailDescription;

/** <summary> Gets or Sets a Value which Contains Info about the Harvest Image of a Plant Boost. </summary>
<returns> The Harvest Image of the Plant Boost. </returns> */

std::string HarvestImage;

/// <summary> Initializes a new Instance of the PlantBoostPropertySheet Class. </summary>

PlantBoostPropertySheet();

/// <summary> Releases all the Resources Consumed by the PlantBoostPropertySheet Instance. </summary>

virtual ~PlantBoostPropertySheet()
{
delete Type;
}

};

}