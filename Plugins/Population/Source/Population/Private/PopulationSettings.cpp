#include "PopulationSettings.h"

UPopulationSettings::UPopulationSettings() {
    this->FakeFastOutPlaybackRate = 5.00f;
    this->MinSecondsInSingleAP = 40;
    this->MaxSecondsInSingleAP = 120;
    this->InfrequentAPChangeTimeMultiplier = 3.00f;
    this->FrequentAPChangeTimeMultiplier = 0.30f;
    this->APDistanceTolerance = 150.00f;
    this->APDistanceToleranceAtSpawn = 150.00f;
    this->APAcceptableRadius = 75.00f;
    this->DistanceWithoutStepInMontage = 20.00f;
    this->AngleWithoutLocomotionRotation = 20.00f;
    this->AllowedWorkCategories.AddDefaulted(7);
    this->AllowedBodyTypes.AddDefaulted(4);
    this->OuterTriggerLineThickness = 2.00f;
    this->InnerTriggerLineThickness = 2.00f;
    this->SpawnRangeFar = 150.00f;
    this->SpawnRangeNear = 50.00f;
    this->SpawnLevelOffsetNormal = 3;
    this->SpawnLevelOffsetBosses = 6;
    this->SpawnLevelOffsetNormalOutscaled = 0;
    this->SpawnLevelOffsetBossesOutscaled = 4;
    this->ExtensionCDOs.AddDefaulted(2);
    this->LoadedNpcLevelScalingDelays = NULL;
}

TArray<FString> UPopulationSettings::GetWorkCategories() {
    return TArray<FString>();
}

TArray<FName> UPopulationSettings::GetBodyTypes() {
    return TArray<FName>();
}


