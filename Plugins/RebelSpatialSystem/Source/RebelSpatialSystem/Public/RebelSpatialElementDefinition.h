#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "RebelSpatialElementDefinition.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELSPATIALSYSTEM_API URebelSpatialElementDefinition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FInstancedStruct Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
public:
    URebelSpatialElementDefinition();

};

