#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WorldStateSystemBlueprintLibrary.generated.h"

class USkyCreatorWeatherPreset;
class UWorldStateSystemInterface;

UCLASS(Blueprintable)
class DAWNWALKER_API UWorldStateSystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldStateSystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasWeatherSetFromQuestNode(UWorldStateSystemInterface* WorldStateSystemInterface);
    
    UFUNCTION(BlueprintCallable)
    static void SaveActorOnSplineLocation(UWorldStateSystemInterface* WorldStateSystemInterface, FGuid PersistentActorGuid, int32 CurrentPointIndex, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadActorOnSplineLocation(UWorldStateSystemInterface* WorldStateSystemInterface, const FGuid& PersistentActorGuid, int32& CurrentPointIndex, float& Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USkyCreatorWeatherPreset* GetWeatherPreset(UWorldStateSystemInterface* WorldStateSystemInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFogTargetHeight(UWorldStateSystemInterface* WorldStateSystemInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFogMinHeight(UWorldStateSystemInterface* WorldStateSystemInterface);
    
};

