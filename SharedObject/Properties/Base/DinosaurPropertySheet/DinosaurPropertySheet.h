#include <optional>

using namespace Global::Definitions;
using namespace SharedObject::Properties;

namespace SharedObject::Properties::Base
{
/** <summary> Retrieves all the Properties related to the Dinosaur Class. </summary>
<remarks> This Class uses the CreaturePropertySheet for Saving Info of the Current Instance. </remarks> */

class DinosaurPropertySheet : public CreaturePropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the X Coordinates for the Grid Activation of a Dinosaur. </summary>
<returns> The X Grid Activation of the Dinosaur. </returns> */

std::optional<int> ActivationGridX;

/** <summary> Gets or Sets a Value which Contains Info about the Time where a Creature is not Able to Attack. </summary>
<returns> The Timeout of the Creature. </returns> */

std::optional<float> Timeout;

/** <summary> Obtains or Creates a List which Contains Info about the Zombies that are Unaffected by a Creature. </summary>
<returns> The List of Unaffected Zombies by the Creature. </returns> */

ClassRestrictionSet *UnaffectedZombies;

/// <summary> Initializes a new Instance of the DinosaurPropertySheet Class. </summary>

DinosaurPropertySheet();

/// <summary> Releases all the Resources Consumed by the DinosaurPropertySheet Instance. </summary>

virtual ~DinosaurPropertySheet()
{
delete UnaffectedZombies;
}

};

}