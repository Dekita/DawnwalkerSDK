#pragma once
#include "CoreMinimal.h"
#include "FactRequest.h"
#include "QuestNode.h"
#include "QuestNodeMultiFactIntBranch.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeMultiFactIntBranch : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactRequest Fact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Values;
    
public:
    UQuestNodeMultiFactIntBranch();

};

