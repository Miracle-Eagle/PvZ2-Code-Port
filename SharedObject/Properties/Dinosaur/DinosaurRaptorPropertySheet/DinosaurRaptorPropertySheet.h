#include <optional>
#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/** <summary> Retrieves all the Properties related to the DinosaurRaptor Class. </summary>
<remarks> This Class uses the DinosaurPropertySheet for Saving Info from the Current Instance. </remarks> */

class DinosaurRaptorPropertySheet : public DinosaurPropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Number of Kicks a Raptor can Perform. </summary>
<returns> The Maximum Number of Kicks the Raptor can Perform. </returns> */

std::optional<int> MaxKicks;

/** <summary> Gets or Sets a Value which Contains Info about the Left Most X Grid Coordinate from the Kick of a Raptor. </summary>
<returns> The Left Most X Grid Coordinate of the Raptor's Kick. </returns> */

std::optional<int> LeftMostKickGridX;

/** <summary> Gets or Sets a Value which Contains Info about the Toss Time of a Zombie being Kicked by a Raptor. </summary>
<returns> The Toss Time of a Zombie being Kicked by the Raptor. </returns> */

std::optional<float> TossTime;

/** <summary> Gets or Sets a Value which Contains Info about the Toss Height of a Zombie being Kicked by a Raptor. </summary>
<returns> The Toss Height of a Zombie being Kicked by the Raptor. </returns> */

std::optional<float> TossHeight;

/** <summary> Gets or Sets a Value which Contains Info about the Toss Distance of a Zombie being Kicked by a Raptor. </summary>
<returns> The Toss Distance of a Zombie being Kicked by the Raptor. </returns> */

std::optional<float> TossDistance;

/** <summary> Gets or Sets a Value which Contains Info about the Flip Rectangle of a Raptor Attack. </summary>
<returns> The Flip Rectangle of the Raptor's Attack. </returns> */

Rect *FlipAttackRect;

/** <summary> Gets or Sets a Value which Contains Info about the Rectangle Fudge Factor of a Raptor Kick. </summary>
<returns> The Rectangle Fudge Factor of the Raptor's Kick. </returns> */

std::optional<int> KickRectFudgeFactor;

/// <summary> Initializes a new Instance of the DinosaurRaptorPropertySheet Class. </summary>

DinosaurRaptorPropertySheet();

/// <summary> Releases all the Resources Consumed by the DinosaurRaptorPropertySheet Instance. </summary>

virtual ~DinosaurRaptorPropertySheet()
{
delete FlipAttackRect;
}

};

}