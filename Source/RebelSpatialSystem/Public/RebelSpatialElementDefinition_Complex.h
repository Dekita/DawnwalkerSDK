#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelSpatialElementDefinition.h"
#include "RebelSpatialElementDefinition_Complex.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELSPATIALSYSTEM_API URebelSpatialElementDefinition_Complex : public URebelSpatialElementDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplaceActorWithImpostor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTrackMovement;
    
public:
    URebelSpatialElementDefinition_Complex();

};

