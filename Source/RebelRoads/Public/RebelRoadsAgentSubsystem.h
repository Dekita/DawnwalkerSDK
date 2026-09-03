#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RebelRoadsAgentSubsystem.generated.h"

class URebelSpatialLayer;

UCLASS(Blueprintable)
class REBELROADS_API URebelRoadsAgentSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URebelSpatialLayer*> AgentsSpatialLayers;
    
public:
    URebelRoadsAgentSubsystem();

};

