#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "DrawPortalComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UDrawPortalComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDrawPortalComponent(const FObjectInitializer& ObjectInitializer);

};

