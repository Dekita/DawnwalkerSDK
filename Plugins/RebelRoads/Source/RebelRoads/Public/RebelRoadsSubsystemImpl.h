#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsSubsystemInterface.h"
#include "RebelRoadsSubsystemImpl.generated.h"

class AActor;
class ARebelRoadsGraph;
class URebelRoadsConfig;

UCLASS(Blueprintable)
class REBELROADS_API URebelRoadsSubsystemImpl : public URebelRoadsSubsystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelRoadsConfig* Config;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ARebelRoadsGraph*, uint32> Graphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Debug_WayPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Debug_ActionPoints;
    
public:
    URebelRoadsSubsystemImpl();

};

