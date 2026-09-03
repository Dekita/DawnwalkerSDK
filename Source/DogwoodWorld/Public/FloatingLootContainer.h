#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "LootContainerBase.h"
#include "FloatingLootContainer.generated.h"

class AActor;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AFloatingLootContainer : public ALootContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> TargetHighlightActors;
    
    AFloatingLootContainer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetHighlightEndPlay(AActor* InActor, TEnumAsByte<EEndPlayReason::Type> Reason);
    
};

