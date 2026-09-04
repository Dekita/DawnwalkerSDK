#pragma once
#include "CoreMinimal.h"
#include "ComponentPool.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FComponentPool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ActiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> InactiveComponents;
    
public:
    DIALOGUESYSTEM_API FComponentPool();
};

