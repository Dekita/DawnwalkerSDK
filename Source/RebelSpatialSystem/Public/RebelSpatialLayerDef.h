#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelSpatialLayerDef.generated.h"

class URebelSpatialLayer;

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialLayerDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelSpatialLayer* Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FRebelSpatialLayerDef();
};

