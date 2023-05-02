#pragma once

namespace Global::Values
{
/// <summary> Determines the Layer applied when Multiple plants are found in a same Grid. </summary>

enum class MultiPlantGridLayer
{
/// Ground plants can be Placed in the same Grid.
ground,

/// Plant placed in the same Grid will receive a Shield.
armor,

/// Plant placed in the same Grid will receive a Boost.
power
};

}
