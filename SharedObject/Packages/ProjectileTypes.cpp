﻿#include "ProjectileTypes.h"

using namespace Global::Definitions;
using namespace Global::Values;
using namespace SharedObject::Properties::Projectile;

namespace SharedObject::Packages
{

ProjectilePropertySheetTemplate *ProjectileTypes::ProjectileTemplate;
ProjectilePropertySheet *ProjectileTypes::PeaDefault;
ProjectilePropertySheet *ProjectileTypes::GiantPeaDefault;
ProjectilePropertySheet *ProjectileTypes::KernelDefault;
ProjectilePropertySheet *ProjectileTypes::ButterDefault;
SnowPeaProjectileProps *ProjectileTypes::SnowPeaProjectile;
SnowPeaFreezingProjectileProps *ProjectileTypes::SnowPeaFreezingProjectile;

	ProjectileTypes::ProjectileTypes()
	{
ProjectileTemplate = new ProjectilePropertySheetTemplate();

PeaDefault = new ProjectilePropertySheet();
PeaDefault->BaseDamage = 20;
PeaDefault->CollisionFlags = {CollisionTypeFlags::griditems, CollisionTypeFlags::ground_zombies, CollisionTypeFlags::off_ground_zombies};
PeaDefault->DamageFlags = {DamageTypeFlags::shooter};
ValueRange *tempVar = new ValueRange();
tempVar->Min = 333.0f;
tempVar->Max = 333.0f;
ValueRange *tempVar2 = new ValueRange();
tempVar2->Min = 0.0f;
tempVar2->Max = 0.0f;
ValueRange *tempVar3 = new ValueRange();
tempVar3->Min = 0.0f;
tempVar3->Max = 0.0f;
PeaDefault->this->InitialVelocity = {tempVar, tempVar2, tempVar3};
PeaDefault->InitialScale = new ValueRange();
PeaDefault->InitialScale->Min = 0.95f;
PeaDefault->InitialScale->Max = 1.05f;
PeaDefault->AttachedPAM = L"POPANIM_EFFECTS_T_PEA_PROJECTILE";
PeaDefault->AttachedPAMOffset = new SexyVector2();
PeaDefault->AttachedPAMOffset->x = -112.5f;
PeaDefault->AttachedPAMOffset->y = -111.5f;
PeaDefault->AttachedPAMEffectOffset = new SexyVector2();
PeaDefault->AttachedPAMEffectOffset->x = 0.0f;
PeaDefault->AttachedPAMEffectOffset->y = 0.0f;
PeaDefault->AttachedPAMAnimationToPlay = {L"animation", L"animation2", L"animation3"};
PeaDefault->CollisionRect = new FRect();
PeaDefault->CollisionRect->mX = -15.0f;
PeaDefault->CollisionRect->mY = -15.0f;
PeaDefault->CollisionRect->mWidth = 30.0f;
PeaDefault->CollisionRect->mHeight = 30.0f;
PeaDefault->ImpactSoundEvent = L"Play_Splat";
PeaDefault->ImpactSoundThrottleTimer = 0.075f;
PeaDefault->ImpactPAM = L"POPANIM_EFFECTS_T_SPLAT_PEA";
PeaDefault->ImpactPAMAnimationToPlay = {L"animation4", L"animation5", L"animation6"};
ValueRange *tempVar4 = new ValueRange();
tempVar4->Min = 0.0f;
tempVar4->Max = 0.0f;
ValueRange *tempVar5 = new ValueRange();
tempVar5->Min = 0.0f;
tempVar5->Max = 0.0f;
PeaDefault->ImpactOffset = {tempVar4, tempVar5};

GiantPeaDefault = new ProjectilePropertySheet();
GiantPeaDefault->BaseDamage = 600;
GiantPeaDefault->CollisionFlags = {CollisionTypeFlags::griditems, CollisionTypeFlags::ground_zombies, CollisionTypeFlags::off_ground_zombies};
GiantPeaDefault->DamageFlags = {DamageTypeFlags::shooter};
ValueRange *tempVar6 = new ValueRange();
tempVar6->Min = 400.0f;
tempVar6->Max = 400.0f;
ValueRange *tempVar7 = new ValueRange();
tempVar7->Min = 0.0f;
tempVar7->Max = 0.0f;
ValueRange *tempVar8 = new ValueRange();
tempVar8->Min = 0.0f;
tempVar8->Max = 0.0f;
GiantPeaDefault->this->InitialVelocity = {tempVar6, tempVar7, tempVar8};
GiantPeaDefault->InitialScale = new ValueRange();
GiantPeaDefault->InitialScale->Min = 1.0f;
GiantPeaDefault->InitialScale->Max = 1.0f;
GiantPeaDefault->AttachedPAM = L"POPANIM_EFFECTS_REPEATER_PLANTFOOD_GIANTPEA";
GiantPeaDefault->AttachedPAMOffset = new SexyVector2();
GiantPeaDefault->AttachedPAMOffset->x = -112;
GiantPeaDefault->AttachedPAMOffset->y = -107.25f;
GiantPeaDefault->AttachedPAMAnimationToPlay = {L"animation"};
GiantPeaDefault->CollisionRect = new FRect();
GiantPeaDefault->CollisionRect->mX = -26.5f;
GiantPeaDefault->CollisionRect->mY = -27.25f;
GiantPeaDefault->CollisionRect->mWidth = 53.0f;
GiantPeaDefault->CollisionRect->mHeight = 54.5f;
GiantPeaDefault->ImpactSoundEvent = L"Play_Plant_Peapod_Impact_Nitro";
ValueRange *tempVar9 = new ValueRange();
tempVar9->Min = 0.0f;
tempVar9->Max = 0.0f;
ValueRange *tempVar10 = new ValueRange();
tempVar10->Min = 0.0f;
tempVar10->Max = 0.0f;
GiantPeaDefault->ImpactOffset = {tempVar9, tempVar10};

KernelDefault = new ProjectilePropertySheet();
KernelDefault->BaseDamage = 20;
KernelDefault->CollisionFlags = {CollisionTypeFlags::griditems, CollisionTypeFlags::ground_zombies, CollisionTypeFlags::off_ground_zombies, CollisionTypeFlags::ground};
KernelDefault->DamageFlags = {DamageTypeFlags::lobbed, DamageTypeFlags::catapult};
ValueRange *tempVar11 = new ValueRange();
tempVar11->Min = 290.0f;
tempVar11->Max = 310.0f;
ValueRange *tempVar12 = new ValueRange();
tempVar12->Min = 0.0f;
tempVar12->Max = 0.0f;
ValueRange *tempVar13 = new ValueRange();
tempVar13->Min = 500.0f;
tempVar13->Max = 700.0f;
KernelDefault->this->InitialVelocity = {tempVar11, tempVar12, tempVar13};
ValueRange *tempVar14 = new ValueRange();
tempVar14->Min = 0.0f;
tempVar14->Max = 0.0f;
ValueRange *tempVar15 = new ValueRange();
tempVar15->Min = 0.0f;
tempVar15->Max = 0.0f;
ValueRange *tempVar16 = new ValueRange();
tempVar16->Min = -10.0f;
tempVar16->Max = -10.0f;
KernelDefault->this->InitialAcceleration = {tempVar14, tempVar15, tempVar16};
KernelDefault->InitialRotation = new ValueRange();
KernelDefault->InitialRotation->Min = 0.0f;
KernelDefault->InitialRotation->Max = 6.28318f;
KernelDefault->InitialAngularVelocity = new ValueRange();
KernelDefault->InitialAngularVelocity->Min = 10.0f;
KernelDefault->InitialAngularVelocity->Max = 20.0f;
KernelDefault->InitialScale = new ValueRange();
KernelDefault->InitialScale->Min = 1.0f;
KernelDefault->InitialScale->Max = 1.0f;
KernelDefault->AttachedPAM = L"POPANIM_EFFECTS_T_KERNALPULT_PROJECTILE";
KernelDefault->AttachedPAMOffset = new SexyVector2();
KernelDefault->AttachedPAMOffset->x = -100;
KernelDefault->AttachedPAMOffset->y = -100;
KernelDefault->AttachedPAMAnimationToPlay = {L"animation", L"animation2", L"animation3"};
KernelDefault->CollisionRect = new FRect();
KernelDefault->CollisionRect->mX = -15.0f;
KernelDefault->CollisionRect->mY = -15.0f;
KernelDefault->CollisionRect->mWidth = 30.0f;
KernelDefault->CollisionRect->mHeight = 30.0f;
KernelDefault->ImpactSoundEvent = L"Play_impact_kernelpult";
KernelDefault->ImpactPAM = L"POPANIM_EFFECTS_SPLAT_KERNALPULT_KERNAL";
KernelDefault->ImpactPAMAnimationToPlay = {L"animation"};

ButterDefault = new ProjectilePropertySheet();
ButterDefault->BaseDamage = 40;
ButterDefault->CollisionFlags = {CollisionTypeFlags::griditems, CollisionTypeFlags::ground_zombies, CollisionTypeFlags::off_ground_zombies, CollisionTypeFlags::ground};
ButterDefault->DamageFlags = {DamageTypeFlags::lobbed, DamageTypeFlags::catapult};
ValueRange *tempVar17 = new ValueRange();
tempVar17->Min = 290.0f;
tempVar17->Max = 310.0f;
ValueRange *tempVar18 = new ValueRange();
tempVar18->Min = 0.0f;
tempVar18->Max = 0.0f;
ValueRange *tempVar19 = new ValueRange();
tempVar19->Min = 500.0f;
tempVar19->Max = 700.0f;
ButterDefault->this->InitialVelocity = {tempVar17, tempVar18, tempVar19};
ValueRange *tempVar20 = new ValueRange();
tempVar20->Min = 0.0f;
tempVar20->Max = 0.0f;
ValueRange *tempVar21 = new ValueRange();
tempVar21->Min = 0.0f;
tempVar21->Max = 0.0f;
ValueRange *tempVar22 = new ValueRange();
tempVar22->Min = -10.0f;
tempVar22->Max = -10.0f;
ButterDefault->this->InitialAcceleration = {tempVar20, tempVar21, tempVar22};
ButterDefault->InitialRotation = new ValueRange();
ButterDefault->InitialRotation->Min = 0.0f;
ButterDefault->InitialRotation->Max = 6.28318f;
ButterDefault->InitialAngularVelocity = new ValueRange();
ButterDefault->InitialAngularVelocity->Min = 10.0f;
ButterDefault->InitialAngularVelocity->Max = 20.0f;
ButterDefault->InitialScale = new ValueRange();
ButterDefault->InitialScale->Min = 1.0f;
ButterDefault->InitialScale->Max = 1.0f;
ButterDefault->AttachedPAM = L"POPANIM_EFFECTS_T_KERNALPULT_PROJECTILE";
ButterDefault->AttachedPAMOffset = new SexyVector2();
ButterDefault->AttachedPAMOffset->x = -100;
ButterDefault->AttachedPAMOffset->y = -100;
ButterDefault->AttachedPAMAnimationToPlay = {L"animation", L"animation2", L"animation3"};
ButterDefault->CollisionRect = new FRect();
ButterDefault->CollisionRect->mX = -15.0f;
ButterDefault->CollisionRect->mY = -15.0f;
ButterDefault->CollisionRect->mWidth = 30.0f;
ButterDefault->CollisionRect->mHeight = 30.0f;
ButterDefault->ImpactSoundEvent = L"Play_impact_kernelpult";
ButterDefault->ImpactPAM = L"POPANIM_EFFECTS_SPLAT_KERNALPULT_KERNAL";
ButterDefault->ImpactPAMAnimationToPlay = {L"animation"};

SnowPeaProjectile = new SnowPeaProjectileProps();
SnowPeaFreezingProjectile = new SnowPeaFreezingProjectileProps();

	delete tempVar22;
	delete tempVar21;
	delete tempVar20;
	delete tempVar19;
	delete tempVar18;
	delete tempVar17;
	delete tempVar16;
	delete tempVar15;
	delete tempVar14;
	delete tempVar13;
	delete tempVar12;
	delete tempVar11;
	delete tempVar10;
	delete tempVar9;
	delete tempVar8;
	delete tempVar7;
	delete tempVar6;
	delete tempVar5;
	delete tempVar4;
	delete tempVar3;
	delete tempVar2;
	delete tempVar;
	}
}
