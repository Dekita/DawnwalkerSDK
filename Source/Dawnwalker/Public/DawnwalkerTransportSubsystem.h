#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "OnTransportRegisteredDelegate.h"
#include "OnTransportUnregisteredDelegate.h"
#include "DawnwalkerTransportSubsystem.generated.h"

class ADawnwalkerTransportActor;
class URebelRoadsMoveTargetSubsystemInterface;
class URebelRoadsSubsystemInterface;

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerTransportSubsystem : public UTickableWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, ADawnwalkerTransportActor*> RegisteredTransports;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelRoadsSubsystemInterface* RoadsSubsystemInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelRoadsMoveTargetSubsystemInterface* MoveTargetSubsystemInterface;
    
public:
    UDawnwalkerTransportSubsystem();

    UFUNCTION()
    FOnTransportUnregistered GetOnTransportUnregistered();
    
    UFUNCTION()
    FOnTransportRegistered GetOnTransportRegistered();
    
    UFUNCTION(BlueprintCallable)
    void BP_DestroyTransport(ADawnwalkerTransportActor* TransportActor);
    
    UFUNCTION(BlueprintCallable)
    void BP_CreateTransport(ADawnwalkerTransportActor* TransportActor);
    

    // Fix for true pure virtual functions not being implemented
};

