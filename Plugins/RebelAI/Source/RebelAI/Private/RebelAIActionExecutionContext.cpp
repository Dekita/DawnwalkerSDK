#include "RebelAIActionExecutionContext.h"

URebelAIActionExecutionContext::URebelAIActionExecutionContext() {
    this->Timestamp = 0.00f;
}

void URebelAIActionExecutionContext::StopPlayingMontages(float BlendTime) {
}

void URebelAIActionExecutionContext::Stop(bool bStopMontages) {
}

void URebelAIActionExecutionContext::OnAbilityEnded(UGameplayAbility* Ability) {
}

bool URebelAIActionExecutionContext::IsFinished() const {
    return false;
}

double URebelAIActionExecutionContext::GetTimeStamp() const {
    return 0.0;
}

FGameplayTagContainer URebelAIActionExecutionContext::GetTags() const {
    return FGameplayTagContainer{};
}

FGameplayTag URebelAIActionExecutionContext::GetActionTag() const {
    return FGameplayTag{};
}

FRebelAIActionDesc URebelAIActionExecutionContext::GetActionDesc() const {
    return FRebelAIActionDesc{};
}

void URebelAIActionExecutionContext::AddTag(const FGameplayTag& Tag) {
}


