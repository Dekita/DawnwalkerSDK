#pragma once
#include "CoreMinimal.h"
#include "ActorReference.generated.h"

class UActorReferenceType;

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FActorReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorReferenceType* ReferenceType;
    
public:
    FActorReference();
};

