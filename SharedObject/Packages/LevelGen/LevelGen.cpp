#include "LevelGen.h"

using namespace SharedObject::Properties;

namespace SharedObject::Packages
{
/** <summary> Access the "LevelGenData" Instance Field from the LevelGen Class. </summary>
<returns> The Instance Field Obtained. </returns> */

LevelGenData *LevelGen::Data;

/// <summary> Setups all the Fields from the LevelGen Instance. </summary>

LevelGen::LevelGen()
{
Data = new LevelGenData();
}

}