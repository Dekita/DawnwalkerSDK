#include "FlowLevelSequenceActor.h"
#include "FlowLevelSequencePlayer.h"
#include "Net/UnrealNetwork.h"

AFlowLevelSequenceActor::AFlowLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFlowLevelSequencePlayer>(TEXT("AnimationPlayer"))) {
    this->ReplicatedLevelSequenceAsset = NULL;
}

void AFlowLevelSequenceActor::OnRep_ReplicatedLevelSequenceAsset() {
}

void AFlowLevelSequenceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlowLevelSequenceActor, ReplicatedLevelSequenceAsset);
}


