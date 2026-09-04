#pragma once
#include "CoreMinimal.h"
#include "FlowNode_Start.h"
#include "GameplayTagContainer.h"
#include "VoiceSetEntry.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UVoiceSetEntry : public UFlowNode_Start {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Type;
    
    UVoiceSetEntry();

};

