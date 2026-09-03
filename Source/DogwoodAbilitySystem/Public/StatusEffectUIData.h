#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectUIData.h"
#include "StatusEffectUIData.generated.h"

class UPaperSprite;
class UTexture2D;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODABILITYSYSTEM_API UStatusEffectUIData : public UGameplayEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> IconSprite;
    
    UStatusEffectUIData();

};

