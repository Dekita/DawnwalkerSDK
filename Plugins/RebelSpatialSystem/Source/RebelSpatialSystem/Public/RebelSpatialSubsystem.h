#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RebelSpatialSubsystem.generated.h"

class URebelSpatialLayer;

UCLASS(Blueprintable)
class REBELSPATIALSYSTEM_API URebelSpatialSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, URebelSpatialLayer*> LayersMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URebelSpatialLayer*> LayersArray;
    
public:
    URebelSpatialSubsystem();

};

