#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsMoveTargetSubsystemInterface.h"
#include "RebelRoadsMoveTargetSubsystem.generated.h"

class URebelRoadsAgentSubsystem;
class URebelRoadsConfig;
class URebelRoadsSubsystemImpl;

UCLASS(Blueprintable)
class REBELROADS_API URebelRoadsMoveTargetSubsystem : public URebelRoadsMoveTargetSubsystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsSubsystemImpl* RoadsSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsAgentSubsystem* AgentSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelRoadsConfig* Config;
    
public:
    URebelRoadsMoveTargetSubsystem();

};

