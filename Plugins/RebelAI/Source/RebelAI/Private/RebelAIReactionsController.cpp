#include "RebelAIReactionsController.h"

URebelAIReactionsController::URebelAIReactionsController() {
    this->LoadedReactionsConfig = NULL;
}

void URebelAIReactionsController::SignalSituationToStub(URebelAIStub* Stub, const FGameplayTag& SituationTag, URebelAIStub* Instigator, const bool bDeferred, const bool bResumed, const FGameplayTag& SignalSituation, const FInstancedStruct OverrideReaction) {
}


