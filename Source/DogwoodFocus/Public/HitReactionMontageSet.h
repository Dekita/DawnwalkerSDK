#pragma once
#include "CoreMinimal.h"
#include "MontageSetCreatureTypeBased.h"
#include "ReactionMontageSet.h"
#include "HitReactionMontageSet.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FHitReactionMontageSet : public FMontageSetCreatureTypeBased {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReactionMontageSet> HitMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReactionMontageSet> DeathMontages;
    
    FHitReactionMontageSet();
};

