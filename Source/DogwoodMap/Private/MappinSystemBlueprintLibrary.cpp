#include "MappinSystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UMappinSystemBlueprintLibrary::UMappinSystemBlueprintLibrary() {
}

void UMappinSystemBlueprintLibrary::UnsetUserMappin(UMappinSystemImpl* MappinSystem) {
}

void UMappinSystemBlueprintLibrary::ToggleMappinTracked(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
}

void UMappinSystemBlueprintLibrary::SetUserMappin(UMappinSystemImpl* MappinSystem, const FVector& Location) {
}

void UMappinSystemBlueprintLibrary::SetTrackedMappin(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
}

void UMappinSystemBlueprintLibrary::OnPreOpenWorldMap(UMappinSystemImpl* MappinSystem) {
}

FMappinInstanceId UMappinSystemBlueprintLibrary::MakeMappinInstanceIdFromInt64(const int64 int64) {
    return FMappinInstanceId{};
}

bool UMappinSystemBlueprintLibrary::IsTrackedMappin(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsTimeSensitiveMappinInstance(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsSetUserMappin(const UMappinSystemImpl* MappinSystem) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsPlayerInsideAreaMappinInstance(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsMappinVisibleInMap(const UMappinSystemImpl* MappinSystem, EMappinType Type) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsMappinVisibleInCompass(const UMappinSystemImpl* MappinSystem, EMappinType Type) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsMappinVisibleForDifficultySettings(const FMappinConfigRow& MappinConfig, EMappinState State) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsMappinTrackable(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsMappinPositionClampedInCompass(const UMappinSystemImpl* MappinSystem, EMappinType Type) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsMappinInstanceVisibleInCompass(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsMappinInstancePositionClampedInCompass(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsMappinInstanceIdEqual(const FMappinInstanceId& MappinInstanceIdA, const FMappinInstanceId& MappinInstanceIdB) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsMappinInstanceEnabled(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return false;
}

bool UMappinSystemBlueprintLibrary::IsAreaMappinInstance(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return false;
}

FMappinInstanceId UMappinSystemBlueprintLibrary::GetTrackedMappin(UMappinSystemImpl* MappinSystem) {
    return FMappinInstanceId{};
}

bool UMappinSystemBlueprintLibrary::GetQuestInfo(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId, FGuid& OutQuestID, FGuid& OutObjectiveID) {
    return false;
}

FOpenWorldContentMappin UMappinSystemBlueprintLibrary::GetOpenWorldContentMappin(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return FOpenWorldContentMappin{};
}

void UMappinSystemBlueprintLibrary::GetMappinVisibilityZoomMinMax(const UMappinSystemImpl* MappinSystem, EMappinType Type, float& min, float& max) {
}

UPaperSprite* UMappinSystemBlueprintLibrary::GetMappinTextureForState(const FMappinConfigRow& MappinConfig, EMappinState State) {
    return NULL;
}

TArray<FMappinInstanceId> UMappinSystemBlueprintLibrary::GetMappinsForObjective(const UMappinSystemImpl* MappinSystem, const UQuest* Quest, const FGuid& ObjectiveID) {
    return TArray<FMappinInstanceId>();
}

EMappinType UMappinSystemBlueprintLibrary::GetMappinInstanceType(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return EMappinType::None;
}

EMappinState UMappinSystemBlueprintLibrary::GetMappinInstanceState(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return EMappinState::None;
}

float UMappinSystemBlueprintLibrary::GetMappinInstanceRotation(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return 0.0f;
}

FVector UMappinSystemBlueprintLibrary::GetMappinInstanceLocation(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return FVector{};
}

FString UMappinSystemBlueprintLibrary::GetMappinInstanceIdString(const FMappinInstanceId& MappinInstanceId) {
    return TEXT("");
}

EMappinElevationType UMappinSystemBlueprintLibrary::GetMappinInstanceElevationType(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return EMappinElevationType::Above;
}

FText UMappinSystemBlueprintLibrary::GetMappinInstanceDescription(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return FText::GetEmpty();
}

EMappinDayPhaseType UMappinSystemBlueprintLibrary::GetMappinInstanceDayPhase(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return EMappinDayPhaseType::Day;
}

UMappinAreaType* UMappinSystemBlueprintLibrary::GetMappinInstanceArea(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId) {
    return NULL;
}

EMappinGroupType UMappinSystemBlueprintLibrary::GetMappinGroupType_NoSystem(EMappinType Type) {
    return EMappinGroupType::Quest;
}

EMappinGroupType UMappinSystemBlueprintLibrary::GetMappinGroupType(const UMappinSystemImpl* MappinSystem, EMappinType Type) {
    return EMappinGroupType::Quest;
}

bool UMappinSystemBlueprintLibrary::GetMappinFastTravelDestination(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId, FVector& Location, FRotator& Rotation) {
    return false;
}

float UMappinSystemBlueprintLibrary::GetMappinCompassVisibilityMaxDistance(const UMappinSystemImpl* MappinSystem, EMappinType Type) {
    return 0.0f;
}

FSlateColor UMappinSystemBlueprintLibrary::GetMappinColorForState(const FMappinConfigRow& MappinConfig, EMappinState State) {
    return FSlateColor{};
}

FLinearColor UMappinSystemBlueprintLibrary::GetMappinColor(const UMappinSystemImpl* MappinSystem, EMappinType Type, EMappinState State) {
    return FLinearColor{};
}

UOpenWorldMappinAdditionalInfo* UMappinSystemBlueprintLibrary::FindMappinAdditionalInfo(const FOpenWorldContentMappin& Mappin, TSubclassOf<UOpenWorldMappinAdditionalInfo> AdditionalInfoClass) {
    return NULL;
}

void UMappinSystemBlueprintLibrary::DebugUnlockAllFastTravelDestinations(UOpenWorldJournalInterface* OpenWorldJournal) {
}

void UMappinSystemBlueprintLibrary::DebugTeleportPlayer(UMappinSystemImpl* MappinSystem, FVector2D Location, EMappinFunctionReturnType& ReturnType) {
}


