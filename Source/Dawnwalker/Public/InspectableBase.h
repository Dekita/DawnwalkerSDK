#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InspectableBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API AInspectableBase : public AActor {
    GENERATED_BODY()
public:
    AInspectableBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnInspectedSpotNotification(const FString& SpotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnCompletedInspectionNotification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnCancelledInspectionNotification() const;
    
};

