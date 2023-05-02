#include "PlantPropertySheet.h"

using namespace Global::Definitions;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;
using namespace SharedObject::Packages;

namespace SharedObject::Properties::Base
{
/** <summary> Creates a new Reference of the ProjectileTypes Package. </summary>
<returns> The ProjectileTypes Reference Created. </returns> */

ProjectileTypes *const PlantPropertySheet::ProjectileTypes_Reference = new ProjectileTypes();

/** <summary> Creates a new Reference of the PropertySheets Package. </summary>
<returns> The PropertySheets Reference Created. </returns> */

PropertySheets *const PlantPropertySheet::PropertySheets_Reference = new PropertySheets();

/// <summary> Builds an Instance for the PlantPropertySheet Class. </summary>

PlantPropertySheet::PlantPropertySheet()
{
}

}