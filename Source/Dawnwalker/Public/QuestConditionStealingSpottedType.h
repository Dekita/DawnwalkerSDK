#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "QuestConditionStealingSpottedType.generated.h"

class UActorReferenceType;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionStealingSpottedType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorReferenceType*> SpottedByAnyOfNPCs;
    
public:
    UQuestConditionStealingSpottedType();

    UFUNCTION(BlueprintCallable)
    void OnItemStolen() const;
    
};

