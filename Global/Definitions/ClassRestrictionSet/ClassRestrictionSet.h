#include <string>
#include <vector>

using namespace Global::Types;

namespace Global::Definitions
{
/// <summary> Creates a Restriction Set that Includes or Excludes the Specified Types from a Class. </summary>

class ClassRestrictionSet
{

public:

/** <summary> Obtains or Creates a List which Contains Info about the Types to be Included or Excluded from a Class. </summary>
<returns> The List of Types Obtained. </returns> */

std::vector<std::string> List;

/** <summary> Gets of Sets a Value which Contains Info about the Restrinction that will be Applied to a Types List. </summary>
<returns> The Type Restriction Obtained. </returns> */

ListRestrictionType *ListType;

/// <summary> Initializes a new Instance of the ClassRestrictionSet. </summary>

ClassRestrictionSet();

/** <summary> Initializes a new Instance of the ClassRestrictionSet by Copying all the Elements from a Collection. </summary> 
<param name = "srcCollection" > The Collection where the Elements will be Copied from. </param> */

ClassRestrictionSet(std::vector<std::string> &srcCollection);

/** <summary> Initializes a new Instance of the ClassRestrictionSet with the Specified Storage Limit. </summary> 
<param name = "maxCapacity" > The Number of Elements that the ClassRestrictionSet can Store. </param> */

ClassRestrictionSet(int maxCapacity);
};

}