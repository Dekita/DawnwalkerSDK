#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateColor.h"
#include "EMappinDayPhaseType.h"
#include "EMappinElevationType.h"
#include "EMappinFunctionReturnType.h"
#include "EMappinGroupType.h"
#include "EMappinState.h"
#include "EMappinType.h"
#include "MappinConfigRow.h"
#include "MappinInstanceId.h"
#include "OpenWorldContentMappin.h"
#include "Templates/SubclassOf.h"
#include "MappinSystemBlueprintLibrary.generated.h"

class UMappinAreaType;
class UMappinSystemImpl;
class UOpenWorldJournalInterface;
class UOpenWorldMappinAdditionalInfo;
class UPaperSprite;
class UQuest;

UCLASS(Blueprintable)
class DOGWOODMAP_API UMappinSystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMappinSystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnsetUserMappin(UMappinSystemImpl* MappinSystem);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleMappinTracked(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserMappin(UMappinSystemImpl* MappinSystem, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void SetTrackedMappin(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable)
    static void OnPreOpenWorldMap(UMappinSystemImpl* MappinSystem);
    
    UFUNCTION(BlueprintPure)
    static FMappinInstanceId MakeMappinInstanceIdFromInt64(const int64 int64);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrackedMappin(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTimeSensitiveMappinInstance(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSetUserMappin(const UMappinSystemImpl* MappinSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerInsideAreaMappinInstance(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMappinVisibleInMap(const UMappinSystemImpl* MappinSystem, EMappinType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMappinVisibleInCompass(const UMappinSystemImpl* MappinSystem, EMappinType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMappinVisibleForDifficultySettings(const FMappinConfigRow& MappinConfig, EMappinState State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMappinTrackable(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMappinPositionClampedInCompass(const UMappinSystemImpl* MappinSystem, EMappinType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMappinInstanceVisibleInCompass(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMappinInstancePositionClampedInCompass(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMappinInstanceIdEqual(const FMappinInstanceId& MappinInstanceIdA, const FMappinInstanceId& MappinInstanceIdB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMappinInstanceEnabled(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAreaMappinInstance(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMappinInstanceId GetTrackedMappin(UMappinSystemImpl* MappinSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetQuestInfo(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId, FGuid& OutQuestID, FGuid& OutObjectiveID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOpenWorldContentMappin GetOpenWorldContentMappin(UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMappinVisibilityZoomMinMax(const UMappinSystemImpl* MappinSystem, EMappinType Type, float& min, float& max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPaperSprite* GetMappinTextureForState(const FMappinConfigRow& MappinConfig, EMappinState State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FMappinInstanceId> GetMappinsForObjective(const UMappinSystemImpl* MappinSystem, const UQuest* Quest, const FGuid& ObjectiveID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMappinType GetMappinInstanceType(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMappinState GetMappinInstanceState(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMappinInstanceRotation(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetMappinInstanceLocation(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMappinInstanceIdString(const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMappinElevationType GetMappinInstanceElevationType(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetMappinInstanceDescription(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMappinDayPhaseType GetMappinInstanceDayPhase(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMappinAreaType* GetMappinInstanceArea(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMappinGroupType GetMappinGroupType_NoSystem(EMappinType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMappinGroupType GetMappinGroupType(const UMappinSystemImpl* MappinSystem, EMappinType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMappinFastTravelDestination(const UMappinSystemImpl* MappinSystem, const FMappinInstanceId& MappinInstanceId, FVector& Location, FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMappinCompassVisibilityMaxDistance(const UMappinSystemImpl* MappinSystem, EMappinType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateColor GetMappinColorForState(const FMappinConfigRow& MappinConfig, EMappinState State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetMappinColor(const UMappinSystemImpl* MappinSystem, EMappinType Type, EMappinState State);
    
    UFUNCTION(BlueprintCallable)
    static UOpenWorldMappinAdditionalInfo* FindMappinAdditionalInfo(const FOpenWorldContentMappin& Mappin, TSubclassOf<UOpenWorldMappinAdditionalInfo> AdditionalInfoClass);
    
    UFUNCTION(BlueprintCallable)
    static void DebugUnlockAllFastTravelDestinations(UOpenWorldJournalInterface* OpenWorldJournal);
    
    UFUNCTION(BlueprintCallable)
    static void DebugTeleportPlayer(UMappinSystemImpl* MappinSystem, FVector2D Location, EMappinFunctionReturnType& ReturnType);
    
};

