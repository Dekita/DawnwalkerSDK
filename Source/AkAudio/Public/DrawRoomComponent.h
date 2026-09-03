#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "DrawRoomComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UDrawRoomComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDrawRoomComponent(const FObjectInitializer& ObjectInitializer);

};

