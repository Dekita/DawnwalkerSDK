#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "DrinkBloodCreatureAnim.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDrinkBloodCreatureAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> InstigatorAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> InstigatorAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer SupportedCreatureTypes;
    
    FDrinkBloodCreatureAnim();
};

