#pragma once
#include "CoreMinimal.h"
#include "SpecialAttackReactionList.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FSpecialAttackReactionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Reactions;
    
    FSpecialAttackReactionList();
};

