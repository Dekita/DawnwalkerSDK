#pragma once
#include "CoreMinimal.h"
#include "StaticBaseReference.h"
#include "StaticActorReference.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODSYSTEM_API UStaticActorReference : public UStaticBaseReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
public:
    UStaticActorReference();

};

