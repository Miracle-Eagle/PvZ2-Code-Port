namespace Global::Types
{
/// <summary> Determines the Action Type of a Plant. </summary>

enum class PlantActionType
{
/// <summary> The Action must be Triggered from Special code. </summary>
special,

/// <summary> The Plant shoots a Projectile. </summary>
projectile,

/// <summary> The Plant produces Sun. </summary>
sun,

/// <summary> The Plant explodes. </summary>
explode
};

}