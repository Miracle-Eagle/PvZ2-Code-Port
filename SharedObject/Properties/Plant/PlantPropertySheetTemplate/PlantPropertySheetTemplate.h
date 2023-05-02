#include <vector>

using namespace Global::Definitions;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;
using namespace SharedObject::Entries;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Plant
{
/** <summary> Retrieves all the Properties related to the PlantTemplate Class. </summary>
<remarks> This Class uses the PlantPropertySheet for Saving Info from the Current Instance. </remarks> */

class PlantPropertySheetTemplate : public PlantPropertySheet
{

public:

/// <summary> Initializes a new Instance of the PlantPropertySheetTemplate Class. </summary>

PlantPropertySheetTemplate();
};

}