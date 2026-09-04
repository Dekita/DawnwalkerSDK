#include "FlowNode_PlayLevelSequence.h"

UFlowNode_PlayLevelSequence::UFlowNode_PlayLevelSequence() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(4);
    this->OutputPins.AddDefaulted(5);
    this->bPlayReverse = false;
    this->bUseGraphOwnerAsTransformOrigin = false;
    this->bReplicates = false;
    this->bAlwaysRelevant = false;
    this->bApplyOwnerTimeDilation = true;
    this->LoadedSequence = NULL;
    this->SequencePlayer = NULL;
    this->StartTime = 0.00f;
    this->ElapsedTime = 0.00f;
    this->TimeDilation = 1.00f;
}

void UFlowNode_PlayLevelSequence::OnPlaybackFinished() {
}


