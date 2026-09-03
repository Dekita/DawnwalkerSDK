#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_AddTagToASC.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class DOGWOODCOMBAT_API UAnimNotify_AddTagToASC : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagToGrant;
    
    UAnimNotify_AddTagToASC();

};

