#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "OpenWorldJournalInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODMAP_API UOpenWorldJournalInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UOpenWorldJournalInterface();

    UFUNCTION(BlueprintCallable)
    void RevealMappinsInRegion(const FGameplayTag RegionTag, int32& OutRevealedMappinCount);
    
    UFUNCTION(BlueprintCallable)
    void RevealAllMappins();
    
};

