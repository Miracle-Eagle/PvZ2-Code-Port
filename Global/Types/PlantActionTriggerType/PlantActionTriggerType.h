namespace Global::Types
{
/// <summary> Determines the Trigger Type of a Plant Action. </summary>

enum class PlantActionTriggerType
{
/// <summary> The Plant does Nothing. </summary>
none,

/// <summary> The Action is Instant. </summary>
instant,

/// <summary> The Action triggers in a Column. </summary>
column,

/// <summary> The Action triggers in a Row. </summary>
row,

/// <summary> The Action triggers in a Rectangle. </summary>
rect,

/// <summary> The Action triggers in a Rect Grid. </summary>
rect_grid,

/// <summary> The Action triggers in all Front. </summary>
allfront
};

}