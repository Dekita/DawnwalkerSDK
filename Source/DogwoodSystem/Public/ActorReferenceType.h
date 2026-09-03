#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActorReferenceType.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class DOGWOODSYSTEM_API UActorReferenceType : public UObject {
    GENERATED_BODY()
public:
    UActorReferenceType();

};

