#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "CourtSystemInterface.generated.h"

class UPaperSprite;

UCLASS(Abstract, Blueprintable)
class DOGWOODSYSTEM_API UCourtSystemInterface : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UCourtSystemInterface();

    UFUNCTION(BlueprintCallable)
    UPaperSprite* GetCourtIcon(FGameplayTag CourtEntryTag, bool IsFinalQuest, bool IsTracked);
    
};

