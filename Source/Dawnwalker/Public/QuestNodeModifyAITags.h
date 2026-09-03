#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "EModifyAITagsOperation.h"
#include "QuestNodeModifyAITags.generated.h"

class UActorReferenceType;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeModifyAITags : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EModifyAITagsOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> References;
    
public:
    UQuestNodeModifyAITags();

};

