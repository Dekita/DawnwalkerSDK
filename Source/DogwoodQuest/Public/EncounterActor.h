#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EncounterActor.generated.h"

class UEncounterChildComponent;

UCLASS(Blueprintable)
class DOGWOODQUEST_API AEncounterActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EncounterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEncounterChildComponent*> RegisteredChildComponents;
    
    AEncounterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateEncounter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateEncounter();
    
};

