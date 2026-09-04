#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "DrinkBloodSequenceRow.generated.h"

class UAkStateValue;
class ULevelSequence;

USTRUCT(BlueprintType)
struct DOGWOODDIALOGUE_API FDrinkBloodSequenceRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AudioMacroState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AudioMacroStateAfter;
    
    FDrinkBloodSequenceRow();
};

