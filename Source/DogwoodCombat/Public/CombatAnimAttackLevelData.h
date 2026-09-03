#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "EPlayerAnimationLevel.h"
#include "CombatAnimAttackLevelData.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UCombatAnimAttackLevelData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerAnimationLevel, UAnimSequence*> ExpertiseAnimationSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> RandomAnimationSequences;
    
    UCombatAnimAttackLevelData();

};

