#include "PropertySheetBase.h"

using namespace SharedObject::Entries;

namespace SharedObject::Properties
{
/// <summary> Setups all the Fields from the SeedChooserFamilyPriorityList Instance. </summary>

PropertySheetBase::PropertySheetBase()
{

this->ScaledProps = std::vector<BoardEntityScaledPropsEntry>
{ 
new BoardEntityScaledPropsEntry()
};

}

}