#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RebelSpatialElementProxyInterface.h"
#include "Templates/SubclassOf.h"
#include "RebelSpatialElementComponent.generated.h"

class URebelSpatialElementDefinition_Blueprint;
class URebelSpatialElementDefinition_Complex;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELSPATIALSYSTEM_API URebelSpatialElementComponent : public UActorComponent, public IRebelSpatialElementProxyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelSpatialElementDefinition_Blueprint> AssetDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelSpatialElementDefinition_Complex* CustomDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelSpatialElementDefinition_Complex* DefinitionPtr;
    
public:
    URebelSpatialElementComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

