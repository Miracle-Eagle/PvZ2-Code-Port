#include "LevelGenParams.h"

namespace Global::Params
{
/// <summary> Setups all the Fields from the LevelGenParams Instance. </summary>

LevelGenParams::LevelGenParams()
{
this->World = "WorldName";
this->Seed = "MySeed";

this->UniqueIdentifier = "MyID";
this->LevelParams = new LevelGenLevelParams();
}

}