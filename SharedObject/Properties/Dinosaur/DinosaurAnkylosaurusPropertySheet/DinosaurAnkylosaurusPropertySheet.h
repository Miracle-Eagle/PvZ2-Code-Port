#include <optional>
#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/** <summary> Retrieves all the Properties related to the DinosaurAnkylosaurus Class. </summary>
<remarks> This Class uses the DinosaurPropertySheet for Saving Info from the Current Instance. </remarks> */

class DinosaurAnkylosaurusPropertySheet : public DinosaurPropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Pause Between Attacks of an Ankylosaurus. </summary>
<returns> The Pause Between Attacks of the Ankylosaurus. </returns> */

std::optional<float> PauseBetweenAttacks;

/** <summary> Gets or Sets a Value which Contains Info about the Minimum Range in the X Coordinate where an Ankylosaurus can Attack. </summary>
<returns> The Minimum X Attack Coordinate of the Ankylosaurus. </returns> */

std::optional<int> AttackRangeMinX;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Number of Zombies that an Ankylosaurus can Fling. </summary>
<returns> The Maximum Number of Zombies the Ankylosaurus can Fling. </returns> */

std::optional<int> MaxZombiesToFling;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Grid Distance of the Zombies being Fling by an Ankylosaurus. </summary>
<returns> The Maximum Grid Distance of the Zombies being Fling by the Ankylosaurus. </returns> */

std::optional<int> MaxGridDistanceToFling;

/// <summary> Initializes a new Instance of the DinosaurAnkylosaurusPropertySheet Class. </summary>

DinosaurAnkylosaurusPropertySheet();
};

}