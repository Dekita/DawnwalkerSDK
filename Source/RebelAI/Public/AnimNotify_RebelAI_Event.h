#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_RebelAI_Event.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class REBELAI_API UAnimNotify_RebelAI_Event : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
public:
    UAnimNotify_RebelAI_Event();

};

