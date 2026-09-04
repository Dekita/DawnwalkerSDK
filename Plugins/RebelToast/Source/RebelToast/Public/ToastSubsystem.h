#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "ToastSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class REBELTOAST_API UToastSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UToastSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BP_PushMessage(const UObject* WorldContextObject, FGameplayTag MessageTag);
    
};

