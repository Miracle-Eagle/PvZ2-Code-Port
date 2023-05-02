#include <vector>

using namespace SharedObject::Entries;

namespace SharedObject::Properties
{
/// <summary> Serves as a Base for Storing the Properties of any Class. </summary>

class PropertySheetBase
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Scaled Properties of a Board Entity. </summary>
<returns> The Scaled Properties of the Entity. </returns> */

std::vector<BoardEntityScaledPropsEntry*> ScaledProps;

/// <summary> Initiazes a new Instance of the PropertySheetBase Class. </summary>

PropertySheetBase();
};

}