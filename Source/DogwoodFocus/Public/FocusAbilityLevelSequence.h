#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequence.h"
#include "FocusAbilityLevelSequence.generated.h"

UCLASS(Blueprintable)
class DOGWOODFOCUS_API UFocusAbilityLevelSequence : public ULevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox SequenceBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBox> AdditionalBounds;
    
    UFocusAbilityLevelSequence();

};

