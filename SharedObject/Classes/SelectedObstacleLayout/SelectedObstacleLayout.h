#include <string>

namespace SharedObject::Classes { class BoardGridMapProps; }

using namespace Global::Definitions;
using namespace Global::Types;

namespace SharedObject::Classes
{
/// <summary> A Class used for Retrieving the Layout from a Selected Obstacle. </summary>

class SelectedObstacleLayout
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Type of an Obstacle. </summary>
<returns> The Type of the Obstacle. </returns> */

DangerRoomBoardGridType *ObstacleType;

/** <summary> Gets or Sets a Value which Contains Info about the Type of a Level Designer. </summary>
<returns> The Type of the Level Designer. </returns> */

std::string LevelDesignerType;

/** <summary> Gets or Sets a Value which Contains Info about the Reference of a GridMap. </summary>
<returns> The Grid Map Reference. </returns> */

RtWeakPtr<BoardGridMapProps*> *GridMap;

/// <summary> Initializes a new Instance of the SelectedObstacleLayout Class. </summary>

SelectedObstacleLayout();

/// <summary> Releases all the Resources Consumed by the SelectedObstacleLayout Instance. </summary>

virtual ~SelectedObstacleLayout()
{
delete ObstacleType;
delete GridMap;
}

};

}