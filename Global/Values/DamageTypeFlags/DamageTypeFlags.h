namespace Global::Values
{
/// <summary> Determines the Type of  Damage Flags a Projectile does. </summary>

enum class DamageTypeFlags
{
/// The Projectile doesn't deal Damage to Entities.
none,

/// The Projectile can bypass the Shield of an Entity.
bypass_shield,

/// The Projectile hits the Shield and the Body of an Entity.
hits_shield_and_body,

/// The Projectile only hits the Shield of an Entity.
hits_only_shield,

/// The Projectile can hit submerged Entities.
hits_submerged,

/// The Projectile does not use the Flash Effects on Damage.
no_flash,

/// The Projectile doesn't leave Body.
doesnt_leave_body,

/// The Projectile reduces an Entity to Ashes uppon Death.
ash_death,

/// The Projectile is from a Shooter.
shooter,

/// The Projectile is from a Catapult.
catapult,

/// The Projectile is Lobbed.
lobbed,

/// The Projectile is Rolling.
rolling,

/// The Projectile has Fire Effects.
fire,

/// The Projectile has Lightning Effects.
lightning,

/// The Projectile can Spawn Spore-shrooms when an Entity dies.
death_spawn_sporeshroom,

/// The Projectile can Frost the whole Stage.
frost_whole_stage,

/// The Projectile can heal Ice Blocks.
heals_iceblocks,

/// The Projectile can Squidify an Entity on Contact.
squidify,

/// The Projectile can Spawn Plant Food.
plantfood,

/// The Projectile is from Plant Food Effect.
plantfood_effect
};

}
