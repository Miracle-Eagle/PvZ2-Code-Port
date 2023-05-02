#include "ClassRestrictionSet.h"

using namespace Global::Types;

namespace Global::Definitions
{
/// <summary> Setups all the Fields from the ClassRestrictionSet Instance. </summary>

ClassRestrictionSet::ClassRestrictionSet()
{
this->List = List<std::wstring>();
this->ListType = ListRestrictionType::includelist;
}

/** <summary> Setups all the Fields from the ClassRestrictionSet Instance by using a Collection. </summary> 
<param name = "srcCollection" > The Collection where the Elements will be Copied from. </param> */

ClassRestrictionSet::ClassRestrictionSet(std::vector<std::wstring> &srcCollection)
{
this->List = List<std::wstring>(srcCollection);
this->ListType = ListRestrictionType::includelist;
}

/** <summary> Setups all the Fields from the ClassRestrictionSet with a Specified Storage Limit. </summary> 
<param name = "maxCapacity" > The Number of Elements that the ClassRestrictionSet can Store. </param> */

ClassRestrictionSet::ClassRestrictionSet(int maxCapacity)
{
this->List = List<std::wstring>(maxCapacity);
this->ListType = ListRestrictionType::includelist;
}

}