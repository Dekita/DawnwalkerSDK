#pragma once
#include "CoreMinimal.h"
#include "CombatNotifyData.h"
#include "GameplayTagContainer.h"
#include "RebelAICombatState.h"
#include "DogwoodAICombatState.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODAI_API FDogwoodAICombatState : public FRebelAICombatState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatNotifyData LastStartedCombatNotifyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatNotifyData LastEndedCombatNotifyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CombatPose;
    
    FDogwoodAICombatState();
};

