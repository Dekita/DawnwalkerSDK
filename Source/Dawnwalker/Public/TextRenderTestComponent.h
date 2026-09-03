#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "TextRenderTestComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UTextRenderTestComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UTextRenderTestComponent(const FObjectInitializer& ObjectInitializer);

};

