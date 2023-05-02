#include <string>
#include <vector>

namespace SharedObject::Classes
{
/// <summary> A Class used for Retrieving the Wave Result from a Level Generator. </summary>

class LevelGenWaveResult
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Budget of a Wave Result. </summary>
<returns> The Budget of the Wave Result. </returns> */

float Budget;

/** <summary> Gets or Sets a Value which Contains Info about a Current Wave. </summary>
<returns> The Current Wave Info. </returns> */

float Actual;

/** <summary> Gets or Sets a Value which Contains Info about the Zombies of a Wave. </summary>
<returns> The Zombies of the Wave. </returns> */

std::vector<std::string> Zombies;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Plant Food given in a Wave. </summary>
<returns> The Number of Plant Food given in the Wave. </returns> */

int PlantFoodCount;

/// <summary> Initializes a new Instance of the LevelGenWaveResult Class. </summary>

LevelGenWaveResult();
};

}