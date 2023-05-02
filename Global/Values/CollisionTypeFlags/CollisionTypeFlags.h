namespace Global::Values
{
/// <summary> Determines the Type of Collision Flags a Projectile can have. </summary>

enum class CollisionTypeFlags
{
/// The Projectile can't Collide with Entities.
none,

/// The Projectile can Collide with Entities that are found in the Ground.
ground,

/// The Projectile can Collide with Entities that have a low Height.
low,

/// The Projectile triggers some Special Action once it Collides.
instigator,

/// The Projectile can Collide with ground Zombies.
ground_zombies,

/// The Projectile can Collide with off ground Zombies.
off_ground_zombies,

/// The Projectile can Collide with dying Zombies.
dying_zombies,

/// The Projectile can Collide with all Zombies.
all_zombies,

/// The Projectile can Collide with Grid Items.
griditems,

/// The Projectile can Collide with normal Plants.
normal_plants,

/// The Projectile can Collide with tall Plants.
tall_plants,

/// The Projectile can Collide with Plants.
plants,

/// The Projectile can Collide with Everything.
everything
};

}
