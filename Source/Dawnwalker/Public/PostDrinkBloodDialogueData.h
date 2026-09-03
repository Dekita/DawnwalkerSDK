#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "Engine/DataTable.h"
#include "PostDrinkBloodDialogueData.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FPostDrinkBloodDialogueData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer Creatures;
    
    FPostDrinkBloodDialogueData();
};

