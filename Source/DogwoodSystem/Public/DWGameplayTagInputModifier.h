#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "GameplayTagContainer.h"
#include "DWGameplayTagInputModifier.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODSYSTEM_API UDWGameplayTagInputModifier : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    UDWGameplayTagInputModifier();

};

