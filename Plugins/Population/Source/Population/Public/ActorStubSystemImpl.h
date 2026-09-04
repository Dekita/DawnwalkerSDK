#pragma once
#include "CoreMinimal.h"
#include "SaveGameInterface.h"
#include "ActorStubSystemInterface.h"
#include "ActorStubSystemImpl.generated.h"

class UActorIdSystemInterface;
class UActorStub;
class UPopulationSystemImpl;
class URebelCrowdSubsystem;
class URebelVisibilitySubsystem;

UCLASS(Blueprintable)
class UActorStubSystemImpl : public UActorStubSystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActorIdSystemInterface* IdSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPopulationSystemImpl* PopulationSystem;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, UActorStub*> Stubs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorStub* MainPlayerCharacterStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelVisibilitySubsystem* VisibilitySubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelCrowdSubsystem* CrowdSubsystem;
    
public:
    UActorStubSystemImpl();


    // Fix for true pure virtual functions not being implemented
};

