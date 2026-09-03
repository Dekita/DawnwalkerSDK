#pragma once
#include "CoreMinimal.h"
#include "ECharacterDevelopmentAbilityType.h"
#include "CharacterDevelopmentLoadoutSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FCharacterDevelopmentLoadoutSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SlotIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterDevelopmentAbilityType AbilityType;
    
    FCharacterDevelopmentLoadoutSlotInfo();
};

