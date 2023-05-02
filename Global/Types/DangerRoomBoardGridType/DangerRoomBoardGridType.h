namespace Global::Types
{
/// <summary> Determines the Grid of a Danger Room Board. </summary>

enum class DangerRoomBoardGridType
{
/// <summary> Any Entities can be Placed. </summary>
any,

/// <summary> Only ground Entities can be Placed. </summary>
ground,

/// <summary> Only water Entities can be Placed. </summary>
water
};

}