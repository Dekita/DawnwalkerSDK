#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "GameplayTagContainer.h"
#include "CinematicIdleAnimMetaData.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DIALOGUESYSTEM_API UCinematicIdleAnimMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LowIntensitySequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationType;
    
    UCinematicIdleAnimMetaData();

};

