#pragma once
#include "CoreMinimal.h"
#include "StaticBaseReference.h"
#include "StaticMappinableReference.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODSYSTEM_API UStaticMappinableReference : public UStaticBaseReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
public:
    UStaticMappinableReference();

};

