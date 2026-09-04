#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "FlowLevelSequenceActor.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class FLOW_API AFlowLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedLevelSequenceAsset, meta=(AllowPrivateAccess=true))
    ULevelSequence* ReplicatedLevelSequenceAsset;
    
public:
    AFlowLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedLevelSequenceAsset();
    
};

