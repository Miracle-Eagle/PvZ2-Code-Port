#include <optional>
#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/** <summary> Retrieves all the Properties related to the DinosaurPterodactyl Class. </summary>
<remarks> This Class uses the DinosaurPropertySheet for Saving Info from the Current Instance. </remarks> */

class DinosaurPterodactylPropertySheet : public DinosaurPropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Movement Speed of a Pterodactyl. </summary>
<returns> The Movement Speed of the Pterodactyl. </returns> */

std::optional<float> MovementSpeed;

/** <summary> Gets or Sets a Value which Contains Info about the Minimum X Coordinate where a Pterodactyl can Grab a Zombie. </summary>
<returns> The Minimum X Grab Coordinate of the Pterodactyl. </returns> */

std::optional<int> MinimumX;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum X Coordinate where a Pterodactyl can Grab a Zombie. </summary>
<returns> The Maximum X Grab Coordinate of the Pterodactyl. </returns> */

std::optional<int> MaximumX;

/** <summary> Gets or Sets a Value which Contains Info about the Grabbing Range Error of the Pterodactyl. </summary>
<returns> The Grabbing Range Error of the Pterodactyl. </returns> */

std::optional<float> GrabbingRangeError;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Seconds a Pterodactyl needs to Rest after Carrying a Zombie. </summary>
<returns> The Number of Seconds a Pterodactyl needs to Rest after Carrying a Zombie. </returns> */

std::optional<float> NumSecondsToCooldownAfterCarryingZombie;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Zombies a Pterodactyl can Carry. </summary>
<returns> The Number of Zombies a Pterodactyl can Carry. </returns> */

std::optional<int> NumZombiesToCarry;

/** <summary> Obtains or Creates a List which Contains Info about the Zombies that can be Carried by a Pterodactyl. </summary>
<returns> The List of Zombies that can be Carried by a Pterodactyl. </returns> */

ClassRestrictionSet *ValidZombieTypes;

/// <summary> Initializes a new Instance of the DinosaurPterodactylPropertySheet Class. </summary>

DinosaurPterodactylPropertySheet();

/// <summary> Releases all the Resources Consumed by the DinosaurPterodactylPropertySheet Instance. </summary>

virtual ~DinosaurPterodactylPropertySheet()
{
delete ValidZombieTypes;
}

};

}