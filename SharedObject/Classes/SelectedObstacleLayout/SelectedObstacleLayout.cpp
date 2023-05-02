#include "SelectedObstacleLayout.h"
#include "BoardGridMapProps.h"

using namespace Global::Definitions;
using namespace Global::Types;

namespace SharedObject::Classes
{
/// <summary> Setups all the Fields from the SelectedObstacleLayout Instance. </summary>

SelectedObstacleLayout::SelectedObstacleLayout()
{
this->ObstacleType = DangerRoomBoardGridType::any;
this->LevelDesignerType = "MyDesignerType";

this->GridMap = new RtWeakPtr<BoardGridMapProps*>();
}

}