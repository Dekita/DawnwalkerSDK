#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_GameplayCueAAConditional.h"
#include "ItemHandleToGameplayCue.h"
#include "AnimNotify_AALastItemUsedBasedGameplayCue.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UAnimNotify_AALastItemUsedBasedGameplayCue : public UAnimNotify_GameplayCueAAConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemHandleToGameplayCue> ItemHandleToGameplayCueMap;
    
public:
    UAnimNotify_AALastItemUsedBasedGameplayCue();

};

