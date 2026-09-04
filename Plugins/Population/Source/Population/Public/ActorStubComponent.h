#pragma once
#include "CoreMinimal.h"
#include "PersistencyComponent.h"
#include "ActorStubComponent.generated.h"

class UActorStub;
class UCommunitySystemInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POPULATION_API UActorStubComponent : public UPersistencyComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorStub* Stub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunitySystemInterface* System;
    
public:
    UActorStubComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnNewAssignmentNeeded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorStub* GetStub() const;
    
};

