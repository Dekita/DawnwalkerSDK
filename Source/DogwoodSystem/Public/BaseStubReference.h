#pragma once
#include "CoreMinimal.h"
#include "ActorReferenceType.h"
#include "BaseStubReference.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODSYSTEM_API UBaseStubReference : public UActorReferenceType {
    GENERATED_BODY()
public:
    UBaseStubReference();

};

