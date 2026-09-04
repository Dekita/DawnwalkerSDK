#pragma once
#include "CoreMinimal.h"
#include "CharacterBuff.h"
#include "CharacterBuffs.generated.h"

USTRUCT(BlueprintType)
struct FCharacterBuffs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterBuff> Buffs;
    
    DAWNWALKER_API FCharacterBuffs();
};

