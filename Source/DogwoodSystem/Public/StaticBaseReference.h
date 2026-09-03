#pragma once
#include "CoreMinimal.h"
#include "ActorReferenceType.h"
#include "StaticBaseReference.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODSYSTEM_API UStaticBaseReference : public UActorReferenceType {
    GENERATED_BODY()
public:
    UStaticBaseReference();

};

