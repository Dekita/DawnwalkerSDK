#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "RebelNotifyState_ModifyTags.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELLOCOMOTION_API URebelNotifyState_ModifyTags : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OwnedTags;
    
    URebelNotifyState_ModifyTags();

};

