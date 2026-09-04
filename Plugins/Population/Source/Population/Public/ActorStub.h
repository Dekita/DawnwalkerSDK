#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RebelSpatialElementProxyInterface.h"
#include "ActorStubKnowledge.h"
#include "ActorStub.generated.h"

class ACommunityController;
class APawn;
class UActionSlotComponent;
class UActorStubDebug;

UCLASS(Blueprintable)
class POPULATION_API UActorStub : public UObject, public IRebelSpatialElementProxyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActorStubDebug* Debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActorStubKnowledge Knowledge;
    
public:
    UActorStub();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResolved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActionSlotComponent* GetSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugStringEx() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorStubDebug* GetDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACommunityController* GetController() const;
    

    // Fix for true pure virtual functions not being implemented
};

